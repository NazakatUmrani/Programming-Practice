#include <iostream>
#include "41_linkedList.cpp"
#include <math.h>
using namespace std;
int main(){
    int array[7] = {11,5,23,7,21,6,8};
    LinkedList<int> l = new LinkedList<int>(array);
    Node *ptr = l.first;
    for(int i=0; i<(ceil(l.size/2)-1); i++){
        ptr = ptr->next;
    }
    cout << ptr->data;
}
