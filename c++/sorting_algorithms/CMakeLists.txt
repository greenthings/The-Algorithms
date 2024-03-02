# /sorting_algorithms/CMakeLists.txt

# Make Static Library sorting algortihms
# https://cmake.org/cmake/help/latest/command/add_library.html

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(sorting_algorithms STATIC ${SRC_FILES})

# Header File Path
target_include_directories(sorting_algorithms PUBLIC ${CMAKE_SOURCE_DIR}/sorting_algorithms_headers)


# Compile Option
target_compile_options(sorting_algorithms PRIVATE -Wall)
