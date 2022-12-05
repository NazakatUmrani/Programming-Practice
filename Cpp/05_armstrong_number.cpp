#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int);

int main () {
    int num;
    cout<<"Enter a number to check if it is an Armstrong number: ";
    cin>>num;
    if (isArmstrong(num))
    {
        cout<<"Yes it is an Armstrong number!"<<endl;
    }
    else{
        cout<<"No it is not an Armstrong number!"<<endl;
    }
    
    return 0;
}

bool isArmstrong(int a){
    int a_copy = a,temp;
    int b = 0;
    while(a_copy>0){
        temp = a_copy%10;
        a_copy /= 10;
        b += pow(temp,3);
    }
    if (a==b)
    {
        return true;
    }
    return false;
}
