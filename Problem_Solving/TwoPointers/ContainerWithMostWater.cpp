#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std ;

int maxArea(vector<int>& height) {
    int s =0 ; int e = height.size()-1 ; int max = 0 ;
    while(s<e){
        int n = min(height[s],height[e])*(e-s);
        if(n>max) max = n;
        if(height[s]<height[e]) s++;
        else if(height[s]>height[e]) e--;
        else {s++;e--;}
    }
    return max ;
}

int main(){
    vector<int>a={1,8,6,2,5,4,8,3,7};
    maxArea(a);
    return 0 ;
}