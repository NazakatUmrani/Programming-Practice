#include <iostream>
using namespace std;
void sortArray(int a[], int size){
    int i = size;
    while(i>1){        
        for (int j = 0; j < i-1; j++){
            if (a[j]>a[j+1]){
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
    for (int i = 0; i < n; i++){
        cin>>array[i];
    }
    sortArray(array,n);
    int first_smallest = array[0], second_smallest = array[1], first_largest = array[n-2], second_largest = array[n-1];
    cout<<"First smallest number is: \t"<<first_smallest<<endl;
    cout<<"Second smallest number is: \t"<<second_smallest<<endl;
    cout<<"First largest number is: \t"<<first_largest<<endl;
    cout<<"Second largest number is: \t"<<second_largest<<endl;
    return 0;
    }