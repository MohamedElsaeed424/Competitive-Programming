#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

// check string is num
bool isNumberIstringstream(string& str) {
    istringstream iss(str);
    int val;
    iss >> val;
    return iss.eof() && !iss.fail();
}

int calPoints(vector<string>& operations) {
    int res =0 ;
    stack<int>score ;
    for(string i :operations ){
        if (i == "C"){
            score.pop();
        }else if (i == "D"){
            score.push(2*score.top());
        }else if(i == "+"){
            int old1 = score.top();
            score.pop();
            int old2 = score.top();
            score.push(old1);
            score.push((old1+old2));
        }else{
            int num = stoi(i);
            score.push(num);
        }
    }
    while(!score.empty()){
        res += score.top();
        score.pop();
    }
    return res ;
}

int main(){
    vector<string>ops = {"5","2","C","D","+"};
//    vector<string>ops = {"5","-2","4","C","D","9","+","+"};

    cout << calPoints(ops);
    return 0 ;
}