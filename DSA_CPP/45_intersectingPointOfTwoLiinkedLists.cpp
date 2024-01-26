/*

4 -> 5 -> 1 -> 53 -> 25 -> -5
             ^
6 -> 5 -> 2  |
*/

#include <iostream>
#include "41_linkedList.cpp"
#include <stack>
using namespace std;
int main(){
    int arr1[] = {4,5,1,53,25,-5};
    int arr2[] = {6,5,2};
    LinkedList<int> first(arr1,6),second(arr2,3);
    second.last->next = first.first->next->next->next;
    first.display();
    second.display();
    stack<int> s1, s2;
    Node<int>* p = first.first;
    while(p){
        s1.push(p->data);
        p = p->next;
    }
    p = second.first;
    while(p){
        s1.push(p->data);
        p = p->next;
    }
    int intersectingElement = 0, index = (first.size > second.size) ? first.size : second.size;
    while(s1.top() == s2.top()){
        intersectingElement = s1.top();
        s1.pop(); s2.pop();
        index--;
    }
    cout << "Elements intersect at " << intersectingElement
     << "\nindex is : "<< index << endl;
}