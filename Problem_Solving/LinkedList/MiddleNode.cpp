#include <math.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode* cur =head ; int count = 0 ;
    while(cur){
        count++;
        cur = cur->next ;
    }
    for (int i = 0; i < count/2; ++i) {
        head = head->next;
    }
    return head ;
}
int main(){

    ListNode * a = new ListNode(1); ListNode * n =a ;
//    a->next = new ListNode(1) ;a = a->next;
//    a->next = new ListNode(1) ;a = a->next;
    a->next = new ListNode(2) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
//    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(4) ;a = a->next;
//    a->next = new ListNode(5) ;a = a->next;
    a->next = new ListNode(5) ;a = a->next;
    a->next = new ListNode(6) ;a = a->next;
    middleNode(n);

    return 0 ;
}