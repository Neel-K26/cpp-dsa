cmake_minimum_required(VERSION 3.20)

project(cpp_dsa)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB BASIC_SOURCES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/basics/*.cpp"
)

foreach(source_file ${BASIC_SOURCES})
    get_filename_component(executable_name ${source_file} NAME_WE)
    add_executable(${executable_name} ${source_file}
            basics/03_calculate_area_triangle_heron.cpp
            "basics/04_distance between_two_points.cpp"
            "basics/04_distance between_two_points.cpp"
            basics/numerical_operations_integer.cpp
            basics/numerical_operations_integer.cpp
            basics/numerical_operations_integer.cpp
            basics/largest_of_two_using_ternary_operatior.cpp
            basics/largest_of_three_numbers_ternary_using_operator.cpp
            basics/area_of_circle.cpp
            basics/area_of_circle.cpp
            basics/printing_ascii_value_of_character.cpp)
endforeach()
