cmake_minimum_required(VERSION 3.24)

project(hi_equals_hi)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(string_compare_test tests/string_compare_test.cpp src/string_compare.cpp src/string_to_ascii.cpp)
add_executable(main main.cpp src/string_compare.cpp src/string_to_ascii.cpp)

target_link_libraries(string_compare_test PRIVATE Catch2::Catch2WithMain)
