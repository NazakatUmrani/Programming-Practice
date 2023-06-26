#include <iostream>
using namespace std;
int main () {
    char s[]="Painter";
    char p[]="Painting";
    int i,j;
    for(i=0; s[i]!='\0'&&p[i]!='\0'; i++){
        if(s[i]!=p[i])
            break;
    }
    if(s[i]==p[i])
        cout<<"Equal\n";
    else if(s[i]<p[i])    
        cout<<"Less\n";
    else    
        cout<<"Greater\n";
    return 0;
}