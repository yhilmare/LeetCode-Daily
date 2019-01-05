//
// Created by Administrator on 2019/1/4.
//

#include "atoi.h"
#include <iostream>
#include <cmath>
int myAtoi(std::string str){
    if (str.size() == 0) {
        return 0;
    }
    int space_start = 0;
    int tmp_size = str.size();
    int space_end = tmp_size;
    bool flag_1 = true;
    bool flag = true;
    for (int i = 0; i < tmp_size; i ++){
        if(str[i] == 32 && flag_1){
            space_start ++;
        }
        if (str[tmp_size - i - 1] == 32 && flag){
            space_end --;
        }
        if (str[i] != 32){
            flag_1 = false;
        }
        if(str[tmp_size - i - 1] != 32){
            flag = false;
        }
        if (!flag_1 && !flag){
            break;
        }
    }
    str.erase(str.begin(), str.begin() + space_start);
    str.erase(str.begin() + space_end - space_start, str.end());
    if (str.size() == 0){
        return 0;
    }
    flag = false;
    if (str[0] > 57 || str[0] < 48){
        if (str[0] != 45 && str [0] != 43){
            return 0;
        }else{
            if (str.size() == 1){
                return 0;
            }
            if (str[1] > 57 || str[1] < 48){
                return 0;
            }
            if (str[0] == 45){
                flag = true;
            }
            str.erase(str.begin(), str.begin() + 1);
        }
    }
    space_start = 0;
    space_end = 0;
    flag_1 = true;
    for (std::string::iterator iter = str.begin(); iter != str.end(); iter ++){
        if ((*iter) == 48 && flag_1){
            space_start ++;
        }
        if ((*iter) != 48){
            flag_1 = false;
        }
        if (((*iter) <= 57 && (*iter) >= 48)){
            space_end ++;
        }else{
            break;
        }
    }
    str.erase(str.begin(), str.begin() + space_start);
    str.erase(str.begin() + space_end - space_start, str.end());
    int result = 0;
    int size = str.size();
    if (size > 10) {
        if (flag){
            return -2147483648;
        }else{
            return 2147483647;
        }
    }
    for (int i = 0; i < size; i ++){
        result += (str[i] - 48) * pow(10, size - i - 1);
    }
    if (result < 0){
        if (flag){
            return -2147483648;
        }else{
            return 2147483647;
        }
    }
    return flag ? (-1) * result : result;
}