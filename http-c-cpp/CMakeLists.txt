cmake_minimum_required(VERSION 3.16)
project(RESTful_API)

# Set the output directory for binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Export compile commands
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# Add the executable
add_executable(RESTful_API src/hellobrowser.c)

# Include directories
target_include_directories(RESTful_API PUBLIC /usr/local/include)

# Link libraries
target_link_libraries(RESTful_API PUBLIC /usr/local/lib/libmicrohttpd.dylib)

