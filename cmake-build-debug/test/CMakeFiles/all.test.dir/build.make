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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/marcin/CLionProjects/prir-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marcin/CLionProjects/prir-project/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/all.test.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/all.test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/all.test.dir/flags.make

test/CMakeFiles/all.test.dir/test_all.cpp.o: test/CMakeFiles/all.test.dir/flags.make
test/CMakeFiles/all.test.dir/test_all.cpp.o: ../test/test_all.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/CLionProjects/prir-project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/all.test.dir/test_all.cpp.o"
	cd /home/marcin/CLionProjects/prir-project/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/all.test.dir/test_all.cpp.o -c /home/marcin/CLionProjects/prir-project/test/test_all.cpp

test/CMakeFiles/all.test.dir/test_all.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/all.test.dir/test_all.cpp.i"
	cd /home/marcin/CLionProjects/prir-project/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/CLionProjects/prir-project/test/test_all.cpp > CMakeFiles/all.test.dir/test_all.cpp.i

test/CMakeFiles/all.test.dir/test_all.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/all.test.dir/test_all.cpp.s"
	cd /home/marcin/CLionProjects/prir-project/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/CLionProjects/prir-project/test/test_all.cpp -o CMakeFiles/all.test.dir/test_all.cpp.s

# Object files for target all.test
all_test_OBJECTS = \
"CMakeFiles/all.test.dir/test_all.cpp.o"

# External object files for target all.test
all_test_EXTERNAL_OBJECTS =

test/all.test: test/CMakeFiles/all.test.dir/test_all.cpp.o
test/all.test: test/CMakeFiles/all.test.dir/build.make
test/all.test: src/lib3.a
test/all.test: test/CMakeFiles/all.test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcin/CLionProjects/prir-project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable all.test"
	cd /home/marcin/CLionProjects/prir-project/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/all.test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/all.test.dir/build: test/all.test

.PHONY : test/CMakeFiles/all.test.dir/build

test/CMakeFiles/all.test.dir/clean:
	cd /home/marcin/CLionProjects/prir-project/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/all.test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/all.test.dir/clean

test/CMakeFiles/all.test.dir/depend:
	cd /home/marcin/CLionProjects/prir-project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcin/CLionProjects/prir-project /home/marcin/CLionProjects/prir-project/test /home/marcin/CLionProjects/prir-project/cmake-build-debug /home/marcin/CLionProjects/prir-project/cmake-build-debug/test /home/marcin/CLionProjects/prir-project/cmake-build-debug/test/CMakeFiles/all.test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/all.test.dir/depend

