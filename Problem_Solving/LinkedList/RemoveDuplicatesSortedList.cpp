struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 *
 *        1 1 2 3 3 4 5 5
 * cur      ^
 * now    ^
 */
ListNode* deleteDuplicates(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode*now = head; ListNode*cur = head ;
    while(now->next){
        if(now->val !=now->next->val){
            now = now->next ;
        }else{
            while(cur->next && cur->val == cur->next->val){
                cur = cur->next;
            }
            now->next = cur->next ;
        }
        cur = cur->next ;
    }
    return head ;
}

int main(){
    ListNode * a = new ListNode(1); ListNode * n =a ;
    a->next = new ListNode(1) ;a = a->next;
    a->next = new ListNode(1) ;a = a->next;
    a->next = new ListNode(2) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(4) ;a = a->next;
    a->next = new ListNode(5) ;a = a->next;
    a->next = new ListNode(5) ;a = a->next;
    deleteDuplicates(n);

    return 0 ;
}