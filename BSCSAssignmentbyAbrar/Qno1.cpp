// Write a program to calculate the area of a rectangle
// area = width * height

#include <iostream>
using namespace std;

int main(){
    int width, height, area;

    cout<<"Enter width of rectangle"<<endl;
    cin>>width;

    cout<<"Enter height of rectangle"<<endl;
    cin>>height;

    area = width * height;

    cout<<"Area of your desired rectangle is "<<area;
}