#include <unordered_map>
using namespace std ;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(!headA|| !headB) return nullptr ;
    ListNode*curr1 = headA ;ListNode*curr2 = headB;
    unordered_map<ListNode* , ListNode*>nodeRef ;
    while (curr1){
        nodeRef[curr1] =curr1->next;
        curr1 = curr1->next ;
    }
    while(curr2){
        if(nodeRef.find(curr2)!= nodeRef.end())
            return curr2 ;
        curr2 = curr2->next ;
    }
    return nullptr ;
}