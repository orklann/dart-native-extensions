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
include test/suite3/CMakeFiles/suite3.dir/depend.make

# Include the progress variables for this target.
include test/suite3/CMakeFiles/suite3.dir/progress.make

# Include the compile flags for this target's objects.
include test/suite3/CMakeFiles/suite3.dir/flags.make

test/suite3/CMakeFiles/suite3.dir/case.cc.o: test/suite3/CMakeFiles/suite3.dir/flags.make
test/suite3/CMakeFiles/suite3.dir/case.cc.o: test/suite3/case.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/dev/projects/cpp/dyncall-0.9/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/suite3/CMakeFiles/suite3.dir/case.cc.o"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suite3.dir/case.cc.o -c /home/user/dev/projects/cpp/dyncall-0.9/test/suite3/case.cc

test/suite3/CMakeFiles/suite3.dir/case.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suite3.dir/case.cc.i"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/dev/projects/cpp/dyncall-0.9/test/suite3/case.cc > CMakeFiles/suite3.dir/case.cc.i

test/suite3/CMakeFiles/suite3.dir/case.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suite3.dir/case.cc.s"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/dev/projects/cpp/dyncall-0.9/test/suite3/case.cc -o CMakeFiles/suite3.dir/case.cc.s

test/suite3/CMakeFiles/suite3.dir/case.cc.o.requires:

.PHONY : test/suite3/CMakeFiles/suite3.dir/case.cc.o.requires

test/suite3/CMakeFiles/suite3.dir/case.cc.o.provides: test/suite3/CMakeFiles/suite3.dir/case.cc.o.requires
	$(MAKE) -f test/suite3/CMakeFiles/suite3.dir/build.make test/suite3/CMakeFiles/suite3.dir/case.cc.o.provides.build
.PHONY : test/suite3/CMakeFiles/suite3.dir/case.cc.o.provides

test/suite3/CMakeFiles/suite3.dir/case.cc.o.provides.build: test/suite3/CMakeFiles/suite3.dir/case.cc.o


test/suite3/CMakeFiles/suite3.dir/main.cc.o: test/suite3/CMakeFiles/suite3.dir/flags.make
test/suite3/CMakeFiles/suite3.dir/main.cc.o: test/suite3/main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/dev/projects/cpp/dyncall-0.9/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/suite3/CMakeFiles/suite3.dir/main.cc.o"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suite3.dir/main.cc.o -c /home/user/dev/projects/cpp/dyncall-0.9/test/suite3/main.cc

test/suite3/CMakeFiles/suite3.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suite3.dir/main.cc.i"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/dev/projects/cpp/dyncall-0.9/test/suite3/main.cc > CMakeFiles/suite3.dir/main.cc.i

test/suite3/CMakeFiles/suite3.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suite3.dir/main.cc.s"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/dev/projects/cpp/dyncall-0.9/test/suite3/main.cc -o CMakeFiles/suite3.dir/main.cc.s

test/suite3/CMakeFiles/suite3.dir/main.cc.o.requires:

.PHONY : test/suite3/CMakeFiles/suite3.dir/main.cc.o.requires

test/suite3/CMakeFiles/suite3.dir/main.cc.o.provides: test/suite3/CMakeFiles/suite3.dir/main.cc.o.requires
	$(MAKE) -f test/suite3/CMakeFiles/suite3.dir/build.make test/suite3/CMakeFiles/suite3.dir/main.cc.o.provides.build
.PHONY : test/suite3/CMakeFiles/suite3.dir/main.cc.o.provides

test/suite3/CMakeFiles/suite3.dir/main.cc.o.provides.build: test/suite3/CMakeFiles/suite3.dir/main.cc.o


# Object files for target suite3
suite3_OBJECTS = \
"CMakeFiles/suite3.dir/case.cc.o" \
"CMakeFiles/suite3.dir/main.cc.o"

# External object files for target suite3
suite3_EXTERNAL_OBJECTS =

test/suite3/suite3: test/suite3/CMakeFiles/suite3.dir/case.cc.o
test/suite3/suite3: test/suite3/CMakeFiles/suite3.dir/main.cc.o
test/suite3/suite3: test/suite3/CMakeFiles/suite3.dir/build.make
test/suite3/suite3: dyncall/libdyncall_s.a
test/suite3/suite3: test/suite3/CMakeFiles/suite3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/dev/projects/cpp/dyncall-0.9/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable suite3"
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/suite3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/suite3/CMakeFiles/suite3.dir/build: test/suite3/suite3

.PHONY : test/suite3/CMakeFiles/suite3.dir/build

test/suite3/CMakeFiles/suite3.dir/requires: test/suite3/CMakeFiles/suite3.dir/case.cc.o.requires
test/suite3/CMakeFiles/suite3.dir/requires: test/suite3/CMakeFiles/suite3.dir/main.cc.o.requires

.PHONY : test/suite3/CMakeFiles/suite3.dir/requires

test/suite3/CMakeFiles/suite3.dir/clean:
	cd /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 && $(CMAKE_COMMAND) -P CMakeFiles/suite3.dir/cmake_clean.cmake
.PHONY : test/suite3/CMakeFiles/suite3.dir/clean

test/suite3/CMakeFiles/suite3.dir/depend:
	cd /home/user/dev/projects/cpp/dyncall-0.9 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/dev/projects/cpp/dyncall-0.9 /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 /home/user/dev/projects/cpp/dyncall-0.9 /home/user/dev/projects/cpp/dyncall-0.9/test/suite3 /home/user/dev/projects/cpp/dyncall-0.9/test/suite3/CMakeFiles/suite3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/suite3/CMakeFiles/suite3.dir/depend
