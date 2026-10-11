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
            basics/printing_ascii_value_of_character.cpp
            basics/write_program_read_char_upper_case.cpp
            "Decision Statements/01_eligible_to_vote_decision_statement_ds.cpp"
            "Decision Statements/charcter_entered_by_user.cpp"
            "Decision Statements/larger_number_between_two_if_else.cpp"
            "Decision Statements/odd_even_using_if_else.cpp"
            "Decision Statements/Diwali_bonus_program_if_else.cpp"
            "Decision Statements/income_tax_calculation_using_if_elseif.cpp"
            "Decision Statements/Grade_calculation_using_switch_case.cpp"
            "Decision Statements/Grade_calculation_using_switch_case.h"
            "Looping Statements/First_10_numbers_while_loop_program.cpp"
            "Looping Statements/sum_of_first_10_numbers_while_loop.cpp"
            "Looping Statements/20_horizontal_astrisks.cpp"
            "Looping Statements/largest_of_10_using_ternary_while.cpp"
            "Looping Statements/read_numbers_by_user.cpp"
            "Looping Statements/LEAP_YEAR_DO_WHILE.cpp"
    )
endforeach()
