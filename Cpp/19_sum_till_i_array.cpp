#include <iostream>
using namespace std;

void sumTillI(int a[], int size){
    int sum=0;
    cout<<"Sum till 'i': {";
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
        cout<<sum;
        if (i==size-1)
        {
            break;
        }
        cout<<", ";
    }
    cout<<"}";
}


int main(){
    int n;
    cout<<"Enter length of array: ";
    cin>>n;

    int array[n];
    cout<<"Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    sumTillI(array,n);
    return 0;
}