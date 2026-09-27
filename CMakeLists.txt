cmake_minimum_required(VERSION 3.20)

project(github_actions_cpp_lab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(calculator
    src/calculator.cpp
)

target_include_directories(calculator
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(calculator_app
    src/main.cpp
)

target_link_libraries(calculator_app
    PRIVATE
    calculator
)

enable_testing()

add_executable(calculator_tests
    tests/calculator_test.cpp
)

target_link_libraries(calculator_tests
    PRIVATE
        calculator
)

add_test(
    NAME calculator_tests
    COMMAND calculator_tests
)
