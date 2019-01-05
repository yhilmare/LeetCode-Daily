//
// Created by Administrator on 2019/1/5.
//

#include "palindrome_number.h"
#include <iostream>
#include <string>
bool isPalindrome(int x){
    if (x < 0){
        return false;
    }
    char buffer[11];
    int index = 0;
    while (true){
        buffer[index ++] = (x % 10) + 48;
        x /= 10;
        if (x == 0){
            break;
        }
    }
    buffer[index] = 0;
    for (int i = 0; i < index / 2; i ++){
        if(buffer[i] != buffer[index - i - 1]){
            return false;
        }
    }
    return true;
}
