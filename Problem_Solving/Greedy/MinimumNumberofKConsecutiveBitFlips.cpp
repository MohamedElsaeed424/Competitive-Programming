#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include <bitset>
using namespace std ;

int minKBitFlips(vector<int>& nums, int k) {
    int n = nums.size() ;
    int ans  =0 ;
    bitset<10*10*10*10*10>big,mask;

    for (int i = 0; i < n; ++i) {
        if(nums[i] ==1){
            big.set(i);
        }
    }
    for (int i = 0; i < k ; ++i) {
        mask.set(i);
    }
    for (int  i = 0; i <= (n-k); ++i) {
        if(!big.test(i)){
            big = big ^ mask ;
            ans++ ;
        }
        mask = mask << 1;
    }
    for (int c = (n-k); c < n ; ++c) {
        if(!big.test(c)) return -1;
    }
    return ans ;

}

// bad sol
//int minKBitFlips(vector<int>& nums, int k) {
//    int n = nums.size() ;
//    int i =0 ;
//    int count =0 ;
//    for (i = 0; i <= n-k ; ++i) {
//        if(nums[i]==0){
//            int m =i ;
//            for (int j = 0; j < k ; ++j) {
//                nums[m] =nums[m] == 1 ? 0 : 1 ; m++;
//            }
//            count++;
//        }
//    }
//    for (int c = i; c < n ; ++c) {
//        if(nums[c]==0)return -1 ;
//    }
//    return count ;
//}

int main(){
    vector<int>a={0,0,0,1,0,1,1,0};
    minKBitFlips(a,3);
    return  0;
}