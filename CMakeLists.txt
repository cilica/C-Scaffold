cmake_minimum_required(VERSION 2.8.9)
project (demo)
set(DEMO_VERSION 0.0)

set (GTEST_ROOT ${CMAKE_SOURCE_DIR}/gtest)
find_package(GTest REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/include ${GTEST_INCLUDE_DIRS})

add_executable(demo src/demo.c src/add_numbers.c)

################################
# GTest
################################
enable_testing()

################################
# Unit Tests
################################
# Add test cpp file
add_executable( runUnitTests test/testgtest.cpp src/add_numbers.c)
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests ${GTEST_LIBRARIES})
add_test( runUnitTests runUnitTests )