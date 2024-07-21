# Set the minimum and maximum version of CMake that can be used
cmake_minimum_required(VERSION 3.0...3.5)

project(LEARN_OBJC
        DESCRIPTION "Learning Objective-C"
        LANGUAGES OBJC
)


set(CMAKE_C_STANDARD 11)
set(TARGET tgt PROPERTY OBJCXX_STANDARD 11)
set(CMAKE_OBJC_FLAGS "${CMAKE_OBJC_FLAGS} -Wall -x objective-c -fobjc-arc")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_language(OBJC)
enable_language(C)

add_executable(myObjc)
# Put output Objective-C binary in the bin directory
set_target_properties(myObjc
    PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
target_sources(myObjc
    PRIVATE
        src/main.m
        src/headers/impl/XYZPerson.m
        src/headers/impl/XYZShoutingPerson.m
)
target_link_libraries(myObjc
    PRIVATE
    "-framework Foundation"
    "-framework AppKit"
)
target_include_directories(myObjc
    PRIVATE
        src/headers
)
