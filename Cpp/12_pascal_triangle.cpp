#include <iostream>
using namespace std;
long long int fact(int);
double nCr(int, int);

int main () {
    cout<<"Pascal Triangle Generator\n";
    int r;
    cout<<"Enter number of rows you want: ";
    cin>>r;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }    
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