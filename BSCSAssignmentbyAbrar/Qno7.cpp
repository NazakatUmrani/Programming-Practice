// Write a program to find the greatest of four numbers entered by the user

#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d;
    double greatest_number = 0;

    cout<<"Enter first number:"<<endl;
    cin>>a;
    if ( a > greatest_number )
    {
        greatest_number = a;
    }
    
    cout<<"Enter second number:"<<endl;
    cin>>b;
    if ( b > greatest_number )
    {
        greatest_number = b;
    }
    
    cout<<"Enter third number:"<<endl;
    cin>>c;
    if ( c > greatest_number )
    {
        greatest_number = c;
    }

    cout<<"Enter fourth number:"<<endl;
    cin>>d;
    if ( d > greatest_number )
    {
        greatest_number = d;
    }

    cout<<"Greatest number you entered is "<<greatest_number;
    
    return 0;
}
