cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "/home/csmajs/jdang065/FinalProject/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "/home/csmajs/jdang065/FinalProject/source")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "{CMAKE_BINARY_DIR}/source")
add_subdirectory(googletest)

add_executable(runTest
  test/test.cpp 
)

target_link_libraries(runTest gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(runTest PRIVATE gtest_disable_pthreads=ON)
