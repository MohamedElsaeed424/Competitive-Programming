#include <iostream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <memory.h>
using namespace std ;

bool judgeSquareSum(int c) {
    int a =0 ;
    int tmp = c- pow(a,2) ;
    for(a=0 ; tmp >0 ;a++){
        if(fmod(sqrt(tmp),1.0)==0.0) return true;
        tmp = c- pow(a,2);
    }
    return false ;
}

int main(){
    judgeSquareSum(5);
    return 0 ;
}