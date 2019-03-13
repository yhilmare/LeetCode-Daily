//
// Created by Administrator on 2019/3/13.
//

#include "remove_last_of_link.h"

ListNode* removeNthFromEnd(ListNode* head, int n){
    int totalLength = 0;
    for (ListNode *p = head; p; p = p->next){
        totalLength ++;
    }
    if (n <= 0 || n > totalLength){
        return NULL;
    }
    int i = 0;
    for (ListNode *prior = NULL, *p = head; p; p = p->next){
        if (++i == (totalLength - n + 1)){
            if (prior == NULL){
                ListNode *newNode = p->next;
                p->next = NULL;
                delete p;
                return newNode;
            }else{
                prior->next = p->next;
                p->next = NULL;
                delete p;
                return head;
            }
        }
        prior = p;
    }
    return NULL;
}
