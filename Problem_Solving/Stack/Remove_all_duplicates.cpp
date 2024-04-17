#include <iostream>
#include <stack>

using namespace std ;

void manageStack(stack<char>&stack){
    char c1 = stack.top(); stack.pop();
    char c2 = stack.top();
    if (c1 == c2){
        stack.pop();
    }else{
        stack.push(c1);
    }
}
string removeDuplicates(string s) {
    stack<char>stack ;
    string res = "";
    stack.push(s[0]);
    for(int i =1 ; i<s.size();i++){
        if(!stack.empty() &&stack.top() == s[i]){
            stack.pop();
        }else
            stack.push(s[i]);
    }

    while(!stack.empty()){
        res = stack.top()+res ;
        stack.pop();
    }
    return res;
}

int main(){
    string s = "azxxzy" ;
    cout << removeDuplicates(s);
    return 0 ;
}
