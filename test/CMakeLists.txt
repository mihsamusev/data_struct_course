cmake_minimum_required(VERSION 3.15)
project(datastructures_tests)

add_subdirectory(lib/googletest)

include_directories(${DS_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp src/datastructures_tests.cpp)

add_executable(datastructures_tests ${SOURCE_FILES})
target_link_libraries(datastructures_tests vertex gtest)
install(TARGETS datastructures_tests DESTINATION bin)