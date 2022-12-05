#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int);

int main () {
    int number,armstrong1 = 0,armstrong2 = 0;
    cout<<"Enter a number to find closest armstrong number to it: ";
    cin>>number;
        for (int i = 1; i > 0; i++)
        {
            armstrong1 = isArmstrong(number+i);
            if (armstrong1)
            {
                armstrong1 = number+i;
            }
            armstrong2 = isArmstrong(number-i);
            if (armstrong2)
            {
                armstrong2 = number-i;
            }
            if (armstrong1 > 0 || armstrong2 > 0)
            {
                break;
            }
        }
    if (armstrong1>0)
    {
        cout<<"Closest armstrong number greater than "<<number<<" is "<<armstrong1<<endl;
    }
    if (armstrong2>0)
    {
        cout<<"Closest armstrong number less than "<<number<<" is "<<armstrong2<<endl;
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