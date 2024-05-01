#include <string>
#include <iostream>

using namespace std ;int romanToInt(string s) {
    if (s.empty())
        return 0;

    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        switch (s[i]) {
            case 'I':
                if (s[i+1] == 'V' && (i+1 < s.size())) {
                    sum += 4;
                    i += 1;
                } else if (s[i+1] == 'X' && (i+1 < s.size())) {
                    sum += 9;
                    i += 1;
                } else {
                    sum += 1;
                }
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                if (s[i+1] == 'L' && (i+1 < s.size())) {
                    sum += 40;
                    i += 1;
                } else if (s[i+1] == 'C' && (i+1 < s.size())) {
                    sum += 90;
                    i += 1;
                } else {
                    sum += 10;
                }
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                if (s[i+1] == 'D' && (i+1 < s.size())) {
                    sum += 400;
                    i += 1;
                } else if (s[i+1] == 'M' && (i+1 < s.size())) {
                    sum += 900;
                    i += 1;
                } else {
                    sum += 100;
                }
                break;
            case 'D':
                sum += 500;
                break;
            default:
                sum += 1000;
        }
    }
    return sum;
}
int main(){
    cout << romanToInt("III");
}