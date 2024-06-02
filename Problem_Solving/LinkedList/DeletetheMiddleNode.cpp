struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* deleteMiddle1(ListNode* head) {
    if(head==nullptr || head->next==nullptr){
        delete head;
        return nullptr ;
    }
    ListNode* slow=head;
    ListNode* fast =head;
    ListNode* prev = nullptr;

    while(fast!=nullptr && fast->next!=nullptr){
        prev=slow;
        slow=slow->next;

        fast = fast->next->next;

    }
    prev->next = slow->next;
    slow->next=nullptr;
    delete slow;
    return head;

}

ListNode* deleteMiddle(ListNode* head) {
    if(!head->next->next || !head ) return head ;
    int count  =0 ; ListNode*cur = head ;
    while (cur){
        count++;
        cur = cur->next;
    }
    int pos = count/2;
    cur = head ;
    for (int i = 0; i < count ; ++i) {
        if(i == pos - 1){
            cur->next = cur->next->next ;
            return head ;
        }
        cur = cur->next ;
    }
    return head ;
}