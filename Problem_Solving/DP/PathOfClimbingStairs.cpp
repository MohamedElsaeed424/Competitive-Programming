// still not solved
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std ;
vector<int> pathOfClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    vector<int> res(n + 1); // Initialize res array with size n + 1
    res[0] = 0;
    res[1] = cost[0];
    vector<int> path(n + 1, 0); // Initialize path array with size n + 1
    for (int i = 2; i <= n; ++i) {
        res[i] = cost[i - 1] + min(res[i - 1], res[i - 2]);
        // Store the optimal path at each step
        path[i] = (res[i - 1] < res[i - 2]) ? (i - 1) : (i - 2);
    }
    vector<int> climbingPath;
    int idx = n;
    while (idx > 0) {
        climbingPath.push_back(idx);
        idx = path[idx];
    }
    reverse(climbingPath.begin() , climbingPath.end());
    return climbingPath ;
}

void main(){
//    vector<int>a = {10,15,20} ;
//    vector<int>a = {1,100,1,1,1,100,1,1,100,1} ;
//    vector<int>a = {0,3,2,4};
    vector<int>a = {3,2,4,6,1,1,5,3};
    vector <int> b =pathOfClimbingStairs(a);
    for (int i = 0; i <b.size() ; ++i) {
        cout << b[i] << ',' ;
    }
    return 0 ;
}