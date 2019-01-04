//
// Created by Administrator on 2019/1/4.
//

#include "zigzag_conversion.h"
#include <iostream>

std::string convert(std::string s, int numRows){
    if (s.size() <= numRows || numRows == 1){
        return s;
    }
    int size = s.size();
    std::string result;
    int about = size / ((numRows - 2) * 2 + 2) + 50;
    for (int i = 0; i < numRows; i ++){
        char buffer[about];
        int tmp_index = i;
        int index = 0;
        if (i == 0 || i == numRows - 1){
            int interval = 2 * numRows - 2;
            while (true){
                buffer[index ++] = s[tmp_index];
                tmp_index += interval;
                if (tmp_index >= size){
                    break;
                }
            }
        }else{
            bool flag = true;
            int interval = -1;
            while (true){
                buffer[index ++] = s[tmp_index];
                if (flag){
                    interval = 2 * (numRows - i) - 2;
                    flag = false;
                }else{
                    interval = 2 * i;
                    flag = true;
                }
                tmp_index += interval;
                if (tmp_index >= size){
                    break;
                }
            }
        }
        buffer[index] = 0;
        result += std::string(buffer);
    }
    return result;
}