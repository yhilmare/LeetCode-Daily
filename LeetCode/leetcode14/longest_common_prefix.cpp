//
// Created by Administrator on 2019/1/9.
//

#include "longest_common_prefix.h"


std::string longestCommonPrefix(std::vector<std::string>& strs){
    if (strs.size() == 0){
        return std::string("");
    }
    char buffer[1000];
    int index = 0;
    while(true){
        for (int i = 0; i < strs.size() - 1; i ++){
            if (index == strs[i].size() || index == strs[i + 1].size()){
                buffer[index] = 0;
                return std::string(buffer);
            }
            if (strs[i][index] != strs[i + 1][index]){
                buffer[index] = 0;
                return std::string(buffer);
            }
        }
        if (index == strs[0].size()){
            return std::string(strs[0]);
        }
        buffer[index] = strs[0][index];
        index ++;
    }
}