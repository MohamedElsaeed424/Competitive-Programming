#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std ;

bool isVowel(char s){
    return s=='a'||s=='A'||s=='e'||s=='E'||s=='i'||s=='I'||s=='o'||s=='O'||s=='u'||s=='U';
}
string reverseVowels(string s) {
    int i =0 ; int j =s.size()-1 ;
    while(i<j){
        if(isVowel(s[i])){
            if(isVowel(s[j])){
                char tmp = s[i];
                s[i] =s[j];
                s[j]=tmp ;
                i++;j--;
            }else j--;
        }else i++;
    }
    return s ;
}