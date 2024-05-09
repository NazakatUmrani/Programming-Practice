#include <iostream>
#include "47_Stack.cpp"
using namespace std;

int pre(char x){
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}
 
int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

string InfixToPostfix(string infix){
    int i=0,size=infix.length();
    string postfix="";
    Stack<char> st;
    while(infix[i]!='\0'){
        if(isOperand(infix[i]))
            postfix+=infix[i++];
        else{
            if(st.Top==nullptr)
                st.push(infix[i++]);
            else if(pre(infix[i])>pre(st.Top->data))
                st.push(infix[i++]);
            else{
                postfix+=st.top();
                st.pop();
            }
        }
    }
    while(st.Top!=NULL){
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}

int main() {
    string infix="a+b*c-d/e";
    
    string postfix=InfixToPostfix(infix);
    cout<<postfix<<endl;
    return 0;
}