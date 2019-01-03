//
// Created by Administrator on 2019/1/3.
//

#include "find_longest_string.h"
#include <iostream>
#include <map>

int lengthOfLongestSubstring(std::string s){
    if (s.size() == 0){
        return 0;
    }
    using std::string;
    using std::cout;
    using std::endl;
    std::pair<string, int> longest_pair;
    std::map<string, int> longest_map;
    longest_pair.first = s[0];
    longest_pair.second = 1;
    for(int i = 1; i < s.size(); i ++){
        string tmp = longest_pair.first;
        int count = tmp.size();
        int index = -1;
        for (int j = 0; j < count; j ++){
            if (s[i] == tmp[j]){
                index = j;
            }
        }
        if (index == -1){
            longest_pair.first += s[i];
            longest_pair.second += 1;
        }else{
            longest_map.insert(longest_pair);
            longest_pair.first = tmp.substr(index + 1, tmp.size()) + s[i];
            longest_pair.second = longest_pair.first.size();
        }
    }
    longest_map.insert(longest_pair);
    int result = 0;
    for (std::map<string, int>::iterator iter = longest_map.begin(); iter != longest_map.end(); iter ++){
        result = (*iter).second > result ? (*iter).second : result;
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    return result;
}

int pure_lengthOfLongestSubstring(std::string s){
    if (s.size() == 0){
        return 0;
    }
    using std::string;
    int str_index_start = 0;
    int str_index_end = 1;
    int result = 1;
    for(int i = 1; i < s.size(); i ++){
        int index = -1;
        for (int j = str_index_start; j < str_index_end; j ++){
            if (s[i] == s[j]){
                index = j;
            }
        }
        if (index != -1){
            int dis = str_index_end - str_index_start;
            result = dis > result ? dis : result;
            str_index_start = index + 1;
        }
        str_index_end ++;
    }
    int dis = str_index_end - str_index_start;
    result = result = dis > result ? dis : result;
    return result;
}