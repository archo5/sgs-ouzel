#!/usr/bin/env python3

import argparse, glob, os, platform, shutil, subprocess, sys


def safe_delete( dp ):
	if os.path.exists( dp ):
		shutil.rmtree( dp )
	os.mkdir( dp )
def path_under( testpath, parentpath ):
	testpath = os.path.realpath( testpath )
	parentpath = os.path.realpath( parentpath )
	return os.path.commonprefix([ testpath, parentpath ]) == parentpath

RESOURCE_PATH = "Resources"



parser = argparse.ArgumentParser( description = "Build a redistributable package." )
parser.add_argument( "-d", "--dir", required = True )
parser.add_argument( "-e", "--exeprefix", required = True )
parser.add_argument( "-p", "--platform", required = True, choices = [ "windows", "android" ] )
args = parser.parse_args()

DEVDIR = os.path.dirname( os.path.realpath( __file__ ) )
TGTDIR = os.path.realpath( args.dir )
def DEVP( *aa ):
	return os.path.join( DEVDIR, *aa )
def TGTP( *aa ):
	return os.path.join( TGTDIR, *aa )
if path_under( TGTDIR, DEVDIR ):
	raise Exception( "cannot export to development directory" )


def run_process( cmd, cwd = os.getcwd() ):
	print( "Execute: " + " ".join( cmd ) )
	try:
		subprocess.check_output( cmd, cwd = cwd ) #, stderr = subprocess.STDOUT )
	except subprocess.CalledProcessError as e:
		print( "FAILED (return code = %d), output:\n" % e.returncode )
		sys.stdout.buffer.write( e.output )
		raise

def copy_scripts( dst ):
	scripts = [ os.path.relpath( ff, DEVDIR )
		for f in os.walk( DEVDIR )
		for ff in glob.glob( os.path.join( f[0], "*.sgs" ) )
	]
	# print( scripts )
	for script in scripts:
		dirpath = os.path.join( dst, os.path.dirname( script ) )
		if not os.path.exists( dirpath ):
			os.makedirs( dirpath )
		shutil.copy( DEVP( script ), os.path.join( dst, script ) )

def build_windows():
	safe_delete( TGTDIR )
	# binaries
	shutil.copy(
		DEVP( "sgsouzel-win32.exe" ),
		os.path.join( TGTDIR, args.exeprefix + "-win32.exe" ) )
	# settings
	if os.path.exists( DEVP( "settings-production.ini" ) ):
		shutil.copy( DEVP( "settings-production.ini" ), TGTDIR )
	else:
		shutil.copy( DEVP( "settings.ini" ), TGTDIR )
	# scripts
	copy_scripts( TGTDIR )
	# resources
	shutil.copytree( DEVP( RESOURCE_PATH ), TGTP( RESOURCE_PATH ) )

def android_ignore_prebuilt( directory, contents ):
	if DEVP( directory ) == DEVP( "android" ):
		return [ "bin", "gen", "jni", "obj" ]
	return []
def build_android():
	safe_delete( TGTDIR )
	# build files & binaries
	shutil.copytree( DEVP( "android" ), TGTP( "android_tmp" ), ignore = android_ignore_prebuilt )
	# resources
	shutil.copytree( DEVP( RESOURCE_PATH ), TGTP( "android_tmp/assets" ) )
	# scripts
	copy_scripts( TGTP( "android_tmp/assets" ) )
	
	# TODO
	android_SDK_location = "E:/android/sdk"
	ant_cmd_path = "E:/android/ant/bin/ant.bat"
	os.environ[ "JAVA_HOME" ] = "C:/Program Files/Java/jdk1.8.0_101"
	android_cmd_path = os.path.join( android_SDK_location, "tools", "android.bat" )
	keytool_path = os.path.join( os.environ[ "JAVA_HOME" ], "bin", "keytool.exe" )
	jarsigner_path = os.path.join( os.environ[ "JAVA_HOME" ], "bin", "jarsigner.exe" )
	zipalign_path = os.path.join( android_SDK_location, "build-tools", "25.0.2", "zipalign.exe" )
	# build APK
	cwd = TGTP( "android_tmp" )
	run_process([ android_cmd_path, "update", "project", "--path", ".", "--target", "android-16" ], cwd )
	run_process([ ant_cmd_path, "release" ], cwd )
	# copy built APK to output path
	apkname = TGTP( "%s-release.apk" % args.exeprefix )
	shutil.copy( TGTP( "android_tmp/bin/sgsouzel-release-unsigned.apk" ), apkname )
	# sign APK
	run_process([ keytool_path,
		"-genkey", "-v",
		"-keystore", "my-release-key.keystore",
		"-alias", "alias_name",
		"-keyalg", "RSA",
		"-keysize", "2048",
		"-validity", "10000"
	], cwd )
	run_process([ jarsigner_path,
		"-verbose",
		"-sigalg", "SHA1withRSA",
		"-digestalg", "SHA1",
		"-keystore", "my-release-key.keystore",
		apkname,
		"alias_name"
	], cwd )
	run_process([ jarsigner_path, "-verify", "-verbose", "-certs", apkname ])
	run_process([ zipalign_path, "-v", "4", apkname, apkname + ".aligned.zip" ])
	os.remove( apkname )
	os.rename( apkname + ".aligned.zip", apkname )


if args.platform == "windows":
	build_windows()
elif args.platform == "android":
	build_android()
else:
	raise Exception( "unknown/unsupported platform: " + args.platform )
