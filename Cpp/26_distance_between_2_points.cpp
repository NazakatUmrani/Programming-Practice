#include <iostream>
#include <math.h>
using namespace std;

class Point{
    int x, y;
    friend void calculateDistance(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
};
void calculateDistance(Point o1, Point o2){
    cout << "Distance between (" << o1.x << ", "<< o1.y << ") and (" << o2.x << ", "<< o2.y << ") is " << sqrt(pow((o2.x-o1.x),2)+pow((o2.y-o1.y),2)) << endl;
}
int main () {
    Point a(1,0);
    Point b(70,0);
    calculateDistance(a, b);
    return 0;
}