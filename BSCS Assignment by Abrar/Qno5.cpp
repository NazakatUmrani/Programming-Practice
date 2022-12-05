// Write a program to check weather the number is divisible by 5 or not

#include <iostream>
using namespace std;
int main()
{
    int user_defined_number, is_divisible;

    cout<<"Enter a number to check if it is divisible by 5 or not: ";
    cin>>user_defined_number;

    is_divisible = user_defined_number % 5;
    
    if (is_divisible == 0)
    {
        cout<<"Yes it is divisible by 5";
    }
    else
    {
        cout<<"no it is not divisible by 5";
    }
    
    return 0;
}
