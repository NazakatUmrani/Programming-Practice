#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,n,q,s=0;
    cin>>n>>q;
    int *a[n];
    while (n--) {
        int num;
        cin>>num;
        a[s] = new int[num];
        for (int i = 0; i<num; i++) {
            cin>>a[s][i];
        }
        s++;
    }
   while (q--) {
       cin>>i>>j;
       cout<<a[i][j]<<endl;
   }
    return 0;
}
