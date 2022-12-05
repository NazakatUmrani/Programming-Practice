#include <iostream>
using namespace std;

void maxTillI(int a[], int size){
    int mx=INT_MIN;
    cout<<"Max till 'i': {";
    for (int i = 0; i < size; i++)
    {
        mx = max(a[i],mx);
        cout<<mx;
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
    maxTillI(array,n);
    return 0;
}