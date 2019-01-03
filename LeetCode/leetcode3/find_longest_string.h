//
// Created by Administrator on 2019/1/3.
//
/*
 * Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
 * */

#ifndef LEETCODE_FIND_LONGEST_STRING_H
#define LEETCODE_FIND_LONGEST_STRING_H

#include <string>

int lengthOfLongestSubstring(std::string s);
int pure_lengthOfLongestSubstring(std::string s);


#endif //LEETCODE_FIND_LONGEST_STRING_H
