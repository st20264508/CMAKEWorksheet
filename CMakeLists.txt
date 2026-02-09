cmake_minimum_required(VERSION 3.1)
project (hello)
add_executable(hello main.cpp colour.cpp colour.h)
target_include_directories (hello PUBLIC ${PROJECT_SOURCE_DIR}/.)