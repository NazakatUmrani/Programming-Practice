#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> v1;
    stringstream ss(str);
    // char ch;
    int a,b,c;
    char ch = '0';
    for (int i = 1; i>0; i++) {
        int num;
        ss >> num;
        v1.push_back(num);
        ss >> ch;
        if (ch == '\000') {
            break;
        }
        ch = '\000';
    }
    return v1;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
