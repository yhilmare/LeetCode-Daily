//
// Created by Administrator on 2019/1/9.
//

#include "three_sum.h"
#include <iostream>
#include <algorithm>
#include <set>
#include <unordered_set>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums, int target){
    using namespace std;
    vector<vector<int>> result;
    set<vector<int>> sum_set;
    unordered_set<int> sum_map;
    for (int i = 0; i < nums.size(); i ++){
        for (int j = i + 1; j < nums.size(); j ++){
            int tmp = target - nums[i] - nums[j];
            if (sum_map.find(tmp) != sum_map.end()){
                vector<int> tmp_vec = {nums[i], nums[j], tmp};
                sort(tmp_vec.begin(), tmp_vec.end());
                sum_set.insert(tmp_vec);
            }
        }
        sum_map.insert(nums[i]);
    }
    for (auto iter = sum_set.begin(); iter != sum_set.end(); iter ++){
        result.push_back(*iter);
    }
    return result;
}