#include <iostream>
using namespace std;
int validate(string s){
    for(int i=0; s[i]!='\0'; i++){
        if(!(65<=s[i]&&s[i]<=90) && !(97<=s[i]&&s[i]<=122) &&!(48<=s[i]&&s[i]<=57))
            return 0;
    }
    return 1;
}
int main () {
    string s="Nazakat1$234";
    if(validate(s)){
        cout<<"Valid\n";
    }
    else
        cout<<"Invalid\n";
    return 0;
}