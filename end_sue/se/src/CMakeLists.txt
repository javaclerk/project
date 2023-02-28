cmake_minimum_required(VERSION 3.16)
project(end_2_sending_program)
find_package (Threads REQUIRED)

message(STATUS "Compiler")
message(STATUS " - ID\t: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS " - Version\t: ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS " - Path\t: ${CMAKE_CXX_COMPILER}")

add_executable (sending_program main.cc example.cc checkDate.cc send.cc input.cc)

set(THREADS_PREFER_PTHREAD_FLAG ON)

target_link_libraries (sending_program ${CMAKE_THREAD_LIBS_INIT})