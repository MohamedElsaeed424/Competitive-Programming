#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std ;
string substring(const std::string& str, std::size_t start, std::size_t end) {
    if (start > end || start >= str.size() || end >= str.size()) {
        return ""; // Return an empty string if the range is invalid
    }
    return str.substr(start, end - start + 1);
}
bool wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> ss(wordDict.begin(), wordDict.end());
    vector<bool> dp(s.size() + 1, false);
    dp[0] = true;

    for (int i = 1; i <= s.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            string tmp = substring(s, j, i - 1);
            if (dp[j] && ss.find(tmp) != ss.end()) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[s.size()];
}

int main(){
    vector<string>a = {"aaaa","aaa"};
    string s= "aaaaaaa";
    wordBreak(s,a);
    return 0 ;
}