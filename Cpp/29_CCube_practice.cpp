#include <iostream>
using namespace std;

int sum_from_to(int a, int b){
    int sum = 0;
    int low, high;
    if(a < b){
        low = a;
        high = b;
    } else {
        low = b;
        high = a;
    }
    while(low <= high){
        sum += low;
        low++;
    }
    return sum;
}

int enough(int goal){
    int sum = 0;
    int i=1;
    while(true){
        sum += i;
        if(sum >= goal){
            return i;
        }
        i++;
    }
}

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

int main(){

    // cout << sum_from_to(4,7) << endl; // will print 22 because 4+5+6+7 = 22 
    // cout << sum_from_to(-3,1) << endl; // will print -5 'cause (-3)+(-2)+(-1)+0+1 = -5 
    // cout << sum_from_to(7,4) << endl; // will print 22 because 7+6+5+4 = 22 
    // cout << sum_from_to(9,9) << endl; // will print 9
//     cout << enough(9) << endl; // will print 4 because 1+2+3+4  9 but 1+2+3<9
// cout << enough(21) << endl;// will print 6 'cause 1+2+ . . .+6  21 but 1+2+ . . . 5<21
// cout << enough(-7) << endl;// will print 1 because 1  -7 and 1 is the smallest 
//  // positive integer
// cout << enough(1) << endl; // will print 1 because 1  1 and 1 is the smallest 
//  // positive intege
    cout << gcd(40,50) << endl; // will print 10
    cout << gcd(256,625) << endl; // will print 1
    cout << gcd(42,6) << endl; // will print 6
    cout << gcd(0,32) << endl; // will print 0 (even though 32 is the g.c.d.)
    cout << gcd(10,-6) << endl; // will print 0 (even though 2 is the g.c.d.
    return 0;
}