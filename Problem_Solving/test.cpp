#include <string>
#include <map>
#include <iostream>
using namespace std ;
map<char, int> charPositions(const string& s) {
    map<char, int> charMap;
    for (int i = 0; i < s.size(); ++i) {
        charMap[s[i]] = i;
    }
    return charMap;
}

int main() {
    string s = "example";
    map<char, int> charMap = charPositions(s);

    // Print characters along with their positions
    for (auto it = charMap.begin(); it != charMap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}