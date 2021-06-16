cmake_minimum_required(VERSION 3.10)

set(INCLUDE_DIR "include/")
set(CMAKE_CXX_STANDARD 14)

project(CBinding)

add_library(CoreLibrary corelibrary.cpp)
target_include_directories(CoreLibrary PUBLIC ${INCLUDE_DIR})

add_executable(CppClient cppClient.cpp)
target_include_directories(CppClient PUBLIC ${INCLUDE_DIR})
target_link_libraries(CppClient PRIVATE CoreLibrary)
add_dependencies(CppClient CoreLibrary)

add_library(Wrapper SHARED wrapper.cpp)
target_include_directories(Wrapper PUBLIC ${INCLUDE_DIR})
target_link_libraries(Wrapper PRIVATE CoreLibrary)
add_dependencies(Wrapper CoreLibrary)

add_executable(CClient cClient.c)
target_include_directories(CClient PUBLIC ${INCLUDE_DIR})
target_link_libraries(CClient PRIVATE Wrapper)
add_dependencies(CClient Wrapper)

