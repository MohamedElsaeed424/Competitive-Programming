#include <iostream>
#include <stack>

using namespace std ;

//bool backspaceCompare(string s, string t) {
//    stack<char>stack ;
//    // prepare the stack
//    for(int i =0 ; (i<s.size() || i<t.size()) ; i++){
//        if((i < s.size() && i<t.size()) && s[i] == '#' && t[i] == '#'){
//            stack.pop(); stack.pop();
//        }else if( (i < s.size()) && s[i] == '#'){
//
//            char c = stack.top(); stack.pop(); stack.pop();
//            stack.push(c);
//            if(i < t.size())
//                stack.push(t[i]);
//
//        }else if((i < t.size()) && t[i]== '#'){
//            if(i< s.size())
//                stack.pop();
//            else{
//                char c = stack.top(); stack.pop(); stack.pop();
//                stack.push(c);
//            }
//
//            if( i <s.size())
//                stack.push(s[i]);
//
//        }else{
//
//            if( i <s.size())
//                stack.push(s[i]);
//            if(i < t.size())
//                stack.push(t[i]);
//        }
//    }
//    // check the stack
//    if(stack.size()%2 != 0){
//        return false ;
//    }
//    while(!stack.empty()){
//        char c1 = stack.top(); stack.pop();
//        if(c1 != stack.top()){
//            return false ;
//        }else{
//            stack.pop();
//        }
//    }
//}
// two stacks
bool backspaceCompare(string s, string t) {
    stack<char>stack1 ;
    stack<char>stack2 ;
    for(int i = 0; (i<s.size() || i<t.size()) ; i++){
        if((i < s.size() && i<t.size()) && s[i] == '#' && t[i] == '#'){
            if( !stack1.empty()){
                stack1.pop();
            }
            if(!stack2.empty()){
                 stack2.pop();
            }
        }else if( (i < s.size()) && s[i] == '#'){
            if(!stack1.empty())
                stack1.pop();
            if(i < t.size())
                stack2.push(t[i]);

        }else if((i < t.size()) && t[i]== '#'){
            if(!stack2.empty())
                stack2.pop();
            if( i <s.size())
                stack1.push(s[i]);

        }else{
            if( i <s.size())
                stack1.push(s[i]);
            if(i < t.size())
                stack2.push(t[i]);
        }
    }
    if(stack1.size() != stack2.size())
        return false ;
    while (!stack1.empty()){
        if(stack1.top() != stack2.top())
            return false ;
        else{
            stack1.pop();stack2.pop();
        }
    }
    return true;
}

int main(){
    string s = "a##c", t = "#a#c" ;
    cout << backspaceCompare(s,t);
}