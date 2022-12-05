#include <iostream>
using namespace std;

int linearSearch(int a[], int size, int k){

    for (int i = 0; i < size; i++)
    {
        if (k == a[i])
        {
            return i+1;
        }
    }

    return -1;
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
    
    int key;
    cout<<"Enter a key to find it in array: ";
    cin>>key;
    
    int index = linearSearch(array,n,key);
    
    if (index != -1)
    {
        cout<<"Key found at index: "<<index;
    }
    else
    {
        cout<<"Key not found";
    }
    
    return 0;
}