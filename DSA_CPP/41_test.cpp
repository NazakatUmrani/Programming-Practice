#include <iostream>
#include "41_linkedList.cpp"

//test this linkedlist class
int main(){
    int A[] = {1, 2, 3, 4, 5};
    LinkedList<int> ll(A, 5);
    ll.display();
    ll.insert(0, 0);
    ll.insert(6, 6);
    ll.insert(3, 10);
    ll.display();
    ll.remove(0);
    ll.remove(6);
    ll.remove(3);
    ll.display();
    return 0;
}