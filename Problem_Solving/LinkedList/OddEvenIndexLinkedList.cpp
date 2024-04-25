struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/**
 *     1 3 2 2 3 4 5 6
 * cur   ^
 * now   ^
 * evCurr
 *     0 2
 */
ListNode* oddEvenList(ListNode* head) {
    if(!head || !head->next || !head->next->next) return head ;
    ListNode* even = new ListNode(0);
    ListNode*evCurr = even ;
    ListNode*cur = head ;
    ListNode*now = head ;
    for (int i = 1; cur ; ++i) {
        if(i %2 == 0){
            evCurr->next = new ListNode(cur->val);
            evCurr = evCurr->next ;
            if(cur->next){
                now->next = cur->next;
                now = now->next;
            }
        }
        cur = cur->next;
    }
    now->next = even->next;
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
    oddEvenList(n);

    return 0 ;
}