#include <stack>
#include <iostream>

using namespace std ;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode* head) {
    stack<int> s; ListNode* cur =head ; s.push(cur->val); cur =cur->next ;
    while(cur){
        if(cur->val == s.top())
            s.pop();
        else{
            if(cur->next->val != s.top())
                s.push(cur->val);
        }
        cur =cur->next ;
    }
    return s.empty() ;
}

int main(){
    ListNode * a = new ListNode(1); ListNode * n =a ;
//    a->next = new ListNode(1) ;a = a->next;
//    a->next = new ListNode(1) ;a = a->next;
    a->next = new ListNode(2) ;a = a->next;
    a->next = new ListNode(3) ;a = a->next;
//    a->next = new ListNode(3) ;a = a->next;
    a->next = new ListNode(2) ;a = a->next;
//    a->next = new ListNode(5) ;a = a->next;
    a->next = new ListNode(1) ;a = a->next;
    cout << isPalindrome(n);
}