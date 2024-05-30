#include <string>
#include <iostream>
#include <unordered_set>
using namespace std ;


int numberOfSpecialChars(string word) {
    unordered_set<char> set ; unordered_set<char>bset ; int count =0 ;
    for(char c : word){
        if(c >= 97 && c <= 122) set.insert(c);
        else bset.insert(c);
    }
    for (char c : set) {
        char adjustedChar = c - 32;
        if (bset.find(adjustedChar) != bset.end()) {
            count++;
        }
    }
    return count;
}

int main(){
    cout << numberOfSpecialChars("aaAbcBC");
    return 0 ;
}