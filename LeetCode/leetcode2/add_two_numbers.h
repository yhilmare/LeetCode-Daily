//
// Created by Administrator on 2019/1/2.
//
/*
 * You are given two non-empty linked lists representing two non-negative integers.
 * The digits are stored in reverse order and each of their nodes contain a single digit.
 * Add the two numbers and return it as a linked list.You may assume the two numbers do not contain any leading zero,
 * except the number 0 itself.
 * Example:
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 * */

#ifndef LEETCODE_ADD_TWO_NUMBERS_H
#define LEETCODE_ADD_TWO_NUMBERS_H

#include <iostream>
#include <vector>

struct linked_list{
    int val;
    linked_list *next;
};

class digits_linked_list{
private:
    linked_list *head;
public:
    digits_linked_list();
    digits_linked_list(int val);
    digits_linked_list(const digits_linked_list &);
    digits_linked_list(std::vector<int> &);

    ~digits_linked_list();

    digits_linked_list &operator=(const digits_linked_list &obj);

    linked_list *get_first_node() const;

    friend std::ostream &operator<<(std::ostream &os, const digits_linked_list &obj);
    friend digits_linked_list operator+(const digits_linked_list &sum1, const digits_linked_list &sum2);

};


#endif //LEETCODE_ADD_TWO_NUMBERS_H
