#include <iostream>
using namespace std;

int main(){
    int a = 9;
    // int &b; <- this is wrong way, you need to initialize it also
    int &b = a;
    cout << a << endl << b << endl;
    int  c = 7;
    b = c; //<-Reference variable can't be changed, it can be assigned, but not initialized again
    cout << a << endl << b << endl; // see how a is also changed to 7
}