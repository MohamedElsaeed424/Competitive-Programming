#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<string> ans;
    unordered_map<char, int> minCount;
    for (char ch : words[0]) {
        minCount[ch]++;
    }
    for (int i = 1; i < words.size(); ++i) {
        unordered_map<char, int> wordCount;
        for (char ch : words[i]) {
            wordCount[ch]++;
        }
        for (auto& pair : minCount) {
            pair.second = min(pair.second, wordCount[pair.first]);
        }
    }
    for (auto& pair : minCount) {
        for (int i = 0; i < pair.second; ++i) {
            ans.push_back(string(1, pair.first));
        }
    }
    return ans;
}



int main() {
    vector<string> words = {"bella","label","roller"};
    vector<string> common = commonChars(words);

    for (const auto& ch : common) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}