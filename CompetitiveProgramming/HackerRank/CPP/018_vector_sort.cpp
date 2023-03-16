#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N; cin >> N;
    int element;
    vector<int> v1;
    for(int i=0; i<N; i++){
        cin >> element;
        v1.push_back(element);
    }
    sort(v1.begin(), v1.end());
    for (int i=0;i<N;i++) {
        cout << v1[i] << " ";
    }
    return 0;
}
