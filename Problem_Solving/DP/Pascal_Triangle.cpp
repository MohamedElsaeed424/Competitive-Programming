#include <vector>
#include <iostream>

using namespace std ;


vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans ;
    vector<int> row; row.push_back(1);ans.push_back(row);row ={};
    for (int i = 1; i < numRows ; ++i) {
        row.push_back(1);
        int pastnum = ans.back().size() ;
        pastnum -=2 ;
        for (int j = 0; j <= pastnum; ++j) {
            row.push_back(ans.back()[j]+ans.back()[j+1]);
        }
        row.push_back(1);ans.push_back(row);row={};
    }
    return ans ;
}


void main(){
    vector<vector<int>>a = generate(5) ;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j <a[i].size() ; ++j) {
            cout << a[i][j] << ',';
        }
        cout << endl;
    }
    return 0 ;
}