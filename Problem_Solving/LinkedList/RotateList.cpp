struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/**
 *
 * head : 1 2 3 4 -> 1 2 3 -> 4 1 2 3 -> 4 1 2
 * cur : 1 2 3 4 -> nullptr -> 4 1 2 3 -> nullptr
 * start = 4 -> 3
 * ans : 4 1 2 3 -> 3 4 1 2
 */

ListNode* rotateRight(ListNode* head, int k) {
    int start = 0; int size = 0 ;
    ListNode * cur ;ListNode * c = head ;ListNode * ans ;
    while(c) {
        size++;
        c=c->next;
    }


    if(!head || !head->next || k ==0 ||k%size ==0) return head ;
    for (int i = 0; i < k%size ; ++i) {
       cur = head ;
        while (cur->next->next)
            cur = cur->next ;
        start = cur->next->val;
        cur->next = nullptr ;
        ans = new ListNode(start);
        ans->next = head ;
        head = ans ;
    }
    return ans ;
}

void main(){
    ListNode * a = new ListNode(1);
    ListNode * n =a ;
    a->next = new ListNode(2) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(4) ;a = a->next;
    a->next = new ListNode(5) ;a = a->next;
    ListNode *l  = rotateRight(n ,2000000000);

}
