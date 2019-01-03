//
// Created by Administrator on 2019/1/3.
//

#include "median_two_arrays.h"
#include <iostream>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2){
    int m = nums1.size();
    int n = nums2.size();
    int i = 0;
    int j = 0;
    int index = (m + n) / 2;
    int former;
    while((i + j) < (m + n)){
        int dest = 0;
        if (i >= m || j >= n){
            if (i < m){
                dest = nums1[i ++];
            }
            if (j < n){
                dest = nums2[j ++];
            }
        }else{
            if(nums1[i] <= nums2[j]){
                dest = nums1[i ++];
            }else{
                dest = nums2[j ++];
            }
        }
        if ((i + j) >= index){
            if ((i + j) >= (index + 1)){
                if ((m + n) % 2){
                    return dest;
                }else{
                    return (former + dest) / 2.0;
                }
            }
            former = dest;
        }
    }
}

