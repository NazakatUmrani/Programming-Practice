#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char c;
    cout << "Enter a number: ";
    cin>> a;
    cout << "Enter a operator (- + * /: ";
    cin>> c;
    cout << "Enter second number: ";
    cin>> b;
    if(c=='+'){
        cout << "Result is: "<<a+b << endl;
    }
    else if(c == '-'){
        cout << "Result is: "<<a-b << endl;
    }
    else if(c == '*'){
        cout << "Result is: "<<a*b << endl;
    }
    else if(c == '/'){
        cout << "Result is: "<<a/b << endl;
    }
    else{
        cout << "Invalid operator!"<<endl;
    }
    return 0;
}
