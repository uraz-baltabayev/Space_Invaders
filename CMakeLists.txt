cmake_minimum_required(VERSION 3.16)
project(SpaceInvaders)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Force C++20
add_compile_options(-std=c++20)

# Auto-find ALL .cpp files in src (current and future)
file(GLOB SOURCES "src/*.cpp")

# Debug: Show what files were found
message(STATUS "Found source files: ${SOURCES}")

add_executable(SpaceInvaders ${SOURCES})

# Include directories
target_include_directories(SpaceInvaders PRIVATE src /opt/homebrew/include)

# Link Raylib
target_link_libraries(SpaceInvaders /opt/homebrew/lib/libraylib.dylib)

# macOS frameworks
if(APPLE)
    find_library(COCOA_LIB Cocoa)
    find_library(IOKIT_LIB IOKit)
    find_library(COREVIDEO_LIB CoreVideo)
    find_library(OPENGL_LIB OpenGL)
    
    target_link_libraries(SpaceInvaders
        ${COCOA_LIB}
        ${IOKIT_LIB}
        ${COREVIDEO_LIB}
        ${OPENGL_LIB}
    )
endif()

# Extend clean target
set_directory_properties(PROPERTIES ADDITIONAL_CLEAN_FILES "*.o;*.d")