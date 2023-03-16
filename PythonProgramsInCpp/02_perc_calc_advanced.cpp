#include <iostream>
using namespace std;

int main()
{
    float math, calculus, islamiat, physics, programming, marks;
    float obt_m, perc;

    cout<<"Enter marks you got in Math: ";
    cin>>marks;
    while (marks > 100 && marks < 0)
    {
        cout<<"Marks exceed the limit\nRe-Enter Marks: ";
        cin>>marks;
    }
    math = marks;
    
    cout<<"Enter marks you got in Calculus: ";
    cin>>marks;
    while (marks > 100 && marks < 0)
    {
        cout<<"Marks exceed the limit\nRe-Enter Marks: ";
        cin>>marks;
    }
    calculus = marks;

    cout<<"Enter marks you got in Islamiat: ";
    cin>>marks;
    while (marks > 100 && marks < 0)
    {
        cout<<"Marks exceed the limit\nRe-Enter Marks: ";
        cin>>marks;
    }
    islamiat = marks;

    cout<<"Enter marks you got in Physics: ";
    cin>>marks;
    while (marks > 100 && marks < 0)
    {
        cout<<"Marks exceed the limit\nRe-Enter Marks: ";
        cin>>marks;
    }
    physics = marks;

    cout<<"Enter marks you got in Programming: ";
    cin>>marks;
    while (marks > 100 && marks < 0)
    {
        cout<<"Marks exceed the limit\nRe-Enter Marks: ";
        cin>>marks;
    }
    programming = marks;

    obt_m = math + islamiat+ calculus + physics + programming;
    perc = obt_m/500*100;




    return 0;
}
