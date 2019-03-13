//
// Created by Administrator on 2019/3/13.
//

#ifndef LEETCODE_REMOVE_LAST_OF_LINK_H
#define LEETCODE_REMOVE_LAST_OF_LINK_H

#include <iostream>
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL){}
};

ListNode* removeNthFromEnd(ListNode* head, int n);

#endif //LEETCODE_REMOVE_LAST_OF_LINK_H
