#include <iostream>
#include <vector>

using namespace std ;

vector<int> plusOne(vector<int>& digits) {
    if(digits[digits.size()-1]<9){
        digits[digits.size()-1]++;
        return digits;
    }
    for (int i = digits.size()-1; i >= 0; --i) {
        if(digits[i]==9){
            digits[i]=0;
        }else{
            digits[i]++;
            return digits;
        }
    }
    digits[0]++;
    digits.push_back(0);
    return digits;
}
void main(){
//    vector<int> nums = {9} ;
//    vector<int> nums = {1,2,3} ;
    vector<int> nums = {8,9,9,9} ;
    vector<int>a = plusOne(nums);
    for (int i = 0; i <a.size() ; ++i) {
        cout << a[i]<< "," ;
    }
    return 0 ;
}