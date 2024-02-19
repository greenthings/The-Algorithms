cmake_minimum_required(VERSION 3.12)
project(c++)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(common)
add_subdirectory(sorting_algorithms)

add_executable(test test.cpp)

target_link_libraries(test PRIVATE common)
target_link_libraries(test PRIVATE BubbleSort)
target_link_libraries(test PRIVATE SelectionSort)
target_link_libraries(test PRIVATE InsertionSort)
target_link_libraries(test PRIVATE RadixSort)

target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/common)
target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/sorting_algorithms)

target_compile_options(test PRIVATE -Wall)
