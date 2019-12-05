cmake_minimum_required(VERSION 2.8.9)
project (demo)
set(DEMO_VERSION 0.0)

set (GTEST_ROOT ${CMAKE_SOURCE_DIR}/gtest)
find_package(GTest REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/include ${GTEST_INCLUDE_DIRS})

add_executable(demo src/demo.c src/add_numbers.c src/foo.c)

################################
# GTest
################################
enable_testing()

################################
# Unit Tests
################################
# Add test cpp file
add_executable( runUnitTests test/testgtest.cpp  test/foo_mock.cpp src/add_numbers.c)

message( ${GTEST_LIBRARIES} )

# Link test executable against gtest & gmock
target_link_libraries(runUnitTests ${GTEST_ROOT}/lib/libgmock.a ${GTEST_ROOT}/lib/libgtest.a )
add_test( runUnitTests runUnitTests )