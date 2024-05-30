#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;


int maxProduct(vector<int>& nums) {
    if(nums.empty()) return 0 ;
    int maxx = INT_MIN ; int neg =0 ; int prevProd =1 ;
    for (int i = 0; i <nums.size() ; ++i) {
        prevProd*=nums[i];
        maxx = max(prevProd , maxx);
        if(prevProd ==0){ //  reset
            prevProd =1 ;
            neg =0 ;
        }else if(prevProd <0){
            if(neg == 0) neg = prevProd ;
            else maxx = max(prevProd/neg , maxx) ;
        }
    }
    return maxx ;
}

int main(){
    vector<int>a = {1,2,3,0,4,5,6};
    maxProduct(a);
    return 0 ;
}