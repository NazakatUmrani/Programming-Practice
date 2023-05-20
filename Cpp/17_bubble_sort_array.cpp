#include <iostream>
using namespace std;

void bubbleSort(int a[], int size){ //6
    int i = size;
    while(i>1){        
        for (int j = 0; j < i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        i--;
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
    
    bubbleSort(array,n);
    
    cout<<"Sorted Array: {";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i];
        cout<<", ";
    }
    cout<<"\b\b}";
    return 0;
}