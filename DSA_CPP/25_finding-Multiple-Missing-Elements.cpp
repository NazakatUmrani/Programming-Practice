#include <iostream>
using namespace std;
int main () {
    //First Way Sorted
    cout<<"First Way\n";
    int array1[11]={6,7,8,9,11,12,15,16,17,18,19};
    int diff = array1[0]-0;
    for(int i=0; i<11;i++){
        if(array1[i]-i!=diff){
            while(diff<array1[i]-i){
                cout<<"Missing Element is "<<i+diff<<endl;
                diff++;
            }
        }
    }

    //Second way using Hash table Not Sorted
    cout<<"Second way\n";
    int array[10]= {3,7,4,9,12,6,1,11,2,10};
    int hashTable[13]={0};
    for(int a:array){
        hashTable[a]++;
    }
    for(int i=0; i<12; i++){
        if(hashTable[i]==0){
            cout<<"Missing Element is "<<i<<endl;
        }
    }
    return 0;
}