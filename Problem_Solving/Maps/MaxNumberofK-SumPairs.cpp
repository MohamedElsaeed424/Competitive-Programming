#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std ;

int maxOperations(vector<int>& nums, int k) {
    unordered_map<int,int>m ; int ans ;
    for(int n : nums){
        if(m[k-n]>0){
            m[k-n]--;
            ans++;
        }else{
            m[n]++;
        }
    }
    return ans ;
}

int main(){
//    vector<int>a={1,1,1,1};
//    vector<int>a={1,2,3,4};
//    vector<int>a={3,1,3,4,3};
    vector<int>a={2,2,2,3,1,1,4,1};
    cout << maxOperations(a,4);
    return 0 ;
}