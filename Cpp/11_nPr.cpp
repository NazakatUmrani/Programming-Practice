#include <iostream>
using namespace std;
long long int fact(int);
double nPr(int, int);

int main () {
    cout<<"The Permutation Formula Calculator (nPr)\n";
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    long long int ans = nPr(n,r);
    cout<<n<<"P"<<r<<" = "<<ans;
    
    return 0;
}

double nPr(int n, int r){

    return fact(n)/fact(n-r);
}

long long int fact(int n){
    long long int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}