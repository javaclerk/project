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
CMAKE_SOURCE_DIR = /home/psj/psj_dotest/project/receiving_process

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/psj/psj_dotest/project/receiving_process

# Include any dependencies generated for this target.
include mq/CMakeFiles/mq.dir/depend.make

# Include the progress variables for this target.
include mq/CMakeFiles/mq.dir/progress.make

# Include the compile flags for this target's objects.
include mq/CMakeFiles/mq.dir/flags.make

mq/CMakeFiles/mq.dir/checkDate.cc.o: mq/CMakeFiles/mq.dir/flags.make
mq/CMakeFiles/mq.dir/checkDate.cc.o: mq/checkDate.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/psj/psj_dotest/project/receiving_process/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object mq/CMakeFiles/mq.dir/checkDate.cc.o"
	cd /home/psj/psj_dotest/project/receiving_process/mq && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mq.dir/checkDate.cc.o -c /home/psj/psj_dotest/project/receiving_process/mq/checkDate.cc

mq/CMakeFiles/mq.dir/checkDate.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mq.dir/checkDate.cc.i"
	cd /home/psj/psj_dotest/project/receiving_process/mq && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/psj/psj_dotest/project/receiving_process/mq/checkDate.cc > CMakeFiles/mq.dir/checkDate.cc.i

mq/CMakeFiles/mq.dir/checkDate.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mq.dir/checkDate.cc.s"
	cd /home/psj/psj_dotest/project/receiving_process/mq && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/psj/psj_dotest/project/receiving_process/mq/checkDate.cc -o CMakeFiles/mq.dir/checkDate.cc.s

mq/CMakeFiles/mq.dir/receive.cc.o: mq/CMakeFiles/mq.dir/flags.make
mq/CMakeFiles/mq.dir/receive.cc.o: mq/receive.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/psj/psj_dotest/project/receiving_process/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object mq/CMakeFiles/mq.dir/receive.cc.o"
	cd /home/psj/psj_dotest/project/receiving_process/mq && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mq.dir/receive.cc.o -c /home/psj/psj_dotest/project/receiving_process/mq/receive.cc

mq/CMakeFiles/mq.dir/receive.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mq.dir/receive.cc.i"
	cd /home/psj/psj_dotest/project/receiving_process/mq && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/psj/psj_dotest/project/receiving_process/mq/receive.cc > CMakeFiles/mq.dir/receive.cc.i

mq/CMakeFiles/mq.dir/receive.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mq.dir/receive.cc.s"
	cd /home/psj/psj_dotest/project/receiving_process/mq && /opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/psj/psj_dotest/project/receiving_process/mq/receive.cc -o CMakeFiles/mq.dir/receive.cc.s

# Object files for target mq
mq_OBJECTS = \
"CMakeFiles/mq.dir/checkDate.cc.o" \
"CMakeFiles/mq.dir/receive.cc.o"

# External object files for target mq
mq_EXTERNAL_OBJECTS =

mq/libmq.a: mq/CMakeFiles/mq.dir/checkDate.cc.o
mq/libmq.a: mq/CMakeFiles/mq.dir/receive.cc.o
mq/libmq.a: mq/CMakeFiles/mq.dir/build.make
mq/libmq.a: mq/CMakeFiles/mq.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/psj/psj_dotest/project/receiving_process/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libmq.a"
	cd /home/psj/psj_dotest/project/receiving_process/mq && $(CMAKE_COMMAND) -P CMakeFiles/mq.dir/cmake_clean_target.cmake
	cd /home/psj/psj_dotest/project/receiving_process/mq && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mq.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mq/CMakeFiles/mq.dir/build: mq/libmq.a

.PHONY : mq/CMakeFiles/mq.dir/build

mq/CMakeFiles/mq.dir/clean:
	cd /home/psj/psj_dotest/project/receiving_process/mq && $(CMAKE_COMMAND) -P CMakeFiles/mq.dir/cmake_clean.cmake
.PHONY : mq/CMakeFiles/mq.dir/clean

mq/CMakeFiles/mq.dir/depend:
	cd /home/psj/psj_dotest/project/receiving_process && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/psj/psj_dotest/project/receiving_process /home/psj/psj_dotest/project/receiving_process/mq /home/psj/psj_dotest/project/receiving_process /home/psj/psj_dotest/project/receiving_process/mq /home/psj/psj_dotest/project/receiving_process/mq/CMakeFiles/mq.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mq/CMakeFiles/mq.dir/depend
