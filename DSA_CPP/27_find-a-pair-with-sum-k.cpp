#include <iostream>
using namespace std;
int main () {
    int k=10;

    //First Way
    cout<<"First Way\n";
    int array[10]={6,3,8,10,16,7,5,2,9,14};
    for(int i=0; i<9; i++){
        if(array[i]<=10)
            for(int j=i+1; j<10; j++){
                if(array[i]+array[j]==k){
                    printf("(%d,%d)\n",array[i],array[j]);
                }
            }
    }
    
    //Second Way
    cout<<"Second Way\n";
    int array1[10]={6,3,8,10,16,7,5,2,9,14};
    int hashTable[17] = {0};
    for(int i=0; i<10; i++){
        if(hashTable[k-array1[i]] != 0 && k-array1[i] > -1){
            printf("(%d,%d)\n",k-array1[i],array[i]);
        }
        hashTable[array1[i]]++;
    }

    //Third Way
    cout<<"Third Way\n";
    int array2[10]={1,3,4,5,6,8,9,10,12,14};
    int i=0, j=9;
    while(i<j){
        if(array2[i]+array2[j]==k){
            printf("(%d,%d)\n",array2[i],array2[j]);
            i++;
            j--;
        }
        else if(array2[i]+array2[j]>k)
            j--;
        else
            i++;
    }
    return 0;
}