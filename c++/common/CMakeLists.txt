# /common/CMakeLists.txt

# Make Static Library common
# https://cmake.org/cmake/help/latest/command/add_library.html
add_library(common STATIC common.cpp)

# Header File Path
target_include_directories(common PUBLIC ${CMAKE_SOURCE_DIR}/common)

# Compile Option
target_compile_options(common PRIVATE -Wall)