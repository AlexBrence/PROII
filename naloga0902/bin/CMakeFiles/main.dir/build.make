# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /home/alex/Documents/PROII/naloga0902

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/Documents/PROII/naloga0902/bin

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/Board.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Board.cpp.o: ../src/Board.cpp
CMakeFiles/main.dir/src/Board.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/Board.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Board.cpp.o -MF CMakeFiles/main.dir/src/Board.cpp.o.d -o CMakeFiles/main.dir/src/Board.cpp.o -c /home/alex/Documents/PROII/naloga0902/src/Board.cpp

CMakeFiles/main.dir/src/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Documents/PROII/naloga0902/src/Board.cpp > CMakeFiles/main.dir/src/Board.cpp.i

CMakeFiles/main.dir/src/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Documents/PROII/naloga0902/src/Board.cpp -o CMakeFiles/main.dir/src/Board.cpp.s

CMakeFiles/main.dir/src/Date.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Date.cpp.o: ../src/Date.cpp
CMakeFiles/main.dir/src/Date.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/Date.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Date.cpp.o -MF CMakeFiles/main.dir/src/Date.cpp.o.d -o CMakeFiles/main.dir/src/Date.cpp.o -c /home/alex/Documents/PROII/naloga0902/src/Date.cpp

CMakeFiles/main.dir/src/Date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Date.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Documents/PROII/naloga0902/src/Date.cpp > CMakeFiles/main.dir/src/Date.cpp.i

CMakeFiles/main.dir/src/Date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Date.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Documents/PROII/naloga0902/src/Date.cpp -o CMakeFiles/main.dir/src/Date.cpp.s

CMakeFiles/main.dir/src/DateTime.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/DateTime.cpp.o: ../src/DateTime.cpp
CMakeFiles/main.dir/src/DateTime.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/DateTime.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/DateTime.cpp.o -MF CMakeFiles/main.dir/src/DateTime.cpp.o.d -o CMakeFiles/main.dir/src/DateTime.cpp.o -c /home/alex/Documents/PROII/naloga0902/src/DateTime.cpp

CMakeFiles/main.dir/src/DateTime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/DateTime.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Documents/PROII/naloga0902/src/DateTime.cpp > CMakeFiles/main.dir/src/DateTime.cpp.i

CMakeFiles/main.dir/src/DateTime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/DateTime.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Documents/PROII/naloga0902/src/DateTime.cpp -o CMakeFiles/main.dir/src/DateTime.cpp.s

CMakeFiles/main.dir/src/ExpirationTask.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/ExpirationTask.cpp.o: ../src/ExpirationTask.cpp
CMakeFiles/main.dir/src/ExpirationTask.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/ExpirationTask.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/ExpirationTask.cpp.o -MF CMakeFiles/main.dir/src/ExpirationTask.cpp.o.d -o CMakeFiles/main.dir/src/ExpirationTask.cpp.o -c /home/alex/Documents/PROII/naloga0902/src/ExpirationTask.cpp

CMakeFiles/main.dir/src/ExpirationTask.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/ExpirationTask.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Documents/PROII/naloga0902/src/ExpirationTask.cpp > CMakeFiles/main.dir/src/ExpirationTask.cpp.i

CMakeFiles/main.dir/src/ExpirationTask.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/ExpirationTask.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Documents/PROII/naloga0902/src/ExpirationTask.cpp -o CMakeFiles/main.dir/src/ExpirationTask.cpp.s

CMakeFiles/main.dir/src/LocationTask.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/LocationTask.cpp.o: ../src/LocationTask.cpp
CMakeFiles/main.dir/src/LocationTask.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/LocationTask.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/LocationTask.cpp.o -MF CMakeFiles/main.dir/src/LocationTask.cpp.o.d -o CMakeFiles/main.dir/src/LocationTask.cpp.o -c /home/alex/Documents/PROII/naloga0902/src/LocationTask.cpp

CMakeFiles/main.dir/src/LocationTask.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/LocationTask.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Documents/PROII/naloga0902/src/LocationTask.cpp > CMakeFiles/main.dir/src/LocationTask.cpp.i

CMakeFiles/main.dir/src/LocationTask.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/LocationTask.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Documents/PROII/naloga0902/src/LocationTask.cpp -o CMakeFiles/main.dir/src/LocationTask.cpp.s

CMakeFiles/main.dir/src/Task.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Task.cpp.o: ../src/Task.cpp
CMakeFiles/main.dir/src/Task.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/src/Task.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Task.cpp.o -MF CMakeFiles/main.dir/src/Task.cpp.o.d -o CMakeFiles/main.dir/src/Task.cpp.o -c /home/alex/Documents/PROII/naloga0902/src/Task.cpp

CMakeFiles/main.dir/src/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Documents/PROII/naloga0902/src/Task.cpp > CMakeFiles/main.dir/src/Task.cpp.i

CMakeFiles/main.dir/src/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Documents/PROII/naloga0902/src/Task.cpp -o CMakeFiles/main.dir/src/Task.cpp.s

CMakeFiles/main.dir/src/Time.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Time.cpp.o: ../src/Time.cpp
CMakeFiles/main.dir/src/Time.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/src/Time.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Time.cpp.o -MF CMakeFiles/main.dir/src/Time.cpp.o.d -o CMakeFiles/main.dir/src/Time.cpp.o -c /home/alex/Documents/PROII/naloga0902/src/Time.cpp

CMakeFiles/main.dir/src/Time.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Time.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Documents/PROII/naloga0902/src/Time.cpp > CMakeFiles/main.dir/src/Time.cpp.i

CMakeFiles/main.dir/src/Time.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Time.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Documents/PROII/naloga0902/src/Time.cpp -o CMakeFiles/main.dir/src/Time.cpp.s

CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/main.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/main.cpp.o -MF CMakeFiles/main.dir/src/main.cpp.o.d -o CMakeFiles/main.dir/src/main.cpp.o -c /home/alex/Documents/PROII/naloga0902/src/main.cpp

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Documents/PROII/naloga0902/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Documents/PROII/naloga0902/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/Board.cpp.o" \
"CMakeFiles/main.dir/src/Date.cpp.o" \
"CMakeFiles/main.dir/src/DateTime.cpp.o" \
"CMakeFiles/main.dir/src/ExpirationTask.cpp.o" \
"CMakeFiles/main.dir/src/LocationTask.cpp.o" \
"CMakeFiles/main.dir/src/Task.cpp.o" \
"CMakeFiles/main.dir/src/Time.cpp.o" \
"CMakeFiles/main.dir/src/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/Board.cpp.o
main: CMakeFiles/main.dir/src/Date.cpp.o
main: CMakeFiles/main.dir/src/DateTime.cpp.o
main: CMakeFiles/main.dir/src/ExpirationTask.cpp.o
main: CMakeFiles/main.dir/src/LocationTask.cpp.o
main: CMakeFiles/main.dir/src/Task.cpp.o
main: CMakeFiles/main.dir/src/Time.cpp.o
main: CMakeFiles/main.dir/src/main.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/Documents/PROII/naloga0902/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/alex/Documents/PROII/naloga0902/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/Documents/PROII/naloga0902 /home/alex/Documents/PROII/naloga0902 /home/alex/Documents/PROII/naloga0902/bin /home/alex/Documents/PROII/naloga0902/bin /home/alex/Documents/PROII/naloga0902/bin/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend
