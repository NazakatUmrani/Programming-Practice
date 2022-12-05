#include <iostream>
using namespace std;

void selectionSort(int a[], int size){
    for(int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++)
        {
            if (a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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
    
    selectionSort(array,n);
    
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