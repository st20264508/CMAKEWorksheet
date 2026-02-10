file(GLOB STRINGS_FILES *.cpp)
add_library (colour STATIC ${STRINGS_FILES})


target_include_directories (colour PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})