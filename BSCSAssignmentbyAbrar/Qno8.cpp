// Write a program to sum the first ten natural numbers using any loop.

#include <iostream>
using namespace std;

int main()
{
    int user_input;
    int ten_natural_numbers, increment;

    cout<<"Enter a number, and we will add nine increasing natural numbers to it: ";
    cin>>user_input;

    increment = user_input+1;
    for(int i=0; i<9; i++){
        user_input += increment;
        increment++;
    }
    cout << "Result = " << user_input << endl;
    return 0;
}
