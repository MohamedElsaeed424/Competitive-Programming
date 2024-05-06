struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* f =head ; ListNode* s = head ;
    if(!head->next && n ==1) return nullptr ;
    for (int i = 0; (i <n); ++i) {
        f=f->next ;
    }
    if(!f) { // remove first
        head = head->next;
        return head;
    }
    while(f->next){
        f=f->next ;
        s=s->next;
    }
    if(n!=1){
        s->next =s->next->next ;
    }else{
        s->next = nullptr ;
    }
    return head ;
}
int main(){
    ListNode * a = new ListNode(1); ListNode * n =a ;
    a->next = new ListNode(2) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(4) ;a = a->next;
    a->next = new ListNode(5) ;a = a->next;
    a->next = new ListNode(6) ;a = a->next;
    a->next = new ListNode(7) ;a = a->next;
    a->next = new ListNode(8) ;a = a->next;
    a->next = new ListNode(9) ;a = a->next;
    a->next = new ListNode(10) ;a = a->next;
    removeNthFromEnd(n,7);
    return 0;
}