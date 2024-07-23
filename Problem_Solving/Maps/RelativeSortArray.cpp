#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>
#include <unordered_set>
#include <iostream>
using namespace std ;


vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int,int>m;
    unordered_map<int,int>s ;
    map<int,int>b;
    vector<int>ans(arr1.size());
    int i =0 ;
    for(int n :arr2) s[n]++;
    for(int n: arr1){
        if(s.find(n)==s.end()) b[n]++;
        else  m[n]++;
    }
    for(int n : arr2){
        if(m.find(n)!=m.end()){
            for (int j = 0; j < m[n]; ++j) {
                ans[i] = n ; i++;
            }
        }
    }
    for(auto p : b){
        for (int j = 0; j <p.second ; ++j) {
            ans[i]=p.first;i++;
        }
    }
    return ans ;
}

int main(){
    vector<int>a = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int>b = {2,1,4,3,9,6};
    relativeSortArray(a,b);
    return 0 ;
}