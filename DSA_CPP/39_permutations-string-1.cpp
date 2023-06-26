#include <iostream>
using namespace std;
void stringPermutation(char s[], int a[], char Res[], int k){
    int i;
    if(s[k]=='\0'){
        Res[k]='\0';
        cout<<Res<<endl;
    }
    else{
        for(i=0; s[i]!='\0'; i++){
            if(a[i]==0){
                Res[k]=s[i];
                a[i]=1;
                stringPermutation(s,a,Res,k+1);
                a[i]=0;
            }
        }
    }
}
int main () {
    char s[]="ABC";
    int size=4;
    int a[size];
    for(int i=0; i<size; i++)
        a[i]=0;
    char Res[size];
    stringPermutation(s,a,Res,0);
    return 0;
}