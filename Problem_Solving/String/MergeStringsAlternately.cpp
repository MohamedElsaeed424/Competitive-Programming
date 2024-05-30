#include <string>
#include <iostream>
using namespace std ;


string mergeAlternately(string word1, string word2) {
    if(word1.empty()) return word2 ; if(word2.empty()) return word1 ;
    string s = "";
    int i =0 ; int j =0 ;
    while(i<word1.size() || j<word2.size()) {
        if(i < word1.size()) {s+=word1[i];i++;}
        if(j < word2.size()) {s+=word2[j];j++;}
    }
    return s;
}