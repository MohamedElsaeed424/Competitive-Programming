struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/**
 *         . . . . . .
 * list1 : 1 2 4 5 6
 *         . . . .
 * list2 : 1 3 4
 * ans : 0 1 1 2 3 4 4 5 6
 *
 *               .
 * list1 : 1 2 4
 *               .
 * list2 : 1 3 4 5 6
 * ans : 0 1 1 2 3 4 4
 */
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode * ans = new ListNode(0);
    ListNode * curr = ans ;

    while(list1 || list2){
        if(!list2 && list1){
            curr->next =new ListNode(list1->val) ;
            list1 = list1->next ;
        }else if(!list1 && list2){
            curr->next =new ListNode(list2->val);
            list2 = list2->next ;
        }else if (list1->val < list2->val){
           curr->next =new ListNode(list1->val) ;
           list1 = list1->next ;
        }else {
            curr->next =new ListNode(list2->val);
            list2 = list2->next ;
        }
        curr = curr->next ;
    }
    return ans->next;
}