#include <vector>
#include <iostream>

using namespace std ;


vector<int> getRow(int rowIndex) {
    vector<vector<int>> ans ;
    vector<int> row; row.push_back(1);ans.push_back(row);row ={};
    for (int i = 1; i <= rowIndex ; ++i) {
        row.push_back(1);
        int pastnum = ans.back().size() ;
        pastnum -=2 ;
        for (int j = 0; j <= pastnum; ++j) {
            row.push_back(ans.back()[j]+ans.back()[j+1]);
        }
        row.push_back(1);ans.push_back(row);row={};
    }
    return ans.back() ;
}


void main(){
   vector<int>a = getRow(2) ;
    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << ',' ;

    return 0 ;
}