#include <iostream>
using namespace std;
int main () {
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element at index ["<<i<<"]: ";
        cin>>array[i];
    }
    int maxNo = array[0], minNo = array[0];

    for (int j = 1; j < size; j++)
    {
        if (maxNo<array[j])
        {
            maxNo = array[j];
        }
        if (minNo>array[j])
        {
            minNo = array[j];
        }      
    }
    cout<<"Maximum number in array is "<<maxNo<<endl;
    cout<<"Minimum number in array is "<<minNo<<endl;
    return 0;
}