cmake_minimum_required(VERSION 3.10)
project(Type-at-Sound-Speed)

add_executable(main main.c)
set_target_properties(main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/executable"
)
