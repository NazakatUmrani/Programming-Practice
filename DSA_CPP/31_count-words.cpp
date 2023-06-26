#include <iostream>
using namespace std;
int main () {
    string s="How are you";
    int i,words=0;
    char previousSpace=' ';
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '&&previousSpace!=' ')
            words++;
        previousSpace = s[i];
    }
    if(s[i-1]!=' ')
        words++;
    cout<<"Number of Words in string are: "<<words<<endl;
    return 0;
}