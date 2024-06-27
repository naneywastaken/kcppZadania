cmake_minimum_required(VERSION 3.10)

# Set the project name
project(ZadClassKcppCMake)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add the executable
add_executable(ZadClassKcppCMake
    src/Menu.cc
    src/MethodsCollection.cc
    main.cc
)
