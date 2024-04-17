#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>

using namespace std ;

int sumSquares(int n){
    int res =0 ;
    while (n!=0){
        int digit = n%10 ;
        res += (digit*digit) ;
        n = n/10 ;
    }
    return res;
}

bool isHappy(int n) {
    while(true){
        set<int>set ;
        if(n ==1){
            return true ;
        }else if (set.find(n) != set.end()){
            return false ;
        }else{
            set.insert(n);
        }
        n = sumSquares(n);
    }
}

int main(){
    int x = 2;
    cout << isHappy(x);
    return 0 ;
}