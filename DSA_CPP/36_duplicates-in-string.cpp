#include <iostream>
using namespace std;
int main () {
    string s="hellohowareyouwhyareyouandiamenjoyingthisandthisisgreatzzzzz";
    int hashTable[26]={0};
    for(char a:s){
        hashTable[a-97]++;
    }
    for(int i=0; i<26; i++){
        if(hashTable[i]>1)
            cout<<(char)(i+97)<<" appears "<<hashTable[i]<<" times\n";
    }
    return 0;
}