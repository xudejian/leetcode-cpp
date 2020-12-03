set(BINARY ${CMAKE_PROJECT_NAME}_tests)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false p*.cc)
set(SOURCES ${TEST_SOURCES})
add_executable(${BINARY} main.cc ${TEST_SOURCES})

target_link_libraries(
    ${BINARY}
    gtest
    pthread
)

gtest_discover_tests(${BINARY})

file(GLOB_RECURSE BENCHMARK_SOURCES LIST_DIRECTORIES false b*.cc)
set(SOURCES ${BENCHMARK_SOURCES})
set(BENCHMARK ${CMAKE_PROJECT_NAME}_benchmark)
add_executable(${BENCHMARK} benchmark.cc ${BENCHMARK_SOURCES})

target_link_libraries(
    ${BENCHMARK}
    benchmark::benchmark
    pthread
)
