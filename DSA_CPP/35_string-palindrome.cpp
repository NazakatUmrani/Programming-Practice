#include <iostream>
using namespace std;
int main () {
    char s[]="madam";
    //Reverse String
    int i,j;
    for(i=0;s[i]!='\0';i++){}
    char p[i+1];
    i--;
    for(j=0; i>=0; j++,i--){
        p[j]=s[i];
    }
    p[j]='\0';
    //Compare String
    for(i=0; s[i]!='\0'&&p[i]!='\0'; i++){
        if(s[i]!=p[i])
            break;
    }
    if(s[i]==p[i])
        cout<<"Palindrome\n";
    else
        cout<<"Not Palindrome\n";
    return 0;
}