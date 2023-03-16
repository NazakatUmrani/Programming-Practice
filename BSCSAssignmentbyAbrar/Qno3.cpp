// Write a program to calculate the volume of a cylinder given its radius and height.
// volume = pie * (radius * radius) * height

#include <iostream>
using namespace std;
int main(){
    float radius, height, volume, pie = 3.14;

    cout<<"Enter radius of cylinder: ";
    cin>>radius;

    cout<<"Enter height of cylinder: ";
    cin>>height;

    volume = pie * (radius * radius) * height;

    cout<<"The calculated volume of cylinder is "<<volume;
}