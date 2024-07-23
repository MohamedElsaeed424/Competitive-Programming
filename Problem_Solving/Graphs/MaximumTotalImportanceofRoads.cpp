#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <fstream>
#include <algorithm>
#include <bitset>
using namespace std ;


long long maximumImportance(int n, vector<vector<int>>& roads) {
    map<int,pair<int,int>>m ; // <node , {#edges , assignedNum}>
    for (int i = 0; i < roads.size() ; ++i) {
        m[roads[i][0]].first++;
        m[roads[i][1]].first++;
    }
    vector<pair<int, pair<int, int>>> nodes(m.begin(), m.end());

    sort(nodes.begin(), nodes.end(), [](const auto& a, const auto& b) {
        return a.second.first > b.second.first;
    });
    for (int i = 0; i < nodes.size(); ++i) {
        nodes[i].second.second = n; n--;
    }
    unordered_map<int,pair<int,int>>mm(nodes.begin(),nodes.end()) ;

    long long sum =0 ;

    for (int i = 0; i < roads.size(); ++i) {
        sum+= mm[roads[i][0]].second + mm[roads[i][1]].second ;
    }
    return sum ;

}

int main(){
    vector<vector<int>>a = {{0,1},{1,2},{2,3},{0,2},{1,3},{2,4}};
    maximumImportance(5,a);
    return 0 ;
}