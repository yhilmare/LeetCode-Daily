//
// Created by Administrator on 2019/1/9.
//

#include "three_sum_closest.h"
#include <unordered_set>

int threeSumClosest(std::vector<int>& nums, int target){
    using namespace std;
    int dis = 0;
    while (true){
        for (int k = -1; k < 2; k = k + 2){
            unordered_set<int> sum_map;
            for (int i = 0; i < nums.size(); i ++){
                for (int j = i + 1; j < nums.size(); j ++){
                    int tmp = (target + k * dis) - nums[i] - nums[j];
                    if (sum_map.find(tmp) != sum_map.end()){
                        return target + k * dis;
                    }
                }
                sum_map.insert(nums[i]);
            }
        }
        dis ++;
    }
}
