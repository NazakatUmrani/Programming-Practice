#include <iostream>
using namespace std;
int main () {
    string p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i=0;
    while(p[i]!='\0'){
        if(65<=p[i] && p[i]<=90){
            p[i]+=32;
        }
        else if(97<=p[i] && p[i]<=122){
            p[i]-=32;
        }
        i++;
    }
    cout<<p;
    return 0;
}