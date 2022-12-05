// Number of Subarrays of an array with n elements = nC2 +n = n*(n+1)/2

// Number of Subsequences of an array with n elements = pow(2,n)


#include <iostream>
using namespace std;

void subarrays(int size);
void subsequence(int size);

int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    subarrays(n);
    subsequence(n);
    return 0;
}


void subarrays(int size){
    cout<<"Number of Subarrays of an array with n elements = "<<(size*(size+1))/2<<"\n";
}
void subsequence(int size){
    cout<<"Number of Subsequences of an array with n elements = "<<size*size<<"\n";
}