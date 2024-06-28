cmake_minimum_required(VERSION 3.20)

# Project name
project(ZadClassKcpp)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/Menu.cc
    src/ZadKcpp.cc
    main.cc
)

# Add the executable
add_executable(ZadClassKcpp ${SOURCES})
