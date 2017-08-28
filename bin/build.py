#!/usr/bin/env python3

import argparse, glob, os, platform, shutil, subprocess, sys
import xml.etree.ElementTree as ET


def safe_delete( dp ):
	if os.path.exists( dp ):
		for i in range(10):
			try:
				shutil.rmtree( dp )
			except:
				pass
		if os.path.exists( dp ):
			shutil.rmtree( dp )
def path_under( testpath, parentpath ):
	testpath = os.path.realpath( testpath )
	parentpath = os.path.realpath( parentpath )
	return os.path.commonprefix([ testpath, parentpath ]) == parentpath

RESOURCE_PATH = "Resources"



parser = argparse.ArgumentParser( description = "Build a redistributable package." )
parser.add_argument( "-d", "--dir", required = True )
parser.add_argument( "-e", "--exeprefix", required = True )
parser.add_argument( "-p", "--platform", required = True, choices = [ "windows", "android" ] )
parser.add_argument( "--debug", action = "store_true", default = False )
parser.add_argument( "--install", action = "store_true", default = False )
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
	os.mkdir( TGTDIR )
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

class AndroidPaths:
	def which( self, path ):
		# python bugs, yay
		if os.name == "nt":
			for ext in os.environ.get( "PATHEXT", "" ).split( os.pathsep ):
				if os.path.exists( path + ext.lower() ):
					return path + ext.lower()
		return shutil.which( path, path = os.pathsep + os.environ[ "PATH" ] )
	def envpath( self, printname, name ):
		p = os.environ.get( name )
		if p is None:
			print( "  ERROR: Missing environment variable %s" % name )
			self.errors = True
		elif p == "" or not os.path.exists( p ):
			print( "  ERROR: Path specified in %s env.var. does not exist" % name )
			self.errors = True
		else:
			print( "- %s: %s" % ( printname, p ) )
		return p
		
	def exepath( self, printname, printbase, *pathbits ):
		testpath = os.path.join( *pathbits )
		p = self.which( testpath )
		if p is None:
			print( "  ERROR: Could not find '%s' in '%s' (tried %s)" % ( printname, printbase, testpath ) )
			self.errors = True
		else:
			print( "- %s: %s" % ( printname, p ) )
		return p
		
	def __init__( self ):
		self.errors = False
		
		print( "Checking Android build environment..." )
		asn = "Android SDK"
		self.sdk = self.envpath( asn, "ANDROID_SDK" )
		if not self.sdk:
			self.sdk = "ANDROID_SDK[not found]"
		self.adb = self.exepath( "adb", asn, self.sdk, "platform-tools", "adb" )
		self.android = self.exepath( "android", asn, self.sdk, "tools", "android" )
		# TODO find build tools
		self.zipalign = self.exepath( "zipalign", asn, self.sdk, "build-tools", "25.0.2", "zipalign" )
		
		jhn = "Java"
		self.javahome = self.envpath( jhn, "JAVA_HOME" )
		if not self.javahome:
			self.javahome = "JAVA_HOME[not found]"
		self.keytool = self.exepath( "keytool", jhn, self.javahome, "bin", "keytool" )
		self.jarsigner = self.exepath( "jarsigner", jhn, self.javahome, "bin", "jarsigner" )
		
		self.ant = self.which( "ant" )
		if self.ant is None:
			print( "ant not in path" )
			self.errors = True
		else:
			print( "- ant: " + self.ant )
		
		if self.errors:
			raise Exception( "Failed to validate Android build environment" )
		else:
			print( "Done" )

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
	
	paths = AndroidPaths()
	# build APK
	cwd = TGTP( "android_tmp" )
	run_process([ paths.android, "update", "project", "--path", ".", "--target", "android-16" ], cwd )
	if args.debug:
		run_process([ paths.ant, "debug" ], cwd )
		# copy built APK to output path
		apkname = TGTP( "%s-debug.apk" % args.exeprefix )
		shutil.copy( TGTP( "android_tmp/bin/sgsouzel-debug.apk" ), apkname )
	else:
		run_process([ paths.ant, "release" ], cwd )
		# copy built APK to output path
		apkname = TGTP( "%s-release.apk" % args.exeprefix )
		shutil.copy( TGTP( "android_tmp/bin/sgsouzel-release-unsigned.apk" ), apkname )
		# sign APK
		# TODO allow generating key and passing own key separately
		run_process([ paths.keytool,
			"-genkey", "-v",
			"-keystore", "my-release-key.keystore",
			"-alias", "alias_name",
			"-keyalg", "RSA",
			"-keysize", "2048",
			"-validity", "10000"
		], cwd )
		run_process([ paths.jarsigner,
			"-verbose",
			"-sigalg", "SHA1withRSA",
			"-digestalg", "SHA1",
			"-keystore", "my-release-key.keystore",
			apkname,
			"alias_name"
		], cwd )
		run_process([ paths.jarsigner, "-verify", "-verbose", "-certs", apkname ])
		run_process([ paths.zipalign, "-v", "4", apkname, apkname + ".aligned.zip" ])
		os.remove( apkname )
		os.rename( apkname + ".aligned.zip", apkname )
	if args.install:
		# manifest = ET.parse( DEVP( "android", "AndroidManifest.xml" ) ).getroot()
		# run_process([ paths.adb, "uninstall", manifest.attrib[ "package" ] ])
		run_process([ paths.adb, "install", "-r", apkname ])


if args.platform == "windows":
	build_windows()
elif args.platform == "android":
	build_android()
else:
	raise Exception( "unknown/unsupported platform: " + args.platform )
