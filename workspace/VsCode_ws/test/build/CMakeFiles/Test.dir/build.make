# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/build

# Include any dependencies generated for this target.
include CMakeFiles/Test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test.dir/flags.make

CMakeFiles/Test.dir/main.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/main.cpp.o: ../main.cpp
CMakeFiles/Test.dir/main.cpp.o: CMakeFiles/Test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Test.dir/main.cpp.o -MF CMakeFiles/Test.dir/main.cpp.o.d -o CMakeFiles/Test.dir/main.cpp.o -c /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/main.cpp

CMakeFiles/Test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/main.cpp > CMakeFiles/Test.dir/main.cpp.i

CMakeFiles/Test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/main.cpp -o CMakeFiles/Test.dir/main.cpp.s

# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/main.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

Test: CMakeFiles/Test.dir/main.cpp.o
Test: CMakeFiles/Test.dir/build.make
Test: CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test.dir/build: Test
.PHONY : CMakeFiles/Test.dir/build

CMakeFiles/Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Test.dir/clean

CMakeFiles/Test.dir/depend:
	cd /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/build /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/build /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/test/build/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test.dir/depend

