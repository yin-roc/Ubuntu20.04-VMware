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
CMAKE_SOURCE_DIR = /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build

# Include any dependencies generated for this target.
include CMakeFiles/CALC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CALC.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CALC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CALC.dir/flags.make

CMakeFiles/CALC.dir/src/add.c.o: CMakeFiles/CALC.dir/flags.make
CMakeFiles/CALC.dir/src/add.c.o: ../src/add.c
CMakeFiles/CALC.dir/src/add.c.o: CMakeFiles/CALC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CALC.dir/src/add.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CALC.dir/src/add.c.o -MF CMakeFiles/CALC.dir/src/add.c.o.d -o CMakeFiles/CALC.dir/src/add.c.o -c /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/add.c

CMakeFiles/CALC.dir/src/add.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CALC.dir/src/add.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/add.c > CMakeFiles/CALC.dir/src/add.c.i

CMakeFiles/CALC.dir/src/add.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CALC.dir/src/add.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/add.c -o CMakeFiles/CALC.dir/src/add.c.s

CMakeFiles/CALC.dir/src/div.c.o: CMakeFiles/CALC.dir/flags.make
CMakeFiles/CALC.dir/src/div.c.o: ../src/div.c
CMakeFiles/CALC.dir/src/div.c.o: CMakeFiles/CALC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CALC.dir/src/div.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CALC.dir/src/div.c.o -MF CMakeFiles/CALC.dir/src/div.c.o.d -o CMakeFiles/CALC.dir/src/div.c.o -c /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/div.c

CMakeFiles/CALC.dir/src/div.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CALC.dir/src/div.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/div.c > CMakeFiles/CALC.dir/src/div.c.i

CMakeFiles/CALC.dir/src/div.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CALC.dir/src/div.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/div.c -o CMakeFiles/CALC.dir/src/div.c.s

CMakeFiles/CALC.dir/src/main.c.o: CMakeFiles/CALC.dir/flags.make
CMakeFiles/CALC.dir/src/main.c.o: ../src/main.c
CMakeFiles/CALC.dir/src/main.c.o: CMakeFiles/CALC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CALC.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CALC.dir/src/main.c.o -MF CMakeFiles/CALC.dir/src/main.c.o.d -o CMakeFiles/CALC.dir/src/main.c.o -c /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/main.c

CMakeFiles/CALC.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CALC.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/main.c > CMakeFiles/CALC.dir/src/main.c.i

CMakeFiles/CALC.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CALC.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/main.c -o CMakeFiles/CALC.dir/src/main.c.s

CMakeFiles/CALC.dir/src/mult.c.o: CMakeFiles/CALC.dir/flags.make
CMakeFiles/CALC.dir/src/mult.c.o: ../src/mult.c
CMakeFiles/CALC.dir/src/mult.c.o: CMakeFiles/CALC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/CALC.dir/src/mult.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CALC.dir/src/mult.c.o -MF CMakeFiles/CALC.dir/src/mult.c.o.d -o CMakeFiles/CALC.dir/src/mult.c.o -c /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/mult.c

CMakeFiles/CALC.dir/src/mult.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CALC.dir/src/mult.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/mult.c > CMakeFiles/CALC.dir/src/mult.c.i

CMakeFiles/CALC.dir/src/mult.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CALC.dir/src/mult.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/mult.c -o CMakeFiles/CALC.dir/src/mult.c.s

CMakeFiles/CALC.dir/src/sub.c.o: CMakeFiles/CALC.dir/flags.make
CMakeFiles/CALC.dir/src/sub.c.o: ../src/sub.c
CMakeFiles/CALC.dir/src/sub.c.o: CMakeFiles/CALC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/CALC.dir/src/sub.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CALC.dir/src/sub.c.o -MF CMakeFiles/CALC.dir/src/sub.c.o.d -o CMakeFiles/CALC.dir/src/sub.c.o -c /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/sub.c

CMakeFiles/CALC.dir/src/sub.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CALC.dir/src/sub.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/sub.c > CMakeFiles/CALC.dir/src/sub.c.i

CMakeFiles/CALC.dir/src/sub.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CALC.dir/src/sub.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/src/sub.c -o CMakeFiles/CALC.dir/src/sub.c.s

# Object files for target CALC
CALC_OBJECTS = \
"CMakeFiles/CALC.dir/src/add.c.o" \
"CMakeFiles/CALC.dir/src/div.c.o" \
"CMakeFiles/CALC.dir/src/main.c.o" \
"CMakeFiles/CALC.dir/src/mult.c.o" \
"CMakeFiles/CALC.dir/src/sub.c.o"

# External object files for target CALC
CALC_EXTERNAL_OBJECTS =

bin/CALC: CMakeFiles/CALC.dir/src/add.c.o
bin/CALC: CMakeFiles/CALC.dir/src/div.c.o
bin/CALC: CMakeFiles/CALC.dir/src/main.c.o
bin/CALC: CMakeFiles/CALC.dir/src/mult.c.o
bin/CALC: CMakeFiles/CALC.dir/src/sub.c.o
bin/CALC: CMakeFiles/CALC.dir/build.make
bin/CALC: CMakeFiles/CALC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable bin/CALC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CALC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CALC.dir/build: bin/CALC
.PHONY : CMakeFiles/CALC.dir/build

CMakeFiles/CALC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CALC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CALC.dir/clean

CMakeFiles/CALC.dir/depend:
	cd /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2 /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2 /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_2/build/CMakeFiles/CALC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CALC.dir/depend

