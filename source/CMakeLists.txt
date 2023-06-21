cmake_minimum_required(VERSION 3.25)
project(json_test)

set(CMAKE_CXX_STANDARD 11)

# find package of nlohmann-json
find_package(nlohmann_json REQUIRED)

# Copy json file to build directory
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/example_read.json
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
link_libraries(nlohmann_json::nlohmann_json)

add_executable(operator_gtgt 1_operator>>.cpp utils.h)
add_executable(operator_ltlt 2_operator<<.cpp utils.h)