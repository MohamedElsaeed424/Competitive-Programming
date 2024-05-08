#include <math.h>
#include <iostream>
using namespace std ;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode* doubleIt(ListNode* head) {
    ListNode* ll = new ListNode(head->val);
    head = head->next ;
    while(head){
        ListNode * l = new ListNode(head->val);
        l->next = ll ;
        ll =l ;
        head =head->next ;
    }
    int nodeNum = ll->val*2;
    ListNode*ans = new ListNode(nodeNum%10);
    int carry =nodeNum/10 ;
    ll =ll->next ;
    ListNode*fans =ans ;
    while (ll){
        nodeNum  = ((ll->val*2))+carry;
        ListNode* k= new ListNode(nodeNum%10);
        k->next = fans ;
        fans =k ;
        carry = nodeNum/10 ;
        ll = ll->next ;
    }
    if(carry!=0){
        ListNode* k= new ListNode(carry);
        k->next = fans ;
        fans =k ;
    }
    return fans;
}

int main(){
    ListNode * a = new ListNode(0); ListNode * n =a ;
//    a->next = new ListNode(8) ;a = a->next;
//    a->next = new ListNode(9) ;a = a->next;
//    a->next = new ListNode(4) ;a = a->next;
//    a->next = new ListNode(5) ;a = a->next;
//    a->next = new ListNode(6) ;a = a->next;
    doubleIt(n);
    return 0 ;
}