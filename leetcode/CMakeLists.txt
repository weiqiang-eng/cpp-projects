cmake_minimum_required(VERSION 3.20)

find_package(GTest REQUIRED)
include(GoogleTest)

# Build each .cpp file in any topic subdirectory as its own executable.
file(GLOB_RECURSE LEETCODE_SOURCES
    "arrays/*.cpp"
    "strings/*.cpp"
    "trees/*.cpp"
    "graphs/*.cpp"
    "dp/*.cpp"
    "sliding_window/*.cpp"
    "two_pointers/*.cpp"
    "stack/*.cpp"
    "linked_list/*.cpp"
    "binary_search/*.cpp"
    "backtracking/*.cpp"
    "greedy/*.cpp"
    "matrix/*.cpp"
    "heap/*.cpp"
    "bit_manipulation/*.cpp"
    "intervals/*.cpp"
)

foreach(src ${LEETCODE_SOURCES})
    # Use the relative path as the target name, e.g. arrays/001_two_sum
    file(RELATIVE_PATH rel "${CMAKE_CURRENT_SOURCE_DIR}" "${src}")
    string(REPLACE "/" "_" target "${rel}")
    string(REPLACE ".cpp" "" target "${target}")

    # Skip test files from the standalone executable targets
    if(target MATCHES "_test$")
        continue()
    endif()

    add_executable(${target} ${src})
    target_include_directories(${target} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/common")
    set_target_properties(${target} PROPERTIES CXX_STANDARD 20)
endforeach()

# Build each *_test.cpp as a GTest executable
file(GLOB_RECURSE LEETCODE_TESTS
    "arrays/*_test.cpp"
    "strings/*_test.cpp"
    "trees/*_test.cpp"
    "graphs/*_test.cpp"
    "dp/*_test.cpp"
    "sliding_window/*_test.cpp"
    "two_pointers/*_test.cpp"
    "stack/*_test.cpp"
    "linked_list/*_test.cpp"
    "binary_search/*_test.cpp"
    "backtracking/*_test.cpp"
    "greedy/*_test.cpp"
    "matrix/*_test.cpp"
    "heap/*_test.cpp"
    "bit_manipulation/*_test.cpp"
    "intervals/*_test.cpp"
)

foreach(src ${LEETCODE_TESTS})
    file(RELATIVE_PATH rel "${CMAKE_CURRENT_SOURCE_DIR}" "${src}")
    string(REPLACE "/" "_" target "${rel}")
    string(REPLACE ".cpp" "" target "${target}")

    add_executable(${target} ${src})
    target_include_directories(${target} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/common")
    target_link_libraries(${target} PRIVATE GTest::gtest_main)
    set_target_properties(${target} PROPERTIES CXX_STANDARD 20)
    gtest_discover_tests(${target})
endforeach()
