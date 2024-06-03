#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std ;

int appendCharacters(string s, string t) {
    int i =0 ; int j =0 ;
    while (i<s.size()){
        if(s[i]!=t[j])i++;
        else {i++ ;j++;}
    }
    return t.size()-j ;
}