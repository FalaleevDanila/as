cmake_minimum_required(VERSION 3.14)
project(DZ_assembler)

set(CMAKE_CXX_STANDARD 17)

add_executable(main.cpp includes/pcMemoryRead.h includes/myMemoryRead.h sourses/pcMemoryRead.cpp sourses/myMemoryRead.cpp includes/results.h sourses/results.cpp  main.cpp)