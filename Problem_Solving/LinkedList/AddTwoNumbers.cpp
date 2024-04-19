#include <iostream>

 using namespace std ;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* ans = new ListNode(0);
    ListNode*curr = ans ;
    int c =0;
    while (l1|| l2 || c){
        int d1 = l1 ? l1->val : 0 ;
        int d2 = l2 ? l2->val : 0 ;
        int sum = d1 +d2 +c ;
        curr->next = new ListNode(sum%10);
        curr = curr->next ;
        c= sum /10;
        l1 = l1? l1->next : nullptr ;
        l2 = l2? l2->next : nullptr ;
    }
    return ans->next;
}


