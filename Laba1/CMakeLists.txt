cmake_minimum_required(VERSION 3.10)
project(laba1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
# Основной файл
add_executable(laba1 src/solution.cpp src/main.cpp)
# Тесты
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_solution test/test_solution.cpp src/solution.cpp)
target_link_libraries(test_solution gtest_main)
add_test(NAME AllTests COMMAND test_solution)