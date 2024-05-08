#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a < 0 || b < 0)
        return 0;
    int num = a < b ? a : b;
    while(num > 0){
        if(a%num == 0 && b%num == 0){
            return num;
        }
        num--;
    }
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main () {
    int num1,num2,num3;
    cin >> num1 >> num2 >> num3;
    cout << "LCM: " << lcm(lcm(num1,num2),num3) << endl;
    return 0;
}