Compile
Unused Header 
If visibility_control.hpp is not actually used in any of your source files that are part of the build, the compiler would not attempt to process it, and thus it wouldn't complain about missing includes.
albertl@albert-PF4Z0YBC:~/Desktop/cpp/debug_test$ tree
.
├── CMakeLists.txt
├── include
│   ├── Calculator.h
│   └── visibility_control.hpp
└── src
    ├── a.cpp
    ├── Calculator.cpp
    ├── dummy.cpp
    └── main.cpp

2 directories, 7 files

CMakeLists.txt 
cmake_minimum_required(VERSION 3.10)


# Set the project name and version
project(SimpleCalculator VERSION 1.0)


# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(include)
# Add executable
add_executable(SimpleCalculator src/main.cpp src/Calculator.cpp)


# Include directories
target_include_directories(SimpleCalculator PUBLIC "${PROJECT_BINARY_DIR}")


Even though you add “include_directories(include)” in your CMakeLists.txt, but visibility_control.hpp and are dummy.cpp  involved in the build process, thus compiler would not check any of their content, regardless they have any problems at all  
