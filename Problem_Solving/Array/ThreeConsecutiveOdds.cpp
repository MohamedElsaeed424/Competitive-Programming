#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <numeric>

using namespace std ;

bool threeConsecutiveOdds(vector<int>& arr) {
    int s = arr.size() ;
    if(s < 3) return false ;
    int count =0 ;

    for(int n : arr){
        if(n %2 !=0){
            count++;
            if(count == 3) return true ;
        }
        else {
            count =0 ;
        }
    }
    if(count == 3) return true ;

    return false ;
}