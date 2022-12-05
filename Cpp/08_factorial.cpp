#include <iostream>
using namespace std;
long long int fact(int);
int main () {
    int num;
    cout<<"Enter a number to find its Factorial: ";
    cin>>num;
    long long int factorial = fact(num);
    cout<<factorial;
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