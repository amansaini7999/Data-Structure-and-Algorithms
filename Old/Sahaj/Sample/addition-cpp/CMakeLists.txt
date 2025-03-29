cmake_minimum_required(VERSION 3.13)
project(runUnitTests)
set(CMAKE_CXX_STANDARD 14)	
file(GLOB_RECURSE TEST_SOURCE ${PROJECT_SOURCE_DIR}/tests/, "*.cpp")
file(GLOB_RECURSE CPP_SOURCE ${PROJECT_SOURCE_DIR}/src/, "*.cpp")
add_executable(cmake_testapp ${CPP_SOURCE} ${TEST_SOURCE})
include_directories(
		${PROJECT_SOURCE_DIR}/src
)
include(GoogleTest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Link test executable against gtest & gtest_main
target_link_libraries(cmake_testapp gtest gtest_main pthread)
add_test(NAME cmake_testapp COMMAND cmake_testapp)
