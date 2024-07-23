#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <numeric>

using namespace std ;

inline bool f(int force, vector<int>& position, int m){
    int x=position[0], balls=1;
    for(int i=1; i<position.size() && balls<=m; i++){
        if (position[i]-x>=force){
            x=position[i];
            balls++;
        }
    }
    return balls>=m;
}


int maxDistance(vector<int>& position, int m) {
    sort(position.begin(),position.end());
    int diff = (position[position.size()-1]-position[0]) ;
    if(m == 2) return diff ;
    int minf = INT_MAX ;
    for (int i = 1; i < position.size(); ++i) {
        minf = min(minf ,position[i]-position[i-1]);
    }
    if(m == position.size()) {
        return minf ;
    }
    int l = minf ; int h = diff; int best =l ;
    while(l<=h ){
        int mm = l+(h-l)/2 ;
        if(f(mm , position, m)){
            best = mm ;
            l=mm+1;
        }else{
            h = mm-1 ;
        }
    }
    return best ;
}