# macOS C++ Project Setup Instructions with CMake

This guide will help you set up a C++ project on macOS using CMake.

## Prerequisites

1. **Install Xcode:** Download and install Xcode from the Mac App Store.
2. **Install CMake:** You can install CMake using Homebrew:
   ```bash
   brew install cmake
   ```

## Project Setup

1. **Create a new directory for your project:**  
   ```bash
   mkdir MyCMakeProject
   cd MyCMakeProject
   ```

2. **Create a `CMakeLists.txt` file:**  
   This file will contain the configuration for CMake. Here’s a simple example:
   ```cmake
   cmake_minimum_required(VERSION 3.10)
   project(MyProject)

   add_executable(MyExecutable main.cpp)
   ```

3. **Create a simple C++ source file:**  
   Create a file named `main.cpp` in the same directory:
   ```cpp
   #include <iostream>

   int main() {
       std::cout << "Hello, CMake!" << std::endl;
       return 0;
   }
   ```

4. **Build the project:**  
   Run the following commands to generate the build files and compile the project:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

5. **Run the executable:**  
   After a successful build, run your project:
   ```bash
   ./MyExecutable
   ```

## Conclusion

You have set up a basic C++ project using CMake on macOS. You can now start developing your application!