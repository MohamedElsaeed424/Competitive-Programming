#include <math.h>
#include <iostream>
#include <vector>
using namespace std ;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    vector<int>store;
   int minn = INT_MAX , prev = head->val ,cur ,next , n , position = 2  ;

   while(head->next){
        cur = head->val  ; next = head->next->val ;
        if((prev > cur and cur < next) or (prev < cur and cur > next)){
            store.push_back(position);
        }
        position++; head = head->next ; prev = cur ;
        n = store.size();
       if(n>1) minn = min(minn , store[n-1]-store[n-2]);
   }
    if(minn == INT_MAX) return {-1,-1};
    return {minn , store[store.size()-1]-store[0]} ;
}