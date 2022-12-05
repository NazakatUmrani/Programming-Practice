#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int);
int main () {
    int number;
    cout<<"Enter a number to find Armstrong numbers from 0 to that number: ";
    cin>>number;
    for (int k = 1; k <= number; k++)
    {
        if(isArmstrong(k)){
            cout<<k<<"\n";
        }
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