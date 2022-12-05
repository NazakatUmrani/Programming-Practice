#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int k){
    int startPoint = 0;
    int endPoint = size;
    while (startPoint <= endPoint)
    {
        int mid = (startPoint+endPoint)/2;
        if(a[mid] == k){
            return mid;
        }
        else if (a[mid] > k)
        {
            endPoint = mid-1;
        }
        else
        {
            startPoint = mid+1;
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
    
    int index = binarySearch(array,n,key);
    
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