#include <iostream>
#include <climits>
using namespace std;
int main () {
    int array[10]={5,8,3,9,6,2,10,7,-1,4};
    int max=INT_MIN,min=INT_MAX;
    for(int a: array){
        if(max<a)
            max=a;
        else if(min>a)
            min=a;
    }
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
    return 0;
}