#include <iostream>
#include <stack>

using namespace std ;
bool isValid (string s){
    stack<char>stack1 ;
    for(char i : s){
        if( (i == '(') || (i == '[')||(i == '{') ){
            stack1.push(i) ;
        }else if ( (( i == ')' ) && !stack1.empty() && (stack1.top() == '(') ) ||
                   (( i == ']' ) && !stack1.empty() && (stack1.top() == '[') )  ||
                   (( i == '}' ) && !stack1.empty() && (stack1.top() == '{')  )) {
                stack1.pop();
        }else{
            return false ;
        }
    }
    return stack1.empty()  ;
}

int main(){
    string w;
    cin >> w ;
    while (isValid(w)){
        cin >> w ;
    }
    cout << isValid(w);
    return 0;
}

