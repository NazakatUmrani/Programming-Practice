#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin>>size;
    int a[size];
    for (int k = 0; k < size; k++) {
        cin>>a[k];
    }
    for (int l = size-1; l >=0; l--) {
        cout<<a[l]<<" ";
    }
    return 0;
}
