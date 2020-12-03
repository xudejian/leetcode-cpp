cmake_minimum_required(VERSION 3.10)
project(leetcode CXX)

set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_ARGS "-DBENCHMARK_ENABLE_GTEST_TESTS=OFF")

enable_testing()
include(GoogleTest)

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(fuzz)
add_subdirectory(lib/googletest)
add_subdirectory(lib/benchmark)
