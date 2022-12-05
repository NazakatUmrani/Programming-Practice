#include <iostream>
using namespace std;
long long int fact(int);
double nCr(int, int);

int main () {
    cout<<"The combination Formula Calculator (nCr)\n";
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    long long int ans = nCr(n,r);
    cout<<n<<"C"<<r<<" = "<<ans;
    
    return 0;
}

double nCr(int n, int r){

    return fact(n)/(fact(r)*fact(n-r));
}

long long int fact(int n){
    long long int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}