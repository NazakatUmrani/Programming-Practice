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
    for (int i=0; i<N; i++){
        cin >> element;
        vec1[i] = element;
    }
    int Q; cin >> Q;
    int Y;
    vector<int> :: iterator lowerbound;
    while(Q--){
        cin >> Y;
        lowerbound = lower_bound(vec1.begin(), vec1.end(), Y);
        if (Y != *lowerbound) {
            cout << "No "<<lowerbound-vec1.begin()+1 << endl;
        }
        else{
            cout << "Yes " << lowerbound-vec1.begin()+1 << endl;
        }
    }
    return 0;
}
