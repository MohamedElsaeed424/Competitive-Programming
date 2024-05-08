struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* swapPairs(ListNode* head) {
    if(head == nullptr) return nullptr ;
    ListNode* tmp = new ListNode(0);
    tmp->next = head ;
    ListNode* cur = tmp ;
    while (cur->next && cur->next->next){
        ListNode* f = cur->next ;
        ListNode* s = cur->next->next ;
        f->next = s->next ;
        cur->next = s ;
        cur->next->next = f ;
        cur = cur->next->next ;
    }
    return tmp ;
}

int main(){
    ListNode * a = new ListNode(1);
    ListNode * n =a ;
    a->next = new ListNode(2) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(4) ;a = a->next;
    a->next = new ListNode(5) ;a = a->next;
    ListNode *l  = swapPairs(n );
    return 0 ;
}