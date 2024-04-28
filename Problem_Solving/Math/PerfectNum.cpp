#include <iostream>


bool checkPerfectNumber(int num) {
    int sum =1 ;
    for (int i = 2; i < num ; ++i) {
        if (num%i ==0)
            sum += i ;
    }
    return sum !=1 && sum == num ;
}