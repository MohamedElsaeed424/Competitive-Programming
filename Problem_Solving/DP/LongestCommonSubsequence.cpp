#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <fstream>
using namespace std ;

int longestCommonSubsequence(string text1, string text2) {
    vector<char>t1(26,0);
    vector<char>t2(26,0);
    for(int i =0 ; i<text2.size() || i<text1.size();i++){
        if(i<text1.size()){
            t1['a'-text1[i]]=1;
        }
        if(i<text2.size()){
            t2['a'-text2[i]]=1;
        }
    }

}

int main(){

    return 0 ;
}