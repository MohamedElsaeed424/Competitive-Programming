#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>
#include <unordered_set>
#include <iostream>
using namespace std ;
int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int,int>m ;
    m[0]=1;
    int sum =0 ;
    int count =0 ;
    for (int i = 0; i <nums.size() ; ++i) {
        sum+=nums[i];
        int rem = sum%k ;
        if(rem <0)
            rem+=k;
        count+=m[rem];
        m[rem]++;
    }
    return count ;
}

int main(){
    vector<int>a = {4,5,0,-2,-3,1};
    subarraysDivByK(a ,5);
    return 0 ;
}