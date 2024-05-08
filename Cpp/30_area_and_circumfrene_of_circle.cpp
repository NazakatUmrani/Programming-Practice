#include <iostream>
using namespace std;
int main () {
    double radius, area, circumference;
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "Area: " << area << endl;
    circumference = 2 * 3.14159 * radius;
    cout << "Circumference: " << circumference << endl;
    return 0;
}