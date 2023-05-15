#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char c;
};

int main () {
    int a; float b; double c; char d;
    cout << "Size of Int a is: " << sizeof(a) << endl;
    cout << "Size of float b is: " << sizeof(b) << endl;
    cout << "Size of double c is: " << sizeof(c) << endl;
    cout << "Size of char d is: " << sizeof(d) << endl;

    //Pointer Variables and their sizes
    int *e; float *f; double *g; char *h;
    //See how every pointer takes 8 bytes, its' data type doesn't matter
    cout << "Size of Int pointer e is: " << sizeof(e) << endl;
    cout << "Size of float pointer f is: " << sizeof(f) << endl;
    cout << "Size of double pointer g is: " << sizeof(g) << endl;
    cout << "Size of char pointer h is: " << sizeof(h) << endl;

    struct Rectangle r = {10,5};
    cout << r.length << endl << r.breadth << endl;
    //Char takes 1 byte, but this sizeof func prints 12 bytes total size, compiler
    //feels easy in calculations or handling these variables, so it assigns
    //4 bytes, but use only 1 byte for char
    cout << "Size of struct Rectangle r is: " << sizeof(r) << endl;
    cout << "Size of struct Rectangle r is: " << sizeof(Rectangle) << endl;
    cout << "Size of struct Rectangle r is: " << sizeof(struct Rectangle) << endl;

    struct Rectangle *p;
    //No matter what, pointer always takes 8 bytes
    cout << "Size of struct Rectangle pointer p is: " << sizeof(p) << endl;
    cout << "Size of struct Rectangle pointer p is: " << sizeof(Rectangle *) << endl;
    cout << "Size of struct Rectangle pointer p is: " << sizeof(struct Rectangle *) << endl;

    return 0;
}