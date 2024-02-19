# /sorting_algorithms/CMakeLists.txt

# Make Static Library sorting algortihms
# https://cmake.org/cmake/help/latest/command/add_library.html
# file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
#   ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
# )

# add_library(sorting_algorithms STATIC ${SRC_FILES})

add_library(BubbleSort STATIC BubbleSort.cpp)
add_library(SelectionSort STATIC SelectionSort.cpp)
add_library(InsertionSort STATIC InsertionSort.cpp)
add_library(RadixSort STATIC RadixSort.cpp)

# Header File Path
# target_include_directories(sorting_algorithms PUBLIC ${CMAKE_SOURCE_DIR}/sorting_algorithms)
target_include_directories(BubbleSort PUBLIC ${CMAKE_SOURCE_DIR}/sorting_algorithms)
target_include_directories(SelectionSort PUBLIC ${CMAKE_SOURCE_DIR}/sorting_algorithms)
target_include_directories(InsertionSort PUBLIC ${CMAKE_SOURCE_DIR}/sorting_algorithms)
target_include_directories(RadixSort PUBLIC ${CMAKE_SOURCE_DIR}/sorting_algorithms)


# Compile Option
target_compile_options(BubbleSort PRIVATE -Wall)
target_compile_options(SelectionSort PRIVATE -Wall)
target_compile_options(InsertionSort PRIVATE -Wall)
target_compile_options(RadixSort PRIVATE -Wall)
