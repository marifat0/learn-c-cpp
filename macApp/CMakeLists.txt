# Set the minimum and maximum version of CMake that can be used
cmake_minimum_required(VERSION 3.0...3.5)

project(LEARN_OBJC
        DESCRIPTION "Learning Objective-C"
        LANGUAGES C OBJC OBJCXX
)


set(CMAKE_C_STANDARD 11)
set(OBJCXX_STANDARD 11)
set(TARGET tgt PROPERTY OBJCXX_STANDARD 11)
set(CMAKE_C_FLAGS "-x objective-c -fobjc-arc")
set(EXPORT_COMPILE_COMMANDS ON)

enable_language(OBJC)
enable_language(OBJCXX)

add_definitions(-DRC_PLATFORM_MAC)
add_definitions(-DRC_PLATFORM_UNIX)
add_definitions(-fobjc-arc)

add_executable(myObjc)
target_sources(myObjc
    PRIVATE
        src/main.m
        src/headers/impl/XYZPerson.m
)
target_link_libraries(myObjc
    PRIVATE
    "-framework Foundation"
    "-framework AppKit"
)
# Put output Objective-C binary in the bin directory
set_target_properties(myObjc
    PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
