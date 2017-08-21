#!/usr/bin/env python3

import argparse, os, platform, shutil, subprocess

RESOURCE_PATH = "Resources"



parser = argparse.ArgumentParser( description = "Build a redistributable package." )
parser.add_argument( "-d", "--dir", required = True )
parser.add_argument( "-e", "--exeprefix", required = True )
parser.add_argument( "-p", "--platform", required = True, choices = [ "windows" ] )
args = parser.parse_args()


def safe_delete( dp ):
	if os.path.exists( dp ):
		os.rename( dp, dp + "~" )
		shutil.rmtree( dp + "~" )
	os.mkdir( dp )

def build_windows():
	safe_delete( args.dir )
	# binaries
	shutil.copy( "sgsouzel-win32.exe", os.path.join( args.dir, args.exeprefix + "-win32.exe" ) )
	# settings
	if os.path.exists( "settings-production.ini" ):
		shutil.copy( "settings-production.ini", args.dir )
	else
		shutil.copy( "settings.ini", args.dir )
	# scripts
	# resources
	shutil.copytree( RESOURCE_PATH, os.path.join( args.dir, RESOURCE_PATH ) )


if args.platform == "windows":
	build_windows()
