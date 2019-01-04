//
// Created by Administrator on 2019/1/4.
//

#include "reverse_integer.h"
#include <vector>
#include <iostream>
#include <cmath>
int reverse(int x){
    bool flag = x > 0 ? true : false;
    x = x > 0 ? x : (x * -1);
    if (x < 0){
        return 0;
    }
    int a[20];
    int index = 0;
    while (true){
        a[index ++] = (x % 10);
        x /= 10;
        if (x == 0){
            break;
        }
    }
    int result = 0;
    for (int i = 0; i < index; i ++){
        result += (a[i]) * pow(10, index - i - 1);
    }
    if (result < 0){
        return 0;
    }
    return flag ? result : (result * -1);
}