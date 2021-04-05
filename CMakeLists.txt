# Minimum required CMake Version
cmake_minimum_required(VERSION 3.5)

# Setup project
project(Shadowheart LANGUAGES CXX C)

# Set flags and cxx standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -Wall)

find_package(OpenGL REQUIRED)

# Include directories
include_directories(
    include/
    lib/glfw/include
    lib/glad/include
    modules
)

# Add libraries
add_library(glad lib/glad/src/glad.c)
add_library(main_engine src/Shadowheart.cc)

# Add subdirs
add_subdirectory(lib/glfw)
add_subdirectory(modules/renderer)

# Executables / Tests
add_executable(main main.cc)

# Linking
target_link_libraries(main_engine PUBLIC glad glfw OpenGL::GL)
target_link_libraries(main PUBLIC main_engine)
