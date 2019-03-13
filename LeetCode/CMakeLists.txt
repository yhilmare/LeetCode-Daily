cmake_minimum_required(VERSION 3.12)

project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

add_executable(LeetCode main.cpp ./leetcode1/two_sums.cpp
        ./leetcode2/add_two_numbers.cpp
        leetcode3/find_longest_string.cpp
        leetcode4/median_two_arrays.cpp
        leetcode5/longest_palindromic_string.cpp
        leetcode6/zigzag_conversion.cpp
        leetcode7/reverse_integer.cpp
        leetcode8/atoi.cpp
        leetcode9/palindrome_number.cpp
        leetcode10/regular_expression.cpp
        leetcode11/container_with_most_water.cpp
        leetcode12/integer_to_roman.cpp
        leetcode13/roman_to_integer.cpp
        leetcode14/longest_common_prefix.cpp
        leetcode15/three_sum.cpp
        leetcode16/three_sum_closest.cpp
        leetcode17/letter_combinations.cpp leetcode19/remove_last_of_link.cpp leetcode19/remove_last_of_link.h)