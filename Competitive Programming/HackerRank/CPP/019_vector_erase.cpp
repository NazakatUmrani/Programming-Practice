#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N; cin >> N;
    vector<int> vec1(N);
    int element;
    for (int i=0; i<N;i++) {
        cin >> element;
        vec1[i]=(element);
    }
    int x; cin >> x;
    vec1.erase(vec1.begin()+x-1);
    int a, b;
    cin >> a >> b;
    vec1.erase(vec1.begin()+a-1, vec1.begin()+b-1);
    cout << vec1.size() << endl;
    for (int i = 0; i<vec1.size(); i++) {
        cout << vec1[i] << " ";
    }
    return 0;
}
