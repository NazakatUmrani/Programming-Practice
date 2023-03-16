// Write a program to convert Centigrade degrees temperature to Fahrenheit.
// F = (9/5*(c))
// NOT COMPLETED


#include <iostream>
using namespace std;
int main(){
    int choice, f, c;

    cout<<"1 --for centigrade to fahrenheit"<<"\n2 --for fahrenheit to centigrade\n";
    cin>>choice;
    if (choice == 1)
    {
        cout<<"Enter temprature in centigrade: ";
        cin>>c;
        f = (9*c+(32*5))/5;
        cout<<c<<" Centigrades are equal to "<<f<<" Farhenheit";
    }
    else
    {
        cout<<"Enter temprature in farhenheit: ";
        cin>>f;
        c = (5*(f-32))/9;
        cout<<f<<" Farhenheit are equal to "<<c<<" Centigrades";
    }   
}