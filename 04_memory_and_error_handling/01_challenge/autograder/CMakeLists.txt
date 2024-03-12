cmake_minimum_required(VERSION 3.14)
project(ChallengeTest)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GTEST_SHARED_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../autograder/googletest")
set(GTEST_SHARED_BUILD_DIR "${GTEST_SHARED_DIR}/../build")
file(MAKE_DIRECTORY ${GTEST_SHARED_BUILD_DIR})

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG f8d7d77c06936315286eb55f8de22cd23c188571 # v1.14.0
  SOURCE_DIR "${GTEST_SHARED_DIR}"
  BINARY_DIR "${GTEST_SHARED_BUILD_DIR}"
)
FetchContent_GetProperties(googletest)
if(NOT EXISTS "${GTEST_SHARED_BUILD_DIR}/googletest")
  FetchContent_Populate(googletest)
endif()
add_subdirectory(${GTEST_SHARED_DIR} ${GTEST_SHARED_BUILD_DIR})

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
  execute_process(COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/rename.bat")
else()
  execute_process(COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/rename")
endif()

file(GLOB MAIN_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../*.cpp")
file(GLOB TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../tests/*.cpp")
file(GLOB DUMMY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/gen/dummy_main.cpp")
list(APPEND ALL_SOURCES ${MAIN_SOURCES} ${TEST_SOURCES} ${DUMMY_SOURCES})
list(REMOVE_ITEM ALL_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../main.cpp")

add_executable(Tests ${ALL_SOURCES})
target_include_directories(Tests PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/..)
target_link_libraries(Tests gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(Tests)
