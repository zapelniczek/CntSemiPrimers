cmake_minimum_required(VERSION 3.0.0)
project(CntSemiPrimes VERSION 0.1.0)

set(CMAKE_CXX_STANDAR 17)
add_subdirectory(googletest)
include_directories(googletest/include googlemock/include)

add_executable(CntSemiPrimes main.cpp fun.cpp)
add_executable(Tests uTest.cpp fun.cpp)

target_link_libraries(Tests PRIVATE gtest gmock)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
