#include <iostream>
using namespace std;
long long int fact(int);
int main () {
    int number;
    cout<<"Enter a number to find Factorials from 0 to that number: ";
    cin>>number;
    for (int k = 1; k <= number; k++)
    {
        cout<<k<<"\t=\t"<<fact(k)<<"\n";
    }
    return 0;
}

long long int fact(int n){
    long long int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}