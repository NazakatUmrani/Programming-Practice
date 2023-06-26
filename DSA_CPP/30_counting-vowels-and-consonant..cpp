#include <iostream>
using namespace std;
int main () {
    char a[]="How are you";
    int vCount=0, cCount=0;
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            vCount++;
        }
        else if((65<=a[i]&&a[i]<=90)||(97<=a[i]&&a[i]<=122)){
            cCount++;
        }
    }
    cout<<"Number of Vowels in string are: "<<vCount<<endl;
    cout<<"Number of Consonants in string are: "<<cCount<<endl;
    return 0;
}