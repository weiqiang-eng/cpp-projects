from conan import ConanFile
from conan.tools.cmake import cmake_layout


class MyAppConan(ConanFile):
    name = "my_app"
    version = "1.0"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def requirements(self):
        self.requires("gtest/1.15.0")

    def layout(self):
        cmake_layout(self)