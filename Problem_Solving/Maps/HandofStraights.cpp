#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>
#include <unordered_set>
#include <iostream>
using namespace std ;

bool isNStraightHand(vector<int>& hand, int groupSize) {
    map<int,int>m ;
    for(int i : hand) m[i]++;
    for(auto it=m.begin();it!=m.end();){
        if(it->second >0){
            for(int i =0 ; i<groupSize ;i++){
                if(m[it->first+i]<=0)
                    return false;
                m[it->first+i]--;
            }
        }else{
            it++;
        }
    }

    return true ;
}