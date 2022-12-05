#include <iostream>
#include <cmath>
using namespace std;
void isPrime_updated(int);
void isPrime_old(int);
int main () {
    
    int number;
    cout<<"Enter a number to find if it's a prime number or not: ";
    cin>>number;
    cout<<"\nOld Function Result: ";
    isPrime_old(number);
    cout<<"\n\n";
    cout<<"Updated Function Result: ";
    isPrime_updated(number);
    cout<<endl;
    return 0;
}

void isPrime_old(int n){
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        cout<<"Yes it's a prime number.";
    }
    else
    {
        cout<<"No it's not a prime number.";
    }
}


void isPrime_updated(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"No it's not a prime number.";
            return;
        }
    }
    cout<<"Yes it's a prime number.";
    return;
}