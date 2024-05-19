#include <iostream>
using namespace std ;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(!head||!head->next || left == right) return head ;
    ListNode* cur = head ;ListNode*leftt = head ;
    int count =1 ;
    while (cur->next){
        if(count == left){
            ListNode* rev = new ListNode(cur->val);
            ListNode* rightt = rev ;
            cur = cur->next;
            count++;
            while (count != right){
                ListNode* n = new ListNode(cur->val);
                n->next = rev ;
                rev = n ;
                cur =cur->next ;
                count ++ ;
            }
            ListNode* n = new ListNode(cur->val);
            n->next = rev ;
            rev = n ;
            if(cur->next){
                cur=cur->next;
                rightt->next = cur ;
            }
            if(left != 1) {
                leftt->next =rev;
            }else{
                head  = rev ;
            }
            return head ;
        }
        cur = cur->next;
        if(count > 1) leftt = leftt->next ;
        count++;
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
    reverseBetween(n ,1,2);

    return 0 ;
}