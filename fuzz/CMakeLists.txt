set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")
add_compile_options("-fsanitize=address,fuzzer")
link_libraries("-fsanitize=address,fuzzer")

add_library(helper_lib STATIC helper.cc helper.h)

file(GLOB_RECURSE FUZZ_SOURCES LIST_DIRECTORIES false fuzz_p*.cc)

foreach(fuzzfile ${FUZZ_SOURCES})
    get_filename_component(fuzzname ${fuzzfile} NAME_WE)
    add_executable(${fuzzname} ${fuzzfile} helper.h)
    target_link_libraries(${fuzzname} helper_lib)
endforeach( fuzzfile ${FUZZ_SOURCES} )