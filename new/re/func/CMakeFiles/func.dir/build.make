# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chj/workspace/project/new/re

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chj/workspace/project/new/re

# Include any dependencies generated for this target.
include func/CMakeFiles/func.dir/depend.make

# Include the progress variables for this target.
include func/CMakeFiles/func.dir/progress.make

# Include the compile flags for this target's objects.
include func/CMakeFiles/func.dir/flags.make

func/CMakeFiles/func.dir/ledfunc.cc.o: func/CMakeFiles/func.dir/flags.make
func/CMakeFiles/func.dir/ledfunc.cc.o: func/ledfunc.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/new/re/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object func/CMakeFiles/func.dir/ledfunc.cc.o"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/func.dir/ledfunc.cc.o -c /home/chj/workspace/project/new/re/func/ledfunc.cc

func/CMakeFiles/func.dir/ledfunc.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/func.dir/ledfunc.cc.i"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/new/re/func/ledfunc.cc > CMakeFiles/func.dir/ledfunc.cc.i

func/CMakeFiles/func.dir/ledfunc.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/func.dir/ledfunc.cc.s"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/new/re/func/ledfunc.cc -o CMakeFiles/func.dir/ledfunc.cc.s

func/CMakeFiles/func.dir/ledpattern.cc.o: func/CMakeFiles/func.dir/flags.make
func/CMakeFiles/func.dir/ledpattern.cc.o: func/ledpattern.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/new/re/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object func/CMakeFiles/func.dir/ledpattern.cc.o"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/func.dir/ledpattern.cc.o -c /home/chj/workspace/project/new/re/func/ledpattern.cc

func/CMakeFiles/func.dir/ledpattern.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/func.dir/ledpattern.cc.i"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/new/re/func/ledpattern.cc > CMakeFiles/func.dir/ledpattern.cc.i

func/CMakeFiles/func.dir/ledpattern.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/func.dir/ledpattern.cc.s"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/new/re/func/ledpattern.cc -o CMakeFiles/func.dir/ledpattern.cc.s

func/CMakeFiles/func.dir/tempfunc.cc.o: func/CMakeFiles/func.dir/flags.make
func/CMakeFiles/func.dir/tempfunc.cc.o: func/tempfunc.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/new/re/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object func/CMakeFiles/func.dir/tempfunc.cc.o"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/func.dir/tempfunc.cc.o -c /home/chj/workspace/project/new/re/func/tempfunc.cc

func/CMakeFiles/func.dir/tempfunc.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/func.dir/tempfunc.cc.i"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/new/re/func/tempfunc.cc > CMakeFiles/func.dir/tempfunc.cc.i

func/CMakeFiles/func.dir/tempfunc.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/func.dir/tempfunc.cc.s"
	cd /home/chj/workspace/project/new/re/func && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/new/re/func/tempfunc.cc -o CMakeFiles/func.dir/tempfunc.cc.s

# Object files for target func
func_OBJECTS = \
"CMakeFiles/func.dir/ledfunc.cc.o" \
"CMakeFiles/func.dir/ledpattern.cc.o" \
"CMakeFiles/func.dir/tempfunc.cc.o"

# External object files for target func
func_EXTERNAL_OBJECTS =

func/libfunc.a: func/CMakeFiles/func.dir/ledfunc.cc.o
func/libfunc.a: func/CMakeFiles/func.dir/ledpattern.cc.o
func/libfunc.a: func/CMakeFiles/func.dir/tempfunc.cc.o
func/libfunc.a: func/CMakeFiles/func.dir/build.make
func/libfunc.a: func/CMakeFiles/func.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chj/workspace/project/new/re/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libfunc.a"
	cd /home/chj/workspace/project/new/re/func && $(CMAKE_COMMAND) -P CMakeFiles/func.dir/cmake_clean_target.cmake
	cd /home/chj/workspace/project/new/re/func && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/func.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
func/CMakeFiles/func.dir/build: func/libfunc.a

.PHONY : func/CMakeFiles/func.dir/build

func/CMakeFiles/func.dir/clean:
	cd /home/chj/workspace/project/new/re/func && $(CMAKE_COMMAND) -P CMakeFiles/func.dir/cmake_clean.cmake
.PHONY : func/CMakeFiles/func.dir/clean

func/CMakeFiles/func.dir/depend:
	cd /home/chj/workspace/project/new/re && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chj/workspace/project/new/re /home/chj/workspace/project/new/re/func /home/chj/workspace/project/new/re /home/chj/workspace/project/new/re/func /home/chj/workspace/project/new/re/func/CMakeFiles/func.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : func/CMakeFiles/func.dir/depend

