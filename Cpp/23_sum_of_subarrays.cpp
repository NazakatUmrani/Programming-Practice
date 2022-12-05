#include <iostream>
using namespace std;

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
    int size = (n*(n+1))/2;
    int sum,k=0;
    int sum_subarray[size];
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += array[j];
            sum_subarray[k]=sum;
            k++;
        }    
    }

    cout<<"Sum of Subarrays: {";
    for (int i = 0; i < size; i++)
    {
        cout<<sum_subarray[i];
        if (i==size-1)
        {
            break;
        }
        cout<<", ";
    }
    cout<<"}";
    return 0;
}