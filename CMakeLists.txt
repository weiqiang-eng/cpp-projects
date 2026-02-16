cmake_minimum_required(VERSION 3.20)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include Conan toolchain for macOS compatibility
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake OPTIONAL)

add_executable(MyCppProject src/main.cpp)

# Enable compiler warnings
if(MSVC)
    target_compile_options(MyCppProject PRIVATE /W4)
else()
    target_compile_options(MyCppProject PRIVATE -Wall -Wextra -Wpedantic)
endif()