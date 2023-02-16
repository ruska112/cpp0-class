cmake_minimum_required(VERSION 3.24)
project(class)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(class
        include/Box.h
        src/main.cpp src/Box.cpp include/Container.h include/BoxAddingException.h src/Container.cpp include/MyNamespace.h)
