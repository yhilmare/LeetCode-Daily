//
// Created by Administrator on 2019/1/3.
//

#include "longest_palindromic_string.h"
#include <iostream>
#include <cstring>
bool is_palindrome(char *begin, char *end);
std::string longestPalindrome(std::string s){
    if (s.size() == 0){
        return std::string("");
    }
    int size = s.size();
    char buffer[size + 1];
    std::copy(s.rbegin(), s.rend(), buffer);
    buffer[size] = 0;
    int origin_former = size - 1;
    int origin_last = size;
    int reverse_former = 0;
    int reverse_last = 1;
    int result = 0;
    char pointer[1001];
    for (int i = 0; i < size; i ++){
        int count = 0;
        int longest = 0;
        int begin = 0;
        char tmp[1001];
        for (int interval = 0; interval < origin_last - origin_former; interval ++){
            if(s[origin_former + interval] == buffer[reverse_former + interval]){
                count ++;
            }else{
                if (longest < count){
                    if (is_palindrome(buffer + reverse_former + begin, buffer + reverse_former + begin + count)){
                        std::copy(s.begin() + origin_former + begin, s.begin() + origin_former + begin + count, tmp);
                        tmp[count] = 0;
                        longest = strlen(tmp);
                    }
                }
                begin = interval + 1;
                count = 0;
            }
        }
        if (longest < count){
            if (is_palindrome(buffer + reverse_former + begin, buffer + reverse_former + begin + count)){
                std::copy(s.begin() + origin_former + begin, s.begin() + origin_former + begin + count, tmp);
                tmp[count] = 0;
                longest = strlen(tmp);
            }
        }
        if (result < longest){
            result = longest;
            strcpy(pointer, tmp);
        }
        origin_former --;
        reverse_last ++;
    }
    origin_former = 0;
    origin_last = size - 1;
    reverse_former = 1;
    for (int i = 0; i < size - 1; i ++){
        int count = 0;
        int longest = 0;
        int begin = 0;
        char tmp[1001];
        for (int interval = 0; interval < origin_last - origin_former; interval ++){
            if(s[origin_former + interval] == buffer[reverse_former + interval]){
                count ++;
            }else{
                if (longest < count){
                    if (is_palindrome(buffer + reverse_former + begin, buffer + reverse_former + begin + count)){
                        std::copy(s.begin() + origin_former + begin, s.begin() + origin_former + begin + count, tmp);
                        tmp[count] = 0;
                        longest = strlen(tmp);
                    }
                }
                begin = interval + 1;
                count = 0;
            }
        }
        if (longest < count){
            if (is_palindrome(buffer + reverse_former + begin, buffer + reverse_former + begin + count)){
                std::copy(s.begin() + origin_former + begin, s.begin() + origin_former + begin + count, tmp);
                tmp[count] = 0;
                longest = strlen(tmp);
            }
        }
        if (result < longest){
            result = longest;
            strcpy(pointer, tmp);
        }
        origin_last --;
        reverse_former ++;
    }
    return std::string(pointer);
}

bool is_palindrome(char *begin, char *end){
    int length = end - begin;
    for (int i = 0; i < length / 2; i ++){
        if(begin[i] != begin[length - i - 1]){
            return false;
        }
    }
    return true;
}