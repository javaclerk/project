cmake_minimum_required(VERSION 3.16)
project(end_2_receiving_program)

find_package (Threads REQUIRED)

message(STATUS "Compiler")
message(STATUS " - ID\t: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS " - Version\t: ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS " - Path\t: ${CMAKE_CXX_COMPILER}")

add_executable (receiving_program checkDate.cc example.cc ledfunc.cc ledpattern.cc main.cc receive.cc tempfunc.cc)

set(THREADS_PREFER_PTHREAD_FLAG ON)

target_link_libraries (receiving_program ${CMAKE_THREAD_LIBS_INIT})