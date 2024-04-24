struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void deleteNode(ListNode* node) {
    ListNode * a = node;
    while(a->next->next){
        a->val = a->next->val ;
        a = a->next ;
    }
    a->val = a->next->val ;
    a->next  =nullptr;
}