#include <iostream>
using namespace std;

void insertionSort(int a[], int size){
   for (int i = 1; i < size; i++)
   {
       int current = a[i];
       int j = i-1;
       while (a[j]>current && j>=0)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=current;
   }
   
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
    
    insertionSort(array,n);
    
    cout<<"Sorted Array: {";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i];
        if (i==n-1)
        {
            break;
        }
        cout<<", ";
    }
    cout<<"}";
    return 0;
}