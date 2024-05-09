#include <iostream>
template <class T>
//Class Node
class Node{
    public:
        T data;
        Node *next;
};

template <class T>
//Class Stack
class Stack{
    public:
        int size;
        Node<T> *Top;
        Stack();
        Stack(T *A, int n);
        ~Stack();
        void display();
        void push(T x);
        void pop();
        T top();
        T peek(int index);
        int length();
        T sum();
        T max();
        T min();
        int search(T key);
        bool isEmpty();
        // bool isSorted();
        // void insertSorted(T x);
        // void sort();
        // void removeDuplicatesInSorted();
        // void reverseData();
        // void reverseLinks();
        // void recursiveReverse(Node<T> *q, Node<T> *p);
        // void concatenate(LinkedList<T> first, LinkedList<T> second);
        // void merge(LinkedList<T> first, LinkedList<T> second);
        // bool isLoop();
};

template <class T>
//Default constructor
Stack<T>::Stack() : Top(nullptr),  size(0){};

template <class T>
//Parameterized constructor
Stack<T>::Stack(T *A, int n){
    Node<T> *t;
    Top = new Node<T>;
    Top->data = A[0];
    Top->next = nullptr;
    for(int i=1; i<n; i++){
        t = new Node<T>;
        t->data = A[i];
        t->next = Top;
        Top = t;
    }
    size=n;
}

template <class T>
//Destructor which travels and deletes all nodes, in last next is nullptr
Stack<T>::~Stack(){
    Node<T> *p = Top;
    while(Top){
        Top = Top->next;
        delete p;
        p = Top;
    }
    size=0;
}

template <class T>
//Display all elements in Stack
void Stack<T>::display(){
    if(size==0){
        std::cout <<"[]\n";
        return;
    }
    Node<T> *p = Top;
    std::cout<<"[";
    while(p){
        std::cout<<p->data<<", ";
        p = p->next;
    }
    std::cout<<"\b\b]\n";
}

template <class T>
//Add element at top of Stack
void Stack<T>::push(T x){
    Node<T> *t = Top;
    t = new Node<T>;
    t->data = x;
    t->next = Top;
    Top = t;
    size++;
}

template <class T>
//Remove top element from Stack
void Stack<T>::pop(){
    Node<T> *t = Top;
    Top = Top->next;
    delete t;
    size--;
}

template <class T>
//Peep top element
T Stack<T>::top(){
    return Top->data;
}

template <class T>
//Peep top element
T Stack<T>::peek(int index){
    Node<T> *t = Top;
    for (int i=1; i<size; i++){
        t=t->next;
    }
    return t->data;
}

template <class T>
//Returns length of Stack
int Stack<T>::length(){
    return size;
}

template <class T>
//Returns sum of all elements in Stack, if Stack is empty returns 0
T Stack<T>::sum(){
    Node<T> *p = Top;
    T sum = 0;
    while(p){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

template <class T>
//Returns max element in Stack if list is empty returns 0
T Stack<T>::max(){
    Node<T> *p = Top->next;
    T max = Top->data;
    while(p){
        if(p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

template <class T>
//Returns min element in linked list, if list is empty returns 0
T Stack<T>::min(){
    Node<T> *p = Top->next;
    T min = Top->data;
    while(p){
        if(p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}

template <class T>
//Returns index of key if found, else returns -1
int Stack<T>::search(T key){
    Node<T> *p = Top;
    int index = 0;
    while(p){
        if(p->data == key)
            return index;
        p = p->next;
        index++;
    }
    return -1;
}

template <class T>
//Checks if Stack is empty
bool Stack<T>::isEmpty(){
    return (size==0)? true:false;
}


/*
//Checks if linked list is sorted or not
template <class T>
bool LinkedList<T>::isSorted(){
    Node<T> *p = first->next;
    T x = first->data;
    while(p){
        if(x > p->data){
            std::cout<<"Linked list is not sorted\n";
            return false;
        }
        x = p->data;
        p = p->next;
    }
    std::cout<<"Linked list is sorted\n";
    return true;
}

//Inserts element in sorted linked list
template <class T>
void LinkedList<T>::insertSorted(T x){
    if(!isSorted()){
        std::cout<<"Linked list is not sorted, can't insert element\n";
        return;
    }
    Node<T> *p = first, *q = nullptr, *t;
    t = new Node<T>;
    t->data = x;
    t->next = nullptr;
    if(first == nullptr){
        first = t;
    }else{
        while(p && p->data < x){
            q = p;
            p = p->next;
        }
        if(p == first){
            t->next = first;
            first = t;
        }else{
            t->next = q->next;
            q->next = t;
        }
    }
    size++;
}

//Sorts linked list
template <class T>
void LinkedList<T>::sort(){
    Node<T> *p = first, *q = nullptr;
    int temp;
    while(p){
        q = p->next;
        while(q){
            if(p->data > q->data){
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            q = q->next;
        }
        p = p->next;
    }
}

template <class T>
//Removes duplicates from a sorted Linked List
void LinkedList<T>::removeDuplicatesInSorted(){
    if(size==0){
        std::cout<<"Linked list is empty, can't remove duplicates\n";
        return;
    }
    Node<T> *p=first, *q=first->next;
    while(q){
        if(p->data != q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
            size--;
        }
    }
}

template <class T>
//Reverses data in linked list using array, space costly
void LinkedList<T>::reverseData(){
    if(size==0){
        std::cout<<"Linked list is empty, can't reverse data\n";
        return;
    }
    T *A = new T[size];
    Node<T> *p = first;
    int i = 0;
    while(p){
        A[i++] = p->data;
        p = p->next;
    }
    p = first;
    i--;
    while(p){
        p->data = A[i--];
        p = p->next;
    }
}

template <class T>
//Reverses links in linked list
void LinkedList<T>::reverseLinks(){
    Node<T> *p = first, *q = nullptr, *r = nullptr;
    while(p){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    last = first;
    first = q;
}

template <class T>
//Reverses links in linked list recursively
void LinkedList<T>::recursiveReverse(Node<T> *q, Node<T> *p){
    if(p){
        recursiveReverse(p, p->next);
        p->next = q;
    }else{
        first = q;
    }
}

template <class T>
//Concatenates two linked lists in one linked list
void LinkedList<T>::concatenate(LinkedList<T> first, LinkedList<T> second){
    Node<T> *p = first.first;
    Node<T> *q = second.first;
    Node<T> *t = nullptr;
    this->first = p;
    p = last;
    p->next = q;
    this->last = second.last;
    this->size = first.size + second.size;
}

template <class T>
//Merges two sorted linked lists in one sorted linked list
void LinkedList<T>::merge(LinkedList<T> first, LinkedList<T> second){
    Node<T> *p = first.first;
    Node<T> *q = second.first;
    Node<T> *last = nullptr;
    if(p->data < q->data){
        this->first = last = p;
        p = p->next;
        last->next = nullptr;
    }else{
        this->first = last = q;
        q = q->next;
        last->next = nullptr;
    }
    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = nullptr;
        }else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = nullptr;
        }
    }
    if(p){
        last->next = p;
        last = first.last;
    }
    if(q){
        last->next = q;
        last = second.last;
    }
}

template <class T>
//Checks if linked list is looped or not
bool LinkedList<T>::isLoop(){
    if(last->next == nullptr)
        return true;
    else
        return false;
}

*/