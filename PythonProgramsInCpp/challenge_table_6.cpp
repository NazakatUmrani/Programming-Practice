#include  <iostream>
using namespace std;
int main()
{
    int  num, multiply = 1, result;
    
    cout<<"Enter a number and we will generate table of that number for you: ";
    cin>>num;

    while (multiply<=10)
    {
        result = num*multiply;
        cout<<num<<" x "<<multiply<<" = "<<result<<endl;
        multiply++;    
    }
    
    return 0;
}
