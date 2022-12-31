#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b, c, a1, b1;
    cin >> a;
    cin >> b;
    int aSize, bSize;
    aSize = a.size();
    bSize = b.size();
    cout << aSize << " " << bSize << endl;
    c = a+b;
    cout << c << endl;
    a1 = a;
    a1[0] = b[0];
    b1 = b;
    b1[0] = a[0];
    cout << a1 << " " << b1;
    return 0;
}
