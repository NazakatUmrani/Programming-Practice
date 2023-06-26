#include <iostream>
using namespace std;
int main () {
    char a[]= "observe";
    char b[]= "verbose";
    int i, h[26]={0};
    for(i=0; a[i]!='\0'; i++){
        h[a[i]-97]++;
    }
    int count=0;
    for(i=0; b[i]!='\0'; i++){
        h[b[i]-97]--;
        if(h[b[i]-97]<0){
            count++;
            break;
        }
    }
    for(int j: h){
        if(j>0){
            count++;
            break;
        }
    }
    if(count==0)
        cout<<"Anagram\n";
    else
        cout<<"Not Anagram\n";
    return 0;
}