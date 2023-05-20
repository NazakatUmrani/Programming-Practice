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

    for (int i = 0; i < n; i++)
    {
        cout<<"{";
        for (int j = i; j < n; j++)
        {
            cout<<array[j];
            cout<<", ";
        }    
        cout<<"\b\b}"<<endl;
    }

    return 0;
}