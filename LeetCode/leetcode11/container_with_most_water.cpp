//
// Created by Administrator on 2019/1/5.
//

#include "container_with_most_water.h"

int maxArea(std::vector<int>& height){
    int max_value = 0;
    for (int i = 0; i < height.size(); i ++){
        for (int j = i + 1; j < height.size(); j ++){
            int tmp = (height[j] > height[i] ? height[i] : height[j]) * (j - i);
            max_value = max_value < tmp ? tmp : max_value;
        }
    }
    return max_value;
}