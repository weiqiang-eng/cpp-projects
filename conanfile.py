from conan import ConanFile
from conan.tools.cmake import cmake_layout


class MyAppConan(ConanFile):
    name = "my_app"
    version = "1.0"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def layout(self):
        cmake_layout(self)