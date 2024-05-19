#include <iostream>
#include <vector>
using namespace std ;

int minCostClimbingStairs(vector<int>& cost) {
    int size =cost.size();
    int res =0 ;
    int a = 0 ;
    int b = cost[0];
    for(int i = 2 ; i <= size ; ++i){
        res =(cost[i-1]+ min(a , b)) ;
        a =b ;
        b =res ;
    }
    return min(a,b) ;
}

void main(){
//    vector<int>a = {10,15,20} ;
    vector<int>a = {1,100,1,1,1,100,1,1,100,1} ;
//    vector<int>a = {0,3,2,4};
    cout<< minCostClimbingStairs(a);
    return 0 ;
}