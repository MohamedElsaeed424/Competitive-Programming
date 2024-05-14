#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>

using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
    set<pair<int,int>>rc ;
    for (int i = 0; i <matrix.size() ; ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (rc.find({i,j})==rc.end()) {
                if (matrix[i][j] == 0) {
                    rc.insert({i,j});
                }
            }
        }
    }
    if (rc.empty()) return;
    for(auto &pair : rc ){
        fill(matrix[pair.first].begin(),matrix[pair.first].end(),0);
    }
    for (auto &pair : rc) {
        for (int i = 0; i < matrix.size(); ++i) {
            matrix[i][pair.second] =0 ;
        }
    }
}
int main(){
    vector<vector<int>> a = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(a);
    return 0 ;
}