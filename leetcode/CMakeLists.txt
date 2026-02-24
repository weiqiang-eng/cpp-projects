cmake_minimum_required(VERSION 3.20)

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

    add_executable(${target} ${src})
    target_include_directories(${target} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/common")
    set_target_properties(${target} PROPERTIES CXX_STANDARD 20)
endforeach()
