cmake_minimum_required(VERSION 3.20)
project(my_app)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include Conan-generated files
include(${CMAKE_BINARY_DIR}/generators/conantoolchain.cmake OPTIONAL)
include(${CMAKE_BINARY_DIR}/generators/conandeps.cmake OPTIONAL)

# Source files
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(my_app ${SOURCES})

# Enable compiler warnings
if(MSVC)
    target_compile_options(my_app PRIVATE /W4)
else()
    target_compile_options(my_app PRIVATE -Wall -Wextra -Wpedantic)
endif()