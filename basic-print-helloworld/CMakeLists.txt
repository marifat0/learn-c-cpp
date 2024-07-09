cmake_minimum_required(VERSION 3.10)
project(LEARN_C
        DESCRIPTION "Learn C"
        LANGUAGES C
)
set(PROJECT_VERSION 0.1.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(learnc)

target_sources(learnc
    PRIVATE
        src/main.c
)

target_include_directories(learnc
    PRIVATE
        src/include
)

