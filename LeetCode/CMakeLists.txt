cmake_minimum_required(VERSION 3.12)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

add_executable(LeetCode main.cpp ./leetcode1/two_sums.cpp ./leetcode2/add_two_numbers.cpp leetcode3/find_longest_string.cpp leetcode3/find_longest_string.h leetcode4/median_two_arrays.cpp leetcode4/median_two_arrays.h leetcode5/longest_palindromic_string.cpp leetcode5/longest_palindromic_string.h leetcode6/zigzag_conversion.cpp leetcode6/zigzag_conversion.h leetcode7/reverse_integer.cpp leetcode7/reverse_integer.h leetcode8/atoi.cpp leetcode8/atoi.h)