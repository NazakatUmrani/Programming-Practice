#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
    cout << showbase << hex << left << nouppercase << long(A) << endl;
    cout << setw(15) << right << setfill('_') << showpos << fixed << setprecision(2) << B << endl;
    cout << scientific << noshowpos << uppercase << setprecision(9) << C << endl;
	}
