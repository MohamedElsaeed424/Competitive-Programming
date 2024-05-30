#include <string>
#include <bitset>

using namespace std ;

int hammingWeight(int n) {
    bitset<32>binary(n);
    string s =binary.to_string(); int c =0 ;
    for(char ss :s ){
        if(ss == '1')c++;
    }
    return c ;
}