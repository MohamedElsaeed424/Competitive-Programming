#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;
int scoreOfString(string s) {
    int sum =0 ;
    for(int i =0 ; i<s.size()-1;i++){
        sum+=abs(s[i]-s[i+1]);
    }
    return sum ;
}