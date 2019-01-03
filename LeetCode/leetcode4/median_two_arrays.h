//
// Created by Administrator on 2019/1/3.
//
/*
 * There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

You may assume nums1 and nums2 cannot be both empty.

Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0

Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5


 * */
#ifndef LEETCODE_MEDIAN_TWO_ARRAYS_H
#define LEETCODE_MEDIAN_TWO_ARRAYS_H

#include <vector>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);

#endif //LEETCODE_MEDIAN_TWO_ARRAYS_H
