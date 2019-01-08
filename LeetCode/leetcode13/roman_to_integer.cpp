//
// Created by Administrator on 2019/1/8.
//

#include "roman_to_integer.h"
#include <iostream>

bool compare_string(char, char);
int char_to_int(char);

int romanToInt(std::string s){
    int size = s.size();
    int result = 0;
    char last = 'I';
    for (int i = 0; i < size; i ++){
        if (compare_string(last, s[size - i - 1])){
            result += char_to_int(s[size - i - 1]);
        }else{
            result -= char_to_int(s[size - i - 1]);
        }
        last = s[size - i - 1];
    }
    return result;
}

int char_to_int(char x){
    if (x == 'I'){
        return 1;
    }else if(x == 'V'){
        return 5;
    }else if (x == 'X'){
        return 10;
    }else if (x == 'L'){
        return 50;
    }else if (x == 'C'){
        return 100;
    }else if (x == 'D'){
        return 500;
    }else if (x == 'M'){
        return 1000;
    }
    return -1;
}

bool compare_string(char a, char b){
    if (a == 'I'){
        return true;
    }
    if (a == 'V'){
        if (b == 'I'){
            return false;
        }else{
            return true;
        }
    }
    if (a == 'X'){
        if (b == 'I' || b =='V'){
            return false;
        }else{
            return true;
        }
    }
    if (a == 'L'){
        if (b == 'I' || b =='V' || b =='X'){
            return false;
        }else{
            return true;
        }
    }
    if (a == 'C'){
        if (b == 'I' || b =='V' || b =='X' || b == 'L'){
            return false;
        }else{
            return true;
        }
    }
    if (a == 'D'){
        if (b == 'I' || b =='V' || b =='X' || b == 'L' || b == 'C'){
            return false;
        }else{
            return true;
        }
    }
    if (a == 'M'){
        if (b == 'I' || b =='V' || b =='X' || b == 'L' || b == 'C' || b == 'D'){
            return false;
        }else{
            return true;
        }
    }
    return true;
}