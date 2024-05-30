#include <string>
#include <iostream>
#include <unordered_map>
using namespace std ;


int numberOfSpecialChars(string word) {
    unordered_map<char ,int> map ; unordered_map<char,int>bmap ; int count =0 ;
    for (int i = 0; i <word.size() ; ++i) {
        if(word[i]>= 97 && word[i]<= 122) map[word[i]]=i;
        else bmap[word[i]]=i;
    }
    for(auto pair  : map){
        char adjustedChar = pair.first- 32;
        if (bmap.find(adjustedChar) != bmap.end() && pair.second < bmap[adjustedChar]) {
            count++;
        }
    }
    return count;
}

int main(){
    cout << numberOfSpecialChars("aaAbcBC");
    return 0 ;
}