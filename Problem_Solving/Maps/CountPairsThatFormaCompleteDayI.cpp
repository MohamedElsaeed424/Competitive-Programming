#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std ;

int countCompleteDayPairs(vector<int>& hours) {
    if(hours.size()==1) return 0;
    int c  =0 ;
    for (int i = 1; i < hours.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if((hours[i]+hours[j])%24 ==0 ) {
                c++;
            }
        }
    }
    return c ;
}

int main(){

    vector<int>a={72,48,24,3};
    countCompleteDayPairs(a);
    return 0 ;
}