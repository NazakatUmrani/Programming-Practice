#include <iostream>
using namespace std;
void swap(char& a, char& b){
    char temp = a;
    a=b;
    b=temp;
}
void stringPermutation(char s[], int l, int h){
    int i;
    if(l==h){
        cout<<s<<endl;
    }
    else{
        for(i=l; i<=h; i++){
            swap(s[l],s[i]);
            stringPermutation(s,l+1,h);
            swap(s[l],s[i]);
        }
    }
}
int main () {
    char s[]="ABC";
    int size=4;
    stringPermutation(s,0,size-2);
    return 0;
}