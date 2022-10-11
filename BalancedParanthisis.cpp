#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s1 = "{[()]}";
    stack<char> st;
    for(int i=0; i<s1.length(); i++){
        if(s1[i] == '{' or s1[i] == '[' or s1[i] == '('){
            st.push(s1[i]);
        }
        else if(s1[i] == ')'){
            if(!st.empty() and st.top() == '('){
                st.pop();
            }
            else{
                break;
            }
        }
        else if(s1[i] == ']'){
            if(!st.empty() and st.top() == '['){
                st.pop();
            }
            else{
                break;
            }
        }
        else if(s1[i] == '}'){
            if(!st.empty() and st.top() == '{'){
                st.pop();
            }
            else{
                break;
            }
        }
    }
    if(st.empty()){
        cout << "Balanced Paranthisis" << endl;
    }
    else{
        cout << "unbalanced Paranthisis" << endl;
    }    
}