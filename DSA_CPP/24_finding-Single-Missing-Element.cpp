#include <iostream>
using namespace std;
int main () {
    //First Way Sorted
    cout<<"First Way\n";
    int sum=0;
    int array[11]={1,2,3,4,5,6,8,9,10,11,12};
    for(int a:array){
        sum+=a;
    }
    int n =12;
    int sumOfN = n*(n+1)/2;
    cout << "Missing Element is "<<sumOfN-sum<<endl;


    //Second way Sorted
    cout<<"Second Way\n";
    int array1[11]={6,7,8,9,10,11,13,14,15,16,17};
    int diff = array1[0]-0;
    for(int i=0; i<11;i++){
        if(array1[i]-i!=diff){
            cout<<"Missing Element is "<<i+diff<<endl;
            break;
        }
    }
    return 0;
}