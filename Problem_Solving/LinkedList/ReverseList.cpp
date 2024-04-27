struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 *
 *               1 1 2 3 3 4 5 5
 *                 ^
 * curAnsHead  1 1
 *
 */
ListNode* reverseList(ListNode* head) {
    if(!head || !head->next) return head ;
    ListNode*curAnsHead = new ListNode(head->val);
    head = head->next ;
    while(head){
       ListNode*cur = new ListNode(head->val , curAnsHead);
       curAnsHead = cur ;
       head = head->next;
    }
    return curAnsHead;
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
    reverseList(n);

    return 0 ;
}