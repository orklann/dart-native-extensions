# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/dev/projects/cpp/dyncall-0.9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/dev/projects/cpp/dyncall-0.9

# Include any dependencies generated for this target.
include test/thunk/CMakeFiles/test_thunk.dir/depend.make

# Include the progress variables for this target.
include test/thunk/CMakeFiles/test_thunk.dir/progress.make

# Include the compile flags for this target's objects.
include test/thunk/CMakeFiles/test_thunk.dir/flags.make

test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o: test/thunk/CMakeFiles/test_thunk.dir/flags.make
test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o: test/thunk/test_thunk.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/dev/projects/cpp/dyncall-0.9/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/thunk && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_thunk.dir/test_thunk.c.o   -c /home/user/dev/projects/cpp/dyncall-0.9/test/thunk/test_thunk.c

test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_thunk.dir/test_thunk.c.i"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/thunk && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/dev/projects/cpp/dyncall-0.9/test/thunk/test_thunk.c > CMakeFiles/test_thunk.dir/test_thunk.c.i

test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_thunk.dir/test_thunk.c.s"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/thunk && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/dev/projects/cpp/dyncall-0.9/test/thunk/test_thunk.c -o CMakeFiles/test_thunk.dir/test_thunk.c.s

test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o.requires:

.PHONY : test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o.requires

test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o.provides: test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o.requires
	$(MAKE) -f test/thunk/CMakeFiles/test_thunk.dir/build.make test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o.provides.build
.PHONY : test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o.provides

test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o.provides.build: test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o


# Object files for target test_thunk
test_thunk_OBJECTS = \
"CMakeFiles/test_thunk.dir/test_thunk.c.o"

# External object files for target test_thunk
test_thunk_EXTERNAL_OBJECTS =

test/thunk/test_thunk: test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o
test/thunk/test_thunk: test/thunk/CMakeFiles/test_thunk.dir/build.make
test/thunk/test_thunk: dyncallback/libdyncallback_s.a
test/thunk/test_thunk: test/thunk/CMakeFiles/test_thunk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/dev/projects/cpp/dyncall-0.9/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_thunk"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/thunk && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_thunk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/thunk/CMakeFiles/test_thunk.dir/build: test/thunk/test_thunk

.PHONY : test/thunk/CMakeFiles/test_thunk.dir/build

test/thunk/CMakeFiles/test_thunk.dir/requires: test/thunk/CMakeFiles/test_thunk.dir/test_thunk.c.o.requires

.PHONY : test/thunk/CMakeFiles/test_thunk.dir/requires

test/thunk/CMakeFiles/test_thunk.dir/clean:
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/thunk && $(CMAKE_COMMAND) -P CMakeFiles/test_thunk.dir/cmake_clean.cmake
.PHONY : test/thunk/CMakeFiles/test_thunk.dir/clean

test/thunk/CMakeFiles/test_thunk.dir/depend:
	cd /home/user/dev/projects/cpp/dyncall-0.9 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/dev/projects/cpp/dyncall-0.9 /home/user/dev/projects/cpp/dyncall-0.9/test/thunk /home/user/dev/projects/cpp/dyncall-0.9 /home/user/dev/projects/cpp/dyncall-0.9/test/thunk /home/user/dev/projects/cpp/dyncall-0.9/test/thunk/CMakeFiles/test_thunk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/thunk/CMakeFiles/test_thunk.dir/depend

