# my_app - C++ Project with Conan 2.x

A modern C++20 project using Conan 2.x for dependency management and CMake for building on macOS with Homebrew.

## Table of Contents

- [Complete Setup Guide](#complete-setup-guide)
- [Quick Start](#quick-start)
- [Build Instructions](#build-instructions)
- [Project Files Explained](#project-files-explained)
- [Adding Dependencies](#adding-dependencies)
- [Troubleshooting](#troubleshooting)

## Complete Setup Guide

### Step 1: Install Homebrew (If You Don't Have It)

Open Terminal and run:

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

After installation completes, follow the on-screen instructions to add Homebrew to your PATH.

Verify installation:
```bash
brew --version
```

### Step 2: Install Conan via Homebrew

```bash
brew install conan
```

Verify installation:
```bash
conan --version
```

You should see output like: `Conan version 2.x.x`

### Step 3: Install CMake via Homebrew

```bash
brew install cmake
```

Verify installation:
```bash
cmake --version
```

You should see output like: `cmake version 3.xx.x`

### Step 4: Detect Your Conan Profile

Conan needs to know your compiler and system settings. Run:

```bash
conan profile detect --name=default
```

You should see output like:
```
Found apple-clang compiler
apple-clang version: 15.0.0
...
Detected profile:
[settings]
os=Macos
arch=arm64
compiler=apple-clang
compiler.version=15
compiler.libcxx=libc++
build_type=Release
```

View your profile to confirm:
```bash
conan profile show -pr=default
```

### Step 5: Create Project Directory

```bash
mkdir my_app
cd my_app
```

### Step 6: Create All Required Files

Create the following files in your `my_app` directory:

#### File 1: CMakeLists.txt

```cmake
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
```

#### File 2: conanfile.py

```python
from conan import ConanFile
from conan.tools.cmake import cmake_layout


class MyAppConan(ConanFile):
    name = "my_app"
    version = "1.0"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def layout(self):
        cmake_layout(self)
```

#### File 3: .gitignore

```
# Conan generated files (root level - should be in build/)
conan.lock
conantoolchain.cmake
conandeps.cmake
generators/

# Build directory
build/
cmake_build_debug/
cmake_build_release/
CMakeUserPresets.json

# IDE
.vscode/
.idea/
*.swp
*.swo
*~

# OS
.DS_Store

# Compiled objects
*.o
*.a
*.so
```

#### File 4: src/main.cpp

First create the src directory:
```bash
mkdir -p src
```

Then create `src/main.cpp`:
```cpp
#include <iostream>

int main() {
    std::cout << "Hello from C++ with Conan!" << std::endl;
    return 0;
}
```

### Step 7: Verify Project Structure

After creating all files, your project should look like:

```
my_app/
├── CMakeLists.txt
├── conanfile.py
├── .gitignore
└── src/
    └── main.cpp
```

Verify from Terminal:
```bash
ls -la
ls -la src/
```

## Quick Start

Once you have completed the setup above, building is simple:

```bash
# 1. Create build directory (one time only)
mkdir build
cd build

# 2. Install dependencies
conan install .. --build=missing --output-folder=.

# 3. Generate build files
cmake .. -DCMAKE_BUILD_TYPE=Release

# 4. Build the project
cmake --build .

# 5. Run the program
./my_app
```

Expected output:
```
Hello from C++ with Conan!
```

## Build Instructions

### After First Build (Quick Rebuild)

If you only changed source code in `src/main.cpp`:

```bash
cd build
cmake --build .
./my_app
```

### Clean Build (Start Over)

If something went wrong or you want to start fresh:

```bash
# From project root (my_app directory)
rm -rf build conan.lock generators conantoolchain.cmake conandeps.cmake
mkdir build
cd build
conan install .. --build=missing --output-folder=.
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
./my_app
```

### Debug Build

```bash
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .
./my_app
```

### Verbose Build (See All Commands)

```bash
cd build
cmake --build . --verbose
```

## Project Files Explained

### CMakeLists.txt

This file tells CMake how to build your project.

- `cmake_minimum_required(VERSION 3.20)` - Requires CMake 3.20 or newer
- `project(my_app)` - Names your project
- `set(CMAKE_CXX_STANDARD 20)` - Uses C++20 language features
- `CMAKE_CXX_STANDARD_REQUIRED ON` - Fails if C++20 is not available
- `CMAKE_CXX_EXTENSIONS OFF` - Disables compiler-specific extensions
- `file(GLOB_RECURSE SOURCES "src/*.cpp")` - Finds all .cpp files automatically
- `add_executable(my_app ${SOURCES})` - Creates the executable

### conanfile.py

This file tells Conan what dependencies you need and how to set up your project.

- `name = "my_app"` - Package name
- `version = "1.0"` - Package version
- `settings` - Compiler and build settings
- `generators` - Auto-generates CMake integration files
- `cmake_layout(self)` - Organizes build folder structure

### src/main.cpp

Your C++ source code. This is what gets compiled into the executable.

### .gitignore

Tells Git which files to ignore (don't commit):
- `build/` - Build artifacts
- `conan.lock` - Dependency lock file
- `generators/` - Auto-generated files

## Adding Dependencies

### Example: Adding fmt Library

#### Step 1: Update conanfile.py

```python
from conan import ConanFile
from conan.tools.cmake import cmake_layout


class MyAppConan(ConanFile):
    name = "my_app"
    version = "1.0"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def requirements(self):
        self.requires("fmt/10.0.0")

    def layout(self):
        cmake_layout(self)
```

#### Step 2: Update CMakeLists.txt

Add `target_link_libraries` after `add_executable`:

```cmake
target_link_libraries(my_app PUBLIC fmt::fmt)
```

#### Step 3: Update src/main.cpp

```cpp
#include <fmt/core.h>

int main() {
    fmt::print("Hello from C++ with Conan!\n");
    return 0;
}
```

#### Step 4: Rebuild

```bash
rm -rf build conan.lock
mkdir build
cd build
conan install .. --build=missing --output-folder=.
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
./my_app
```

### Other Popular Libraries

```python
def requirements(self):
    self.requires("fmt/10.0.0")                # String formatting
    self.requires("nlohmann_json/3.11.2")      # JSON parsing
    self.requires("spdlog/1.12.0")             # Logging
    self.requires("sqlite3/3.43.0")            # Database
    self.requires("zlib/1.3.1")                # Compression
    self.requires("boost/1.82.0")              # Boost libraries
```

Find more packages: https://conan.io/center

## Troubleshooting

### Problem: "conan: command not found"

```bash
brew install conan
conan --version
```

If still not found, restart Terminal and try again.

### Problem: "cmake: command not found"

```bash
brew install cmake
cmake --version
```

### Problem: Files Generated in Root Folder Instead of Build

**Cause:** You ran `conan install .` from the root directory.

**Solution:**
```bash
rm -rf build conan.lock generators conantoolchain.cmake conandeps.cmake
mkdir build
cd build
conan install .. --build=missing --output-folder=.
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
./my_app
```

### Problem: "Cannot find conantoolchain.cmake"

Verify you are in the build directory and check generated files:
```bash
pwd        # Should show: /path/to/my_app/build
ls -la generators/
```

Should show `conantoolchain.cmake`, `conandeps.cmake` and other files.

### Problem: "CMakeToolchain is declared in generators but instantiated"

Use the simple conanfile.py shown above without a manual `generate()` method.

### Problem: Build Fails on macOS

Install Xcode Command Line Tools:
```bash
xcode-select --install
```

### Problem: Slow First Build

This is normal - Conan is building dependencies from source. Subsequent builds will be much faster as dependencies are cached.

## Common Commands Reference

```bash
# View Conan version
conan --version

# View your Conan profile
conan profile show default

# Re-detect your system profile
conan profile detect --force

# View build directory contents
ls -la build/

# Clean everything and start fresh
rm -rf build conan.lock generators conantoolchain.cmake conandeps.cmake

# From build folder, do clean rebuild
conan install .. --build=missing --output-folder=.
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .

# Run your program
./my_app
```

## Next Steps

1. **Add More Source Files** - Create more `.cpp` files in `src/` - CMake finds them automatically
2. **Add Headers** - Create `include/` folder and add `.h` files
3. **Add Dependencies** - Follow the "Adding Dependencies" section
4. **Learn CMake** - https://cmake.org/documentation/
5. **Learn Conan** - https://docs.conan.io/

## Summary

**To build anytime:**
```bash
cd build
conan install .. --build=missing --output-folder=.
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
./my_app
```

Good luck! 🚀