#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);

int main () {
    int number,prime1 = 0,prime2 = 0;
    cout<<"Enter a number to find closest prime number to it: ";
    cin>>number;
        for (int i = 1; i > 0; i++)
        {
            prime1 = isPrime(number+i);
            if (prime1)
            {
                prime1 = number+i;
            }
            prime2 = isPrime(number-i);
            if (prime2)
            {
                prime2 = number-i;
            }
            if (prime1 > 0 || prime2 > 0)
            {
                break;
            }
        }
    if (prime1>0)
    {
        cout<<"Closest prime number greater than "<<number<<" is "<<prime1<<endl;
    }
    if (prime2>0)
    {
        cout<<"Closest prime number less than "<<number<<" is "<<prime2<<endl;
    }
    return 0;
}



bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;    
}