#include <string>
#include <bits/stdc++.h>
#include <iostream>
using namespace std ;


int lengthOfLastWord(string s) {
    vector<string>ans ;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if(word != "")
            ans.push_back(word);
    }
    return ans.back().size();
}

int main(){
    cout << lengthOfLastWord("   fly me   to   the moon  ");
    return 0 ;
}