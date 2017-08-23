
ifeq ($(OS),Windows_NT)
	fnREMOVE_ALL = del /F /S /Q
	fnCOPY_FILE = copy
	fnFIX_PATH = $(subst /,\,$1)
else
	fnREMOVE_ALL = rm -rf
	fnCOPY_FILE = cp -f
	fnFIX_PATH = $1
endif

bin/sgsouzel-win32.exe: src/cppbc_sgs_ouzel.cpp src/sgs_ouzel.cpp ext/sgscript/ext/sgsxgmath.c ext/sgscript/ext/sgs_prof.c ext/ouzel/build/libouzel.a ext/sgscript/lib/libsgscript.a | bin/Resources
	$(CXX) -std=gnu++11 -o $@ $^ -Iext/sgscript/src -Iext/ouzel/ouzel -Lext/ouzel/build -louzel -Lext/sgscript/lib -lsgscript -lkernel32 -luser32 -lgdi32 -lole32 -loleaut32 -lOpenGL32 -ldsound -ld3d11 -ldinput8 -lxinput -luuid -ldxguid -lshlwapi -u WinMain

bin/Resources: ext/ouzel/samples/Resources
	-robocopy $(call fnFIX_PATH,$<) $(call fnFIX_PATH,$@) /E

src/cppbc_sgs_ouzel.cpp: src/sgs_ouzel.hpp | ext/sgscript/bin/sgsvm.exe
	ext/sgscript/bin/sgsvm.exe -p ext/sgscript/ext/cppbc.sgs src/sgs_ouzel.hpp -iname sgs_ouzel.hpp

ext/sgscript/bin/sgsvm.exe:
	$(MAKE) -C ext/sgscript arch=auto vm
ext/sgscript/lib/libsgscript.a:
	$(MAKE) -C ext/sgscript arch=auto static=1
ext/ouzel/build/libouzel.a:
	$(MAKE) -C ext/ouzel/build
