#include <math.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
int getDecimalValue(ListNode* head) {
    int sum =0 ;
    while(head){
        sum =(sum*2)+head->val ; head = head->next ;
    }
    return sum ;
}
// OR
int getDecimalValue2(ListNode* head) {
    ListNode* curr1 =head ; int size =-1 ; int sum =0 ;
    while (curr1){
        size++; curr1=curr1->next ;
    }
    curr1 =head ;
    while(curr1){
        sum+=(curr1->val* pow(2,size--)); curr1=curr1->next ;
    }
    return sum ;
}

int main(){

}