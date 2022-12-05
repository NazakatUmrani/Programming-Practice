#include <iostream>
using namespace std;
int reverse(int);

int main () {
    int num;
    cout<<"Enter a number to reverse it: ";
    cin>>num;
    cout<<"Reversed number is: "<<reverse(num)<<endl;
    return 0;
}

int reverse(int a){
    int temp = 0;
    while(a>0){
        temp = (temp*10)+(a%10);
        a /= 10;
    }
    return temp;
}
