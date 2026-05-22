
cmake_minimum_required(VERSION 3.5)

project(libft)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
file(GLOB SRCS "${PROJECT_SOURCE_DIR}/libft/*.c" "main.c")
add_library(libft SHARED ${SRCS} libft/libft.h)
include_directories(libft)
add_executable(google-test main.c)
target_link_libraries(google-test libft)

set(gtest_SRC_DIR test/googletest-1.17.0)
add_subdirectory(${gtest_SRC_DIR})

include_directories(libft)
include_directories(${gtest_SRC_DIR}/googletest/include)
add_executable(runLibftTests test/main.cpp)
target_link_libraries(runLibftTests gtest gtest_main libft)
target_link_libraries(runLibftTests libft)

##set(CMAKE_CXX_STANDARD 11)
##set(CMAKE_C_COMPILER g++)
##set(CMAKE_CXX_LINK_EXECUTABLE cxx)
#add_subdirectory(googletest-release-1.8.1)
#set(gtest_SRC_DIR googletest-release-1.8.1)
#include_directories(${gtest_SRC_DIR}/googletest/include ${gtest_SRC_DIR}/googletest)
#add_executable(runSumTests main.cc sum_test.cc)
##set_target_properties(runSumTests PROPERTIES LINKER_LANGUAGE CXX)
#target_link_libraries(runSumTests gtest gtest_main)
#target_link_libraries(runSumTests libsum)