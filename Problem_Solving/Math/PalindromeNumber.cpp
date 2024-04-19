#include <iostream>
#include <limits>
#include <cmath>

using namespace std ;

bool isPalindrome(int x) {
    if (x < 0) return false;
    int z =x ;
    int y =0 ;
    while (x!=0){
        y = y*10+ x%10;
        x=x/10 ;
    }
    return y == z ;
}

int main(){
    cout << isPalindrome(1534236469);
    return 0 ;
}