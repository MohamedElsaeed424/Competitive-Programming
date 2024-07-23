#include <vector>
#include <unordered_map>
#include <math.h>
#include <iostream>
#include <unordered_map>
using namespace std ;


int findMaxLength(vector<int>& nums) {
    unordered_map<int,int>m ; int c =0 ;
    for (int i = 0; i < nums.size(); ++i) {
        m[nums[i]]++;
        if(m[0]==m[1]){c = i+1;}
    }
    return c ;
}

int main(){
    vector<int>a = {23,2,4,6,7};
    findMaxLength(a );
    return 0 ;
}