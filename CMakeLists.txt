# Minimum required CMake Version
cmake_minimum_required(VERSION 3.5)

# Setup project
project(Shadowheart LANGUAGES CXX C)

# Set flags and cxx standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -Wall)

# GLFW specific
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

find_package(OpenGL REQUIRED)

# Include directories
include_directories(
    libs/glfw/include
    libs/glad/include
    modules
)

# Add libraries
add_library(glad libs/glad/src/glad.c)

# Add subdirs
add_subdirectory(lib/glfw)

# Executables / Tests
# Linking