#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include <set>
#include <algorithm>
#include <bitset>
using namespace std ;

void dfs(vector<vector<int>> &graph, int i, int j, vector<vector<int>> &ans, vector<bool> &vis) {
    vis[j] = true;
    for (auto &x : graph[j]) {
        if (!vis[x]) {
            ans[x].push_back(i);
            dfs(graph, i, x, ans, vis);
        }
    }
}

vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
    vector<vector<int>>graph(n) , ans(n);
    for(auto v : edges){
        graph[v[0]].push_back(v[1]);
    }
    for (int i = 0; i < n ; ++i) {
        vector<bool>vis(n);
        dfs(graph , i , i , ans ,vis);
    }
    return ans ;
}

//vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
//    vector<set<int>> ans(n);
//    int s = edges.size();
//    for (int i = 0; i < s; ++i) {
//        ans[edges[i][1]].insert(edges[i][0]);
//    }
//
//    for (int i = 0; i < n; ++i) { // for each node i
//        for (auto it1 = ans[i].begin(); it1 != ans[i].end(); ++it1) { // for each element in the set ans[i]
//            set<int> temp = ans[*it1];
//            for (auto it2 = temp.begin(); it2 != temp.end(); ++it2) {
//                ans[i].insert(*it2); // insert the ancestors into ans[i]
//            }
//        }
//    }
//
//    vector<vector<int>> a(n);
//    for (int i = 0; i < n; ++i) {
//        a[i] = vector<int>(ans[i].begin(), ans[i].end()); // copy set to vector
//        sort(a[i].begin(), a[i].end()); // sort the vector
//    }
//
//    return a;
//}


int main(){
    vector<vector<int>>a={{5,1}, {2,3}, {5,3}, {0,2}, {3,1}, {5,2}, {4,0}};;
    getAncestors(6,a) ;
    return 0 ;
}