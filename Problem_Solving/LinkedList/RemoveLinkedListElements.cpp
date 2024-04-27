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
ListNode* removeElements(ListNode* head, int val) {
    ListNode* cur = new ListNode(0,head) ;
    ListNode*curHead =cur ;
    while(cur->next){
        if(cur->next->val == val)
            cur->next = cur->next->next ;
        else
            cur = cur->next;
    }
    return curHead->next ;
}

int main(){
    ListNode * a = new ListNode(1); ListNode * n =a ;
    a->next = new ListNode(1) ;a = a->next;
    a->next = new ListNode(1) ;a = a->next;
    a->next = new ListNode(2) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(1) ;a = a->next;
    a->next = new ListNode(4) ;a = a->next;
    a->next = new ListNode(5) ;a = a->next;
    a->next = new ListNode(1) ;a = a->next;
    a->next = new ListNode(1) ;a = a->next;
    removeElements(n ,1);

    return 0 ;
}