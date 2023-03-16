#include <iostream>
using namespace std;

int main()
{
    float math, isl, calc, obt_m, perc;

    cout<<"Enter the marks you got in Math subject: ";
    cin>>math;

    cout<<"Enter the marks you got in Islamiat subject: ";
    cin>>isl;

    cout<<"Enter the marks you got in calculus subject: ";
    cin>>calc;

    obt_m = math + isl + calc;
    perc = (obt_m/300) * 100;

    if (perc >= 50)
    {
        cout<<"Congratulations you passed, you percentage is "<<perc<<"%";
    }
    else
    {
        cout<<"sorry to tell you that you are fail, better luck next time";
    }
        

    return 0;
}