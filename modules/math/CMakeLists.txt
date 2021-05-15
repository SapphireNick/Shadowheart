# Minimum required CMake Version
cmake_minimum_required(VERSION 3.5)

# Setup project
project(Shadowheart::Renderer LANGUAGES CXX C)

# Set flags and cxx standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -Wall)

find_package(OpenGL REQUIRED)

# Preproccesor directive for debugging
option(USE_DEBUG "Entering debug mode..." OFF)
if(USE_DEBUG)
    add_definitions(-DDEBUG)
endif()

# Include directories
include_directories(
    ../lib/glfw/include
    ../lib/glad/include
    ../modules
    ./include
)

# Add libraries
add_library(m_vec src/m_vec.cc)
add_library(m_mat src/m_mat.cc)

# Add subdirs

# Executables / Tests
# Linking
