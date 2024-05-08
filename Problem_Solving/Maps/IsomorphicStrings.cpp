// still not solved
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std ;

bool isIsomorphic(string s, string t) {
    unordered_set<char>ss ; unordered_set<char>tt ;
    for (int i = 0; i <s.size() ; ++i) {
        ss.insert(s[i]); tt.insert(t[i]);
    }
    return ss.size() ==tt.size() ;
}
