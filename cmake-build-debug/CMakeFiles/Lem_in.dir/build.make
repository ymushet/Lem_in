# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /nfs/2016/y/ymushet/CLionProjects/Lem_in

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lem_in.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lem_in.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lem_in.dir/flags.make

CMakeFiles/Lem_in.dir/add_data.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/add_data.c.o: ../add_data.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lem_in.dir/add_data.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/add_data.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_data.c

CMakeFiles/Lem_in.dir/add_data.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/add_data.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_data.c > CMakeFiles/Lem_in.dir/add_data.c.i

CMakeFiles/Lem_in.dir/add_data.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/add_data.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_data.c -o CMakeFiles/Lem_in.dir/add_data.c.s

CMakeFiles/Lem_in.dir/add_data.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/add_data.c.o.requires

CMakeFiles/Lem_in.dir/add_data.c.o.provides: CMakeFiles/Lem_in.dir/add_data.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/add_data.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/add_data.c.o.provides

CMakeFiles/Lem_in.dir/add_data.c.o.provides.build: CMakeFiles/Lem_in.dir/add_data.c.o


CMakeFiles/Lem_in.dir/add_link.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/add_link.c.o: ../add_link.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Lem_in.dir/add_link.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/add_link.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_link.c

CMakeFiles/Lem_in.dir/add_link.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/add_link.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_link.c > CMakeFiles/Lem_in.dir/add_link.c.i

CMakeFiles/Lem_in.dir/add_link.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/add_link.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_link.c -o CMakeFiles/Lem_in.dir/add_link.c.s

CMakeFiles/Lem_in.dir/add_link.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/add_link.c.o.requires

CMakeFiles/Lem_in.dir/add_link.c.o.provides: CMakeFiles/Lem_in.dir/add_link.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/add_link.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/add_link.c.o.provides

CMakeFiles/Lem_in.dir/add_link.c.o.provides.build: CMakeFiles/Lem_in.dir/add_link.c.o


CMakeFiles/Lem_in.dir/add_room.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/add_room.c.o: ../add_room.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Lem_in.dir/add_room.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/add_room.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_room.c

CMakeFiles/Lem_in.dir/add_room.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/add_room.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_room.c > CMakeFiles/Lem_in.dir/add_room.c.i

CMakeFiles/Lem_in.dir/add_room.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/add_room.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/add_room.c -o CMakeFiles/Lem_in.dir/add_room.c.s

CMakeFiles/Lem_in.dir/add_room.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/add_room.c.o.requires

CMakeFiles/Lem_in.dir/add_room.c.o.provides: CMakeFiles/Lem_in.dir/add_room.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/add_room.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/add_room.c.o.provides

CMakeFiles/Lem_in.dir/add_room.c.o.provides.build: CMakeFiles/Lem_in.dir/add_room.c.o


CMakeFiles/Lem_in.dir/algo.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/algo.c.o: ../algo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Lem_in.dir/algo.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/algo.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/algo.c

CMakeFiles/Lem_in.dir/algo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/algo.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/algo.c > CMakeFiles/Lem_in.dir/algo.c.i

CMakeFiles/Lem_in.dir/algo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/algo.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/algo.c -o CMakeFiles/Lem_in.dir/algo.c.s

CMakeFiles/Lem_in.dir/algo.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/algo.c.o.requires

CMakeFiles/Lem_in.dir/algo.c.o.provides: CMakeFiles/Lem_in.dir/algo.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/algo.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/algo.c.o.provides

CMakeFiles/Lem_in.dir/algo.c.o.provides.build: CMakeFiles/Lem_in.dir/algo.c.o


CMakeFiles/Lem_in.dir/ants.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/ants.c.o: ../ants.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Lem_in.dir/ants.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/ants.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/ants.c

CMakeFiles/Lem_in.dir/ants.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/ants.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/ants.c > CMakeFiles/Lem_in.dir/ants.c.i

CMakeFiles/Lem_in.dir/ants.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/ants.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/ants.c -o CMakeFiles/Lem_in.dir/ants.c.s

CMakeFiles/Lem_in.dir/ants.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/ants.c.o.requires

CMakeFiles/Lem_in.dir/ants.c.o.provides: CMakeFiles/Lem_in.dir/ants.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/ants.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/ants.c.o.provides

CMakeFiles/Lem_in.dir/ants.c.o.provides.build: CMakeFiles/Lem_in.dir/ants.c.o


CMakeFiles/Lem_in.dir/dfs.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/dfs.c.o: ../dfs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Lem_in.dir/dfs.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/dfs.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/dfs.c

CMakeFiles/Lem_in.dir/dfs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/dfs.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/dfs.c > CMakeFiles/Lem_in.dir/dfs.c.i

CMakeFiles/Lem_in.dir/dfs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/dfs.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/dfs.c -o CMakeFiles/Lem_in.dir/dfs.c.s

CMakeFiles/Lem_in.dir/dfs.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/dfs.c.o.requires

CMakeFiles/Lem_in.dir/dfs.c.o.provides: CMakeFiles/Lem_in.dir/dfs.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/dfs.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/dfs.c.o.provides

CMakeFiles/Lem_in.dir/dfs.c.o.provides.build: CMakeFiles/Lem_in.dir/dfs.c.o


CMakeFiles/Lem_in.dir/line_validation.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/line_validation.c.o: ../line_validation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/Lem_in.dir/line_validation.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/line_validation.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/line_validation.c

CMakeFiles/Lem_in.dir/line_validation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/line_validation.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/line_validation.c > CMakeFiles/Lem_in.dir/line_validation.c.i

CMakeFiles/Lem_in.dir/line_validation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/line_validation.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/line_validation.c -o CMakeFiles/Lem_in.dir/line_validation.c.s

CMakeFiles/Lem_in.dir/line_validation.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/line_validation.c.o.requires

CMakeFiles/Lem_in.dir/line_validation.c.o.provides: CMakeFiles/Lem_in.dir/line_validation.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/line_validation.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/line_validation.c.o.provides

CMakeFiles/Lem_in.dir/line_validation.c.o.provides.build: CMakeFiles/Lem_in.dir/line_validation.c.o


CMakeFiles/Lem_in.dir/link_validation.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/link_validation.c.o: ../link_validation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/Lem_in.dir/link_validation.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/link_validation.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/link_validation.c

CMakeFiles/Lem_in.dir/link_validation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/link_validation.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/link_validation.c > CMakeFiles/Lem_in.dir/link_validation.c.i

CMakeFiles/Lem_in.dir/link_validation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/link_validation.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/link_validation.c -o CMakeFiles/Lem_in.dir/link_validation.c.s

CMakeFiles/Lem_in.dir/link_validation.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/link_validation.c.o.requires

CMakeFiles/Lem_in.dir/link_validation.c.o.provides: CMakeFiles/Lem_in.dir/link_validation.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/link_validation.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/link_validation.c.o.provides

CMakeFiles/Lem_in.dir/link_validation.c.o.provides.build: CMakeFiles/Lem_in.dir/link_validation.c.o


CMakeFiles/Lem_in.dir/main.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/Lem_in.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/main.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/main.c

CMakeFiles/Lem_in.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/main.c > CMakeFiles/Lem_in.dir/main.c.i

CMakeFiles/Lem_in.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/main.c -o CMakeFiles/Lem_in.dir/main.c.s

CMakeFiles/Lem_in.dir/main.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/main.c.o.requires

CMakeFiles/Lem_in.dir/main.c.o.provides: CMakeFiles/Lem_in.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/main.c.o.provides

CMakeFiles/Lem_in.dir/main.c.o.provides.build: CMakeFiles/Lem_in.dir/main.c.o


CMakeFiles/Lem_in.dir/read_map.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/read_map.c.o: ../read_map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/Lem_in.dir/read_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/read_map.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/read_map.c

CMakeFiles/Lem_in.dir/read_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/read_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/read_map.c > CMakeFiles/Lem_in.dir/read_map.c.i

CMakeFiles/Lem_in.dir/read_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/read_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/read_map.c -o CMakeFiles/Lem_in.dir/read_map.c.s

CMakeFiles/Lem_in.dir/read_map.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/read_map.c.o.requires

CMakeFiles/Lem_in.dir/read_map.c.o.provides: CMakeFiles/Lem_in.dir/read_map.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/read_map.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/read_map.c.o.provides

CMakeFiles/Lem_in.dir/read_map.c.o.provides.build: CMakeFiles/Lem_in.dir/read_map.c.o


CMakeFiles/Lem_in.dir/second_validation.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/second_validation.c.o: ../second_validation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/Lem_in.dir/second_validation.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/second_validation.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/second_validation.c

CMakeFiles/Lem_in.dir/second_validation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/second_validation.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/second_validation.c > CMakeFiles/Lem_in.dir/second_validation.c.i

CMakeFiles/Lem_in.dir/second_validation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/second_validation.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/second_validation.c -o CMakeFiles/Lem_in.dir/second_validation.c.s

CMakeFiles/Lem_in.dir/second_validation.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/second_validation.c.o.requires

CMakeFiles/Lem_in.dir/second_validation.c.o.provides: CMakeFiles/Lem_in.dir/second_validation.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/second_validation.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/second_validation.c.o.provides

CMakeFiles/Lem_in.dir/second_validation.c.o.provides.build: CMakeFiles/Lem_in.dir/second_validation.c.o


CMakeFiles/Lem_in.dir/validation.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/validation.c.o: ../validation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/Lem_in.dir/validation.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/validation.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/validation.c

CMakeFiles/Lem_in.dir/validation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/validation.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/validation.c > CMakeFiles/Lem_in.dir/validation.c.i

CMakeFiles/Lem_in.dir/validation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/validation.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/validation.c -o CMakeFiles/Lem_in.dir/validation.c.s

CMakeFiles/Lem_in.dir/validation.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/validation.c.o.requires

CMakeFiles/Lem_in.dir/validation.c.o.provides: CMakeFiles/Lem_in.dir/validation.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/validation.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/validation.c.o.provides

CMakeFiles/Lem_in.dir/validation.c.o.provides.build: CMakeFiles/Lem_in.dir/validation.c.o


CMakeFiles/Lem_in.dir/choose_path.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/choose_path.c.o: ../choose_path.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/Lem_in.dir/choose_path.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/choose_path.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/choose_path.c

CMakeFiles/Lem_in.dir/choose_path.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/choose_path.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/choose_path.c > CMakeFiles/Lem_in.dir/choose_path.c.i

CMakeFiles/Lem_in.dir/choose_path.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/choose_path.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/choose_path.c -o CMakeFiles/Lem_in.dir/choose_path.c.s

CMakeFiles/Lem_in.dir/choose_path.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/choose_path.c.o.requires

CMakeFiles/Lem_in.dir/choose_path.c.o.provides: CMakeFiles/Lem_in.dir/choose_path.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/choose_path.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/choose_path.c.o.provides

CMakeFiles/Lem_in.dir/choose_path.c.o.provides.build: CMakeFiles/Lem_in.dir/choose_path.c.o


CMakeFiles/Lem_in.dir/print_lem.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/print_lem.c.o: ../print_lem.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/Lem_in.dir/print_lem.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/print_lem.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/print_lem.c

CMakeFiles/Lem_in.dir/print_lem.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/print_lem.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/print_lem.c > CMakeFiles/Lem_in.dir/print_lem.c.i

CMakeFiles/Lem_in.dir/print_lem.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/print_lem.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/print_lem.c -o CMakeFiles/Lem_in.dir/print_lem.c.s

CMakeFiles/Lem_in.dir/print_lem.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/print_lem.c.o.requires

CMakeFiles/Lem_in.dir/print_lem.c.o.provides: CMakeFiles/Lem_in.dir/print_lem.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/print_lem.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/print_lem.c.o.provides

CMakeFiles/Lem_in.dir/print_lem.c.o.provides.build: CMakeFiles/Lem_in.dir/print_lem.c.o


CMakeFiles/Lem_in.dir/print_lem2.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/print_lem2.c.o: ../print_lem2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/Lem_in.dir/print_lem2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/print_lem2.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/print_lem2.c

CMakeFiles/Lem_in.dir/print_lem2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/print_lem2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/print_lem2.c > CMakeFiles/Lem_in.dir/print_lem2.c.i

CMakeFiles/Lem_in.dir/print_lem2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/print_lem2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/print_lem2.c -o CMakeFiles/Lem_in.dir/print_lem2.c.s

CMakeFiles/Lem_in.dir/print_lem2.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/print_lem2.c.o.requires

CMakeFiles/Lem_in.dir/print_lem2.c.o.provides: CMakeFiles/Lem_in.dir/print_lem2.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/print_lem2.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/print_lem2.c.o.provides

CMakeFiles/Lem_in.dir/print_lem2.c.o.provides.build: CMakeFiles/Lem_in.dir/print_lem2.c.o


CMakeFiles/Lem_in.dir/free.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/free.c.o: ../free.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/Lem_in.dir/free.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/free.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/free.c

CMakeFiles/Lem_in.dir/free.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/free.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/free.c > CMakeFiles/Lem_in.dir/free.c.i

CMakeFiles/Lem_in.dir/free.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/free.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/free.c -o CMakeFiles/Lem_in.dir/free.c.s

CMakeFiles/Lem_in.dir/free.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/free.c.o.requires

CMakeFiles/Lem_in.dir/free.c.o.provides: CMakeFiles/Lem_in.dir/free.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/free.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/free.c.o.provides

CMakeFiles/Lem_in.dir/free.c.o.provides.build: CMakeFiles/Lem_in.dir/free.c.o


CMakeFiles/Lem_in.dir/dfs2.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/dfs2.c.o: ../dfs2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/Lem_in.dir/dfs2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/dfs2.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/dfs2.c

CMakeFiles/Lem_in.dir/dfs2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/dfs2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/dfs2.c > CMakeFiles/Lem_in.dir/dfs2.c.i

CMakeFiles/Lem_in.dir/dfs2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/dfs2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/dfs2.c -o CMakeFiles/Lem_in.dir/dfs2.c.s

CMakeFiles/Lem_in.dir/dfs2.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/dfs2.c.o.requires

CMakeFiles/Lem_in.dir/dfs2.c.o.provides: CMakeFiles/Lem_in.dir/dfs2.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/dfs2.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/dfs2.c.o.provides

CMakeFiles/Lem_in.dir/dfs2.c.o.provides.build: CMakeFiles/Lem_in.dir/dfs2.c.o


CMakeFiles/Lem_in.dir/bonus.c.o: CMakeFiles/Lem_in.dir/flags.make
CMakeFiles/Lem_in.dir/bonus.c.o: ../bonus.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/Lem_in.dir/bonus.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lem_in.dir/bonus.c.o   -c /nfs/2016/y/ymushet/CLionProjects/Lem_in/bonus.c

CMakeFiles/Lem_in.dir/bonus.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lem_in.dir/bonus.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/y/ymushet/CLionProjects/Lem_in/bonus.c > CMakeFiles/Lem_in.dir/bonus.c.i

CMakeFiles/Lem_in.dir/bonus.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lem_in.dir/bonus.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/y/ymushet/CLionProjects/Lem_in/bonus.c -o CMakeFiles/Lem_in.dir/bonus.c.s

CMakeFiles/Lem_in.dir/bonus.c.o.requires:

.PHONY : CMakeFiles/Lem_in.dir/bonus.c.o.requires

CMakeFiles/Lem_in.dir/bonus.c.o.provides: CMakeFiles/Lem_in.dir/bonus.c.o.requires
	$(MAKE) -f CMakeFiles/Lem_in.dir/build.make CMakeFiles/Lem_in.dir/bonus.c.o.provides.build
.PHONY : CMakeFiles/Lem_in.dir/bonus.c.o.provides

CMakeFiles/Lem_in.dir/bonus.c.o.provides.build: CMakeFiles/Lem_in.dir/bonus.c.o


# Object files for target Lem_in
Lem_in_OBJECTS = \
"CMakeFiles/Lem_in.dir/add_data.c.o" \
"CMakeFiles/Lem_in.dir/add_link.c.o" \
"CMakeFiles/Lem_in.dir/add_room.c.o" \
"CMakeFiles/Lem_in.dir/algo.c.o" \
"CMakeFiles/Lem_in.dir/ants.c.o" \
"CMakeFiles/Lem_in.dir/dfs.c.o" \
"CMakeFiles/Lem_in.dir/line_validation.c.o" \
"CMakeFiles/Lem_in.dir/link_validation.c.o" \
"CMakeFiles/Lem_in.dir/main.c.o" \
"CMakeFiles/Lem_in.dir/read_map.c.o" \
"CMakeFiles/Lem_in.dir/second_validation.c.o" \
"CMakeFiles/Lem_in.dir/validation.c.o" \
"CMakeFiles/Lem_in.dir/choose_path.c.o" \
"CMakeFiles/Lem_in.dir/print_lem.c.o" \
"CMakeFiles/Lem_in.dir/print_lem2.c.o" \
"CMakeFiles/Lem_in.dir/free.c.o" \
"CMakeFiles/Lem_in.dir/dfs2.c.o" \
"CMakeFiles/Lem_in.dir/bonus.c.o"

# External object files for target Lem_in
Lem_in_EXTERNAL_OBJECTS =

Lem_in: CMakeFiles/Lem_in.dir/add_data.c.o
Lem_in: CMakeFiles/Lem_in.dir/add_link.c.o
Lem_in: CMakeFiles/Lem_in.dir/add_room.c.o
Lem_in: CMakeFiles/Lem_in.dir/algo.c.o
Lem_in: CMakeFiles/Lem_in.dir/ants.c.o
Lem_in: CMakeFiles/Lem_in.dir/dfs.c.o
Lem_in: CMakeFiles/Lem_in.dir/line_validation.c.o
Lem_in: CMakeFiles/Lem_in.dir/link_validation.c.o
Lem_in: CMakeFiles/Lem_in.dir/main.c.o
Lem_in: CMakeFiles/Lem_in.dir/read_map.c.o
Lem_in: CMakeFiles/Lem_in.dir/second_validation.c.o
Lem_in: CMakeFiles/Lem_in.dir/validation.c.o
Lem_in: CMakeFiles/Lem_in.dir/choose_path.c.o
Lem_in: CMakeFiles/Lem_in.dir/print_lem.c.o
Lem_in: CMakeFiles/Lem_in.dir/print_lem2.c.o
Lem_in: CMakeFiles/Lem_in.dir/free.c.o
Lem_in: CMakeFiles/Lem_in.dir/dfs2.c.o
Lem_in: CMakeFiles/Lem_in.dir/bonus.c.o
Lem_in: CMakeFiles/Lem_in.dir/build.make
Lem_in: ../libft/libft.a
Lem_in: CMakeFiles/Lem_in.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Linking C executable Lem_in"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lem_in.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lem_in.dir/build: Lem_in

.PHONY : CMakeFiles/Lem_in.dir/build

CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/add_data.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/add_link.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/add_room.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/algo.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/ants.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/dfs.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/line_validation.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/link_validation.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/main.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/read_map.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/second_validation.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/validation.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/choose_path.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/print_lem.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/print_lem2.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/free.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/dfs2.c.o.requires
CMakeFiles/Lem_in.dir/requires: CMakeFiles/Lem_in.dir/bonus.c.o.requires

.PHONY : CMakeFiles/Lem_in.dir/requires

CMakeFiles/Lem_in.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lem_in.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lem_in.dir/clean

CMakeFiles/Lem_in.dir/depend:
	cd /nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/2016/y/ymushet/CLionProjects/Lem_in /nfs/2016/y/ymushet/CLionProjects/Lem_in /nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug /nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug /nfs/2016/y/ymushet/CLionProjects/Lem_in/cmake-build-debug/CMakeFiles/Lem_in.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lem_in.dir/depend

