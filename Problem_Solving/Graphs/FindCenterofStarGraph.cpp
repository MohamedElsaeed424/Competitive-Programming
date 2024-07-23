#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include <algorithm>
#include <bitset>
using namespace std ;

// check for the first two edges and take common node
int findCenter2(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
            return edges[0][0];
        } else {
            return edges[0][1];
        }
    }

int findCenter(vector<vector<int>>& edges) {
    unordered_map<int,int>m ;

    for (int i = 0; i < edges.size() ; ++i) {
        m[edges[i][0]]++;
        m[edges[i][1]]++;
    }
    int node =-1 ;
    int edge =0 ;
    for(auto&p : m){
        if(p.second > edge ){
            edge = p.second ;
            node = p.first ;
        }
    }
    return node ;
}

int main(){
    vector<vector<int>>a={{1,2},{2,3},{4,2}};
    findCenter(a);

    return 0 ;
}