#!/usr/bin/env python3

import os, platform, shutil, subprocess

def safe_replace( txin, txfrom, txto ):
	txout = txin.replace( txfrom, txto )
	if txout == txin:
		raise Exception( "failed to replace '%s' to '%s'" % ( txfrom, txto ) )
	return txout

PLATFORM = platform.system()

print( "creating output directory" )
if os.path.exists( "dist" ):
	os.rename( "dist", "dist~" )
	shutil.rmtree( "dist~" )
os.mkdir( "dist" )

print( "copying sample resources (if this fails, submodules haven't been checked out)" )
shutil.copytree( "ext/ouzel/samples/Resources", "dist/Resources" )

print( "copying sample code & helpers" )
files = [
	"build.py",
	"settings.ini",
	"main-menu.sgs",
	"main-sample-animations.sgs",
	"main-sample-gui.sgs",
	"main-sample-input.sgs",
	"main-sample-rt.sgs",
	"main-sample-sound.sgs",
	"main-sample-sprites.sgs",
	"main.sgs",
]
for f in files:
	shutil.copy( "bin/" + f, "dist" )

print( "copying local platform files (if this fails, make hasn't been run)" )
if PLATFORM == "Windows":
	shutil.copy( "bin/sgsouzel-win32.exe", "dist" )

# TODO Android

print( "building an archive" )
name = "sgsouzel_dist_" + PLATFORM
shutil.make_archive( name, "zip" if PLATFORM == "Windows" else "gztar", ".", "dist" )
