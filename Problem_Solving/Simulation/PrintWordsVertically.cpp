#include <string>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<string> printVertically(string s) {
    vector<string> v;
    vector<string> d;
    int maxsize = 0;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        v.push_back(word);
        if (word.size() > maxsize)
            maxsize = word.size();
    }
    for (int j = 0; j < maxsize; ++j) {
        string verticalString;
        for (int i = 0; i < v.size(); ++i) {
            if (j < v[i].size()) {
                verticalString += v[i][j];
            } else {
                verticalString += ' ';
            }
        }
        size_t lastNonSpace = verticalString.find_last_not_of(" \t\n\r");
        if (lastNonSpace != string::npos) {
            d.push_back(verticalString.substr(0, lastNonSpace + 1));
        } else {
            d.push_back("");
        }
    }
    return d;
}
void main(){
    vector<string>v = printVertically("TO BE OR NOT TO BE");
    for (int i = 0; i <v.size() ; ++i) {
        cout << v[i] << ',';
    }
    return 0 ;
}