#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>
#include <unordered_set>
#include <iostream>
using namespace std ;


bool isPossibleDivide(vector<int>& nums, int k) {
    map<int,int>m ;
    for(int n : nums) m[n]++;
    for(auto it = m.begin();it != m.end();){
        if(it->second >0){
            for (int i = 0; i < k; ++i) {
                if(m[it->first+i]){
                    m[it->first+i]--;
                }else{
                    return false ;
                }
            }
        }else{
            it++;
        }
    }
    return true ;
}