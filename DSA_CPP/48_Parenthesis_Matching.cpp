#include <iostream>
#include "47_Stack.cpp"
#include <string>
using namespace std;

bool isBalanced(char* exp, int length){

    // Create a stack
    Stack<char> stk;
 
    // Process expression
    for (int i=0; i<length; i++){
 
        // ( found: Push to stack
        if (exp[i] == '('){
            stk.push(exp[i]);
            // ( found
        } else if (exp[i] == ')'){
            // ) and stack is empty: Unbalanced expression
            if (stk.isEmpty()){
                return false;
                // ) and stack is not empty
            } else {
                stk.pop();
            }
        }
    }
    // If stack is empty then balanced else unbalanced
    return stk.isEmpty() ? true : false;
}
 
int main() {
    char E[] = "((a+b)*(c-d))";
    cout << isBalanced(E,13) << endl;
    
    char F[] = "((a+b)*(c-d)))";
    cout << isBalanced(F,14) << endl;
    
    char G[] = "(((a+b)*(c-d))";
    cout << isBalanced(G,14) << endl;
    return 0;
    
}