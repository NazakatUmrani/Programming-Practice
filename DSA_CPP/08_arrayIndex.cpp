#include <iostream>
using namespace std;
int main () {
    int a[5];
    for(int i=0; i<5; i++){
        a[i]=i;
    }
    for(int j=0; j<5; j++){
        cout << j[a] << " ";
    }
    cout << endl;
    for(int j=0; j<5; j++){
        cout << *(a+j) << " ";
    }
    cout << endl;
    return 0;
}