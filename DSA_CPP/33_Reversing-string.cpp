#include <iostream>
using namespace std;
int main () {
    //First Method
    cout<<"First Method"<<endl;
    char s[]="Hello How are you";
    int i,j;
    for(i=0;s[i]!='\0';i++){}
    char rS[i+1];
    i--;
    for(j=0; i>=0; j++,i--){
        rS[j]=s[i];
    }
    rS[j]='\0';
    cout<<rS<<endl;

    //Second Method
    cout<<"Second Method"<<endl;
    char t[]="Hello How are you";
    int k;
    for(k=0;t[k]!='\0';k++){}
    k--;
    char u;
    for(int l=0; k>l; l++,k--){
        u=t[k];
        t[k]=t[l];
        t[l]=u;
    }
    cout<<t<<endl;
    return 0;
}