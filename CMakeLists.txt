cmake_minimum_required(VERSION 3.10)
project(Type-at-Sound-Speed)

set(SOURCES src/main.c)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(${PROJECT_NAME} ${SOURCES})

find_package(Curses REQUIRED)
target_link_libraries(${PROJECT_NAME} Curses)
target_include_directories(${PROJECT_NAME} PRIVATE ${CURSES_INCLUDE_DIRS})
