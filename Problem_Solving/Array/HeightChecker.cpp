#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include <algorithm>
using namespace std ;

int heightChecker(vector<int>& heights) {
    vector<int>a = heights ;
    sort(heights.begin(), heights.end());
    int count =0 ;
    for (int i = 0; i <heights.size() ; ++i) {
        if(a[i]!=heights[i])count++;
    }
    return count ;
}