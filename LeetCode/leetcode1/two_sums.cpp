//
// Created by Administrator on 2019/1/2.
//

#include "two_sums.h"
#include <iterator>
#include <iostream>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target){
    std::vector<int> return_mat;
    std::unordered_map<int, int> hash_map;
    std::pair<int, int> hash_pair;
    for (int i = 0; i < nums.size(); i ++){
        hash_pair.first = target - nums[i];
        hash_pair.second = i;
        if (hash_map.find(nums[i]) != hash_map.end()){
            return_mat.push_back(hash_map[nums[i]]);
            return_mat.push_back(i);
            return return_mat;
        }else{
            hash_map.insert(hash_pair);
        }
    }
    return return_mat;
}
