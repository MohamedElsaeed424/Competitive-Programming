#include <iostream>

using namespace std ;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* partition(ListNode* head, int x) {
    ListNode*l = new ListNode();
    ListNode*ge = new ListNode();
    ListNode*res = l ;
    ListNode*gee = ge ;
    while (head){
        ListNode*n = new ListNode(head->val);
        if(head->val < x){
            l->next = n ;
            l = n;
        }else{
            ge->next = n ;
            ge = n;
        }
        head = head->next ;
    }
    l->next = gee->next;
    return res->next ;
}