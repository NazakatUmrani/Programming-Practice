#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int);
int main () {
    int number;
    cout<<"Enter a number to find prime numbers from 0 to that number: ";
    cin>>number;
    for (int k = 1; k <= number; k++)
    {
        if(isPrime(k)){
            cout<<k<<"\n";
        }
    }
    return 0;
}


bool isPrime(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}