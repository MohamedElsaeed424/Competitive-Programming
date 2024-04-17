// still not solved
#include <iostream>
#include <vector>
using namespace std ;

vector<int> pathOfClimbingStairs(vector<int>& cost) {
    int n =cost.size();
    vector<int>res ;
    vector<int>recordedPath ;
    vector<int>path ;
    res.push_back(0);
    res.push_back(cost[0]);
    for(int i = 2 ; i <= n ; ++i){
        res.push_back(cost[i-1]+ min(res[i-1] , res[i-2])) ;
        if(res[i-1]<res[i-2])
            recordedPath.push_back(i-1);
        else
            recordedPath.push_back(i-2);
    }
    for (int curr = n; curr >0 ; curr = recordedPath[curr]) {
        path.push_back(curr);
    }
    path.push_back(0);
    return  path;
}

int main(){
//    vector<int>a = {10,15,20} ;
//    vector<int>a = {1,100,1,1,1,100,1,1,100,1} ;
//    vector<int>a = {0,3,2,4};
    vector<int>a = {0,3,2,4,6,1,1,5,3};
    vector <int> b =pathOfClimbingStairs(a);
    for (int i = 0; i <b.size() ; ++i) {
        cout << b[i] << ',' ;
    }
    return 0 ;
}