cmake_minimum_required(VERSION 3.12)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

add_executable(LeetCode main.cpp ./leetcode1/two_sums.cpp ./leetcode2/add_two_numbers.cpp leetcode3/find_longest_string.cpp leetcode3/find_longest_string.h)