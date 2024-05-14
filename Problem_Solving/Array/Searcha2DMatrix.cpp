#include <iostream>
#include <vector>

using namespace std;
int binarySearch(vector<int>&matrix , int s , int e , int target){
    while (s <=e ){
        int m = s+(e-s)/2;
        if(matrix[m] == target){
            return m ;
        }else if (matrix[m] < target){
            s = m+1 ;
        }else{
            e = m-1 ;
        }
    }
    return -1 ;
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (int i = 0; i <matrix.size() ; ++i) {
        if(binarySearch(matrix[i],0,matrix[i].size()-1,target) != -1)
            return true ;
    }
    return false ;
}
// OR
bool searchMatrix2(vector<vector<int>>& matrix, int target) {
    int row=matrix.size(), column=matrix[0].size();

    int r=0, c=column-1;

    while(r < row && c >= 0){
        if(matrix[r][c] == target)
            return true;
        else if(matrix[r][c] > target)
            c--;
        else
            r++;
    }
    return false;
}

int main(){
    vector<vector<int>> n ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout << searchMatrix2(n,16);
    return 0 ;
}

