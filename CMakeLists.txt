cmake_minimum_required(VERSION 3.10)  # Minimum version of CMake required

project(FileExplorer)  # Name of your project

# Set C++ standard/version using CMAKE_CXX_STANDARD variable
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for header files
include_directories(include)

# Add executable target with source files
add_executable(FileExplorer src/main.cpp)

# You can add more source files to the executable like this:
# add_executable(FileExplorer src/main.cpp src/other_file.cpp src/another_file.cpp)