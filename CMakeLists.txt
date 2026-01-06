cmake_minimum_required(VERSION 3.16)
project(SpaceInvaders)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find Raylib
find_package(raylib REQUIRED)

# Auto-find all .cpp files in src directory
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h" "include/*.h")

# Add executable with all found sources
add_executable(SpaceInvaders ${SOURCES} ${HEADERS})

# Link Raylib
target_link_libraries(SpaceInvaders raylib)

# Include directories
target_include_directories(SpaceInvaders PRIVATE src include)

# Extend the clean target
set_directory_properties(PROPERTIES ADDITIONAL_CLEAN_FILES "*.o;*.d")