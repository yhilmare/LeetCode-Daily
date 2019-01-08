//
// Created by Administrator on 2019/1/8.
//

#include "integer_to_roman.h"
#include <iostream>

std::string intToRoman(int num){
    std::string result = "";
    int indictor = 0;
    while(true){
        int carry = num % 10;
        if (indictor == 0){
            if (carry == 0){
                result = std::string("") + result;
            }else if (carry > 0 && carry < 4){
                for (int i = 0; i < carry; i ++) {
                    result = std::string("I") + result;
                }
            }else if (carry == 4){
                result = std::string("IV") + result;
            }else if (carry > 4 && carry < 9){
                result = std::string("V") + result;
                for (int i = 0; i < carry - 5; i ++){
                    result += std::string("I");
                }
            }else{
                result = std::string("IX") + result;
            }
        }else if (indictor == 1){
            if (carry == 0){
                result = std::string("") + result;
            }else if (carry > 0 && carry < 4){
                for (int i = 0; i < carry; i ++) {
                    result = std::string("X") + result;
                }
            }else if (carry == 4){
                result = std::string("XL") + result;
            }else if (carry > 4 && carry < 9){
                for (int i = 0; i < carry - 5; i ++){
                    result = std::string("X") + result;
                }
                result = std::string("L") + result;
            }else{
                result = std::string("XC") + result;
            }
        }else if (indictor == 2){
            if (carry == 0){
                result = std::string("") + result;
            }else if (carry > 0 && carry < 4){
                for (int i = 0; i < carry; i ++) {
                    result = std::string("C") + result;
                }
            }else if (carry == 4){
                result = std::string("CD") + result;
            }else if (carry > 4 && carry < 9){
                for (int i = 0; i < carry - 5; i ++){
                    result = std::string("C") + result;
                }
                result = std::string("D") + result;
            }else{
                result = std::string("CM") + result;
            }
        }else if (indictor == 3){
            if (carry == 0){
                result = std::string("") + result;
            }else if (carry > 0 && carry < 4){
                for (int i = 0; i < carry; i ++) {
                    result = std::string("M") + result;
                }
            }
        }
        num /= 10;
        if (num == 0){
            break;
        }
        indictor ++;
    }
    return result;
}
