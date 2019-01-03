//
// Created by Administrator on 2019/1/2.
//

#include "add_two_numbers.h"
#include <cmath>

digits_linked_list::digits_linked_list() {
    head = new linked_list[1];
    linked_list *new_node = new linked_list[1];
    new_node->val = 0;
    new_node->next = NULL;
    head->next = new_node;
}

digits_linked_list::digits_linked_list(int val) {
    head = new linked_list[1];
    head->next = NULL;
    linked_list *last = head;
    while(true){
        int dest = val % 10;
        val /= 10;
        linked_list *new_node = new linked_list[1];
        new_node->val = dest;
        last->next = new_node;
        last = new_node;
        last->next = NULL;
        if (val == 0){
            break;
        }
    }
}

digits_linked_list::digits_linked_list(std::vector<int> &v) {
    head = new linked_list[1];
    head->next = NULL;
    linked_list *last = head;
    for(std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter ++){
        linked_list *new_node = new linked_list[1];
        new_node->val = (*iter);
        last->next = new_node;
        last = new_node;
        last->next = NULL;
    }
}

digits_linked_list::digits_linked_list(const digits_linked_list &obj){
    head = new linked_list[1];
    head->next = NULL;
    linked_list *last = head;
    for (linked_list *p = obj.head->next; p; p = p->next){
        linked_list *new_node = new linked_list[1];
        new_node->val = p->val;
        last->next = new_node;
        last = new_node;
        last->next = NULL;
    }
}

digits_linked_list::~digits_linked_list() {
    linked_list *next;
    for (linked_list *p = head; p != NULL; p = next){
        next = p->next;
        delete []p;
    }
}

linked_list* digits_linked_list::get_first_node() const {
    return head->next;
}

std::ostream &operator<<(std::ostream &os, const digits_linked_list &obj){
    for (linked_list *p = obj.head->next; p != NULL; p = p->next){
        if (p->next == NULL){
            os << (*p).val;
        }else {
            os << (*p).val << " -> ";
        }
    }
    return os;
}

digits_linked_list& digits_linked_list::operator=(const digits_linked_list &obj) {
    if (this == &obj){
        return *this;
    }
    linked_list *next = NULL;
    for (linked_list *p = head->next; p; p = next){
        next = p->next;
        delete []p;
    }
    linked_list *last = head;
    for (linked_list *p = obj.head->next; p; p = p->next){
        linked_list *new_node = new linked_list[1];
        new_node->val = p->val;
        last->next = new_node;
        last = new_node;
        last->next = NULL;
    }
    return *this;
}

digits_linked_list operator+(const digits_linked_list &sum1, const digits_linked_list &sum2){
    bool carry = false;
    std::vector<int> vec;
    linked_list *p = NULL;
    linked_list *q = NULL;
    for (p = sum1.head->next, q = sum2.head->next; p && q; p = p->next, q = q->next){
        int tmp = p->val + q->val;
        if (carry){
            tmp += 1;
        }
        if (tmp >= 10){
            carry = true;
            vec.push_back(tmp % 10);
        }else{
            carry = false;
            vec.push_back(tmp);
        }
    }
    if (!p && !q){
        if (carry){
            vec.push_back(1);
            carry = false;
        }
    }else if (!p && q){
        for (linked_list *tmp = (q == NULL ? p : q); tmp; tmp = tmp->next){
            int tmp_1 = tmp->val;
            if (carry){
                tmp_1 += 1;
            }
            if (tmp_1 >= 10){
                carry = true;
                vec.push_back(tmp_1 % 10);
            }else{
                carry = false;
                vec.push_back(tmp_1);
            }
        }
    }
    if (carry){
        vec.push_back(1);
    }
    return digits_linked_list(vec);
}