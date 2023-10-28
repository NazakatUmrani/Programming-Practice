#include <iostream>
#include "41_linkedList.cpp"
using namespace std;

//test this linkedlist class
int main(){
    int A[] = {1, 2, 3, 4, 5};
    LinkedList<int> ll(A, 5);
    ll.display();
    cout<<"Max element in linked list = "<<ll.max()<<"\n";
    cout<<"Min element in linked list = "<<ll.min()<<"\n";
    ll.insert(0, 0);
    ll.insert(6, 6);
    ll.insert(3, 10);
    ll.display();
    cout<<"Sum of all elements in linked list = "<<ll.sum()<<"\n";
    cout<<"Max element in linked list = "<<ll.max()<<"\n";
    cout<<"Min element in linked list = "<<ll.min()<<"\n";
    ll.remove(0);
    ll.remove(6);
    ll.remove(3);
    ll.display();
    cout<<"Sum of all elements in linked list = "<<ll.sum()<<"\n";
    return 0;
}