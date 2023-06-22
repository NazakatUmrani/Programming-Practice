#include <iostream>
using namespace std;
int main () {
    //First Way Sorted
    cout<<"First Way\n";
    int array1[10]={3,6,8,10,12,15,15,15,20};
    int lastDuplicate = -1;
    for(int i=0; i<10;i++){
        if(array1[i]==array1[i+1] && array1[i]!=lastDuplicate){
            cout<<array1[i]<<" is Duplicate\n";
            i++;
            lastDuplicate=array1[i];
        }
    }

    //Second way using Hash table Sorted
    cout<<"Second way\n";
    int array[10]= {3,6,8,8,10,12,15,15,15,20};
    for(int i=0; i<10; i++){
        if(array[i]==array[i+1]){
            int j=i+1;
            while(array[i]==array[j])j++;
            cout<<array[i]<<" is appearing "<<j-i<<" times\n";
            i=j-1;
        }
    }

    //Third Method Not Sorted
    cout<<"Third Way\n";
    int array2[10]={3,6,8,8,10,13,15,15,15,20};
    int hashTable[16]={0};
    for(int a:array2){
        hashTable[a]++;
    }
    for(int i=0; i<16; i++){
        if(hashTable[i]>1){
            cout<<i<<" is appearing "<<hashTable[i]<<" times\n";
        }
    }

    //Fourth method not sorted
    cout<<"Fourth way\n";
    int array3[10]={8,3,6,4,6,5,6,8,2,7};
    for(int i=0;i<9;i++){
        int count=1;
        if(array3[i]!=-1){
            for(int j=i+1;j<10;j++)
                if(array3[i]==array3[j]){
                    count++;
                    array3[j]=-1;
                }
            if(count>1){
                cout<<array3[i]<<" is appearing "<<count<<" times\n";
            }
        }
    }
    return 0;
}