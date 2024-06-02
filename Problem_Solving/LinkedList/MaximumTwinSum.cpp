#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std ;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int pairSum(ListNode* head) {
    int maxx = INT_MIN ;
    vector<ListNode*>a ;
    ListNode* cur = head ;
    while (cur){
        a.push_back(cur);
        cur = cur->next;
    }
    for (int i = 0; i < a.size()/2; ++i) {
        int n =a[i]->val+a[a.size()-1-i]->val ;
        if( n> maxx){
            maxx = n;
        }
    }
    return maxx ;
}