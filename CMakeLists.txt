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
