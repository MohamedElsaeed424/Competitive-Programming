#include <iostream>
#include <limits>
#include <cmath>

using namespace std ;

int reverse(int x) {
    long long res = 0 ;
    while(x!=0){
        res = res *10 +x%10;
        x=x/10;
    }
    if (res < numeric_limits<int>::min() || res > numeric_limits<int>::max())
        return 0;
    return static_cast<int>(res);
}

void main(){
    cout << reverse(1534236469);
    return 0 ;
}