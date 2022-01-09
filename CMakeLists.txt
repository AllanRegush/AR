cmake_minimum_required(VERSION 3.14)

project(AR LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(AR main.cpp
    StaticVector.h
    StaticCharBuffer.h
    Math.h
    ARStdInt.h
    StringView.h)
