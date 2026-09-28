cmake_minimum_required(VERSION 3.20)

project(cpp_dsa)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB BASIC_SOURCES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/basics/*.cpp"
)

foreach(source_file ${BASIC_SOURCES})
    get_filename_component(executable_name ${source_file} NAME_WE)
    add_executable(${executable_name} ${source_file})
endforeach()
