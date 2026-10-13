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
            "Looping Statements/for_loop_pattern_program_01.cpp"
            "Looping Statements/pattern_program_02_for_loop.cpp"
            "Looping Statements/pattern_program_03_ascending_pyramid.cpp"
            "Looping Statements/pattern_program_4_ascending_pyramid_part2.cpp"
            "Looping Statements/pattern_program_5_double_number_pattern.cpp"
            "Looping Statements/pattern_program_06_ascending_number_in ascending_pyramid.cpp"
            "Looping Statements/pattern_program_07_alphabetic.cpp"
            "Looping Statements/central_pyramid_pattern.cpp"
            "Looping Statements/odd_even_classify_for_loop.cpp"
            "Looping Statements/program_calculate_average_first_n_numbers.cpp"
            "Looping Statements/factorial_using_for_loop.cpp"
            "Looping Statements/reverse_print_number_for_loop.cpp"
            "Looping Statements/sum_of_entered_digits.cpp"
            "Looping Statements/decimal_equivalent_while_loop.cpp"
            "Looping Statements/binary_to_decimal_equivalent.cpp"
            "Looping Statements/arthimetic_mean_series_part_1.cpp"
            "Looping Statements/GCD_program.cpp"
            "Looping Statements/arthimetic_square_sum_series_part_2.cpp"
            "Looping Statements/sum_of_square_even_numbers_series.cpp"
    )
endforeach()
