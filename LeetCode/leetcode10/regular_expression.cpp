//
// Created by Administrator on 2019/1/5.
//

#include "regular_expression.h"
#include <iostream>

bool isMatch(std::string s, std::string p, int level){
    for (int i = 0; i < level; i ++){
        std::cout << "-";
    }
    std::cout << "s is " << s << ", p is " << p << std::endl;
    if (p.size() == 0){
        if (s.size() == 0){
            return true;
        }else{
            return false;
        }
    }
    bool first_match = false;
    if (p[0] == s[0]){
        first_match = true;
    }else if (p[0] == '.'){
        first_match = true;
    }
    first_match = (s.size() == 0 ? false : true) && first_match;
    if (p.size() >= 2 && p[1] == '*'){
        return isMatch(s, p.substr(2, p.size()), level + 1) || (first_match && isMatch(s.substr(1, s.size()), p, level + 1));
    }else{
        return first_match && isMatch(s.substr(1, s.size()), p.substr(1, p.size()), level + 1);
    }
}
