//
// Created by Administrator on 2019/1/9.
//

#include "three_sum.h"
#include <unordered_map>
#include <iostream>
#include <algorithm>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums){
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> result;
    std::unordered_map<int, int> sum_map;
    std::pair<int, int> sum_pair;
    for (int i = 0; i < nums.size(); i ++){
        for (int j = i + 1; j < nums.size(); j ++){
            int tmp = 0 - nums[i] - nums[j];
            if (sum_map.find(tmp) != sum_map.end()){
                std::vector<int> vec = {nums[i], nums[j], tmp};
                result.push_back(vec);
            }
        }
        sum_pair.first = nums[i];
        sum_pair.second = i;
        sum_map.insert(sum_pair);
    }
    return result;
}