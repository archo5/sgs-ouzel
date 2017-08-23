#!/usr/bin/env python3

import argparse, os, platform, shutil, subprocess, glob


def safe_delete( dp ):
	if os.path.exists( dp ):
		os.rename( dp, dp + "~" )
		shutil.rmtree( dp + "~" )
	os.mkdir( dp )
def path_under( testpath, parentpath ):
	testpath = os.path.realpath( testpath )
	parentpath = os.path.realpath( parentpath )
	return os.path.commonprefix([ testpath, parentpath ]) == parentpath

RESOURCE_PATH = "Resources"



parser = argparse.ArgumentParser( description = "Build a redistributable package." )
parser.add_argument( "-d", "--dir", required = True )
parser.add_argument( "-e", "--exeprefix", required = True )
parser.add_argument( "-p", "--platform", required = True, choices = [ "windows" ] )
args = parser.parse_args()

DEVDIR = os.path.dirname( os.path.realpath( __file__ ) )
TGTDIR = args.dir
def DEVP( *aa ):
	return os.path.join( DEVDIR, *aa )
def TGTP( *aa ):
	return os.path.join( TGTDIR, *aa )
if path_under( TGTDIR, DEVDIR ):
	raise Exception( "cannot export to development directory" )


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
	scripts = [ os.path.relpath( ff, DEVDIR )
		for f in os.walk( DEVDIR )
		for ff in glob.glob( os.path.join( f[0], "*.sgs" ) )
	]
	print( scripts )
	for script in scripts:
		dirpath = TGTP( os.path.dirname( script ) )
		if not os.path.exists( dirpath ):
			os.makedirs( dirpath )
		shutil.copy( DEVP( script ), TGTP( script ) )
	# resources
	shutil.copytree( DEVP( RESOURCE_PATH ), TGTP( RESOURCE_PATH ) )


if args.platform == "windows":
	build_windows()
