#include <iostream>
template <class T>
//Class Node
class Node{
    public:
        T data;
        Node *next;
};

template <class T>
//Class LinkedList
class CircularLinkedList{
    Node<T> *head, *last;
    int size;
    public:
        CircularLinkedList();
        CircularLinkedList(T *A, int n);
        ~CircularLinkedList();
        void display();
        void insert(int index, T x);
        void remove(int index);
        int length();
        T sum();
        T max();
        T min();
        int search(T key);
        void add(T x);
        bool isSorted();
        void insertSorted(T x);
        void sort();
        void removeDuplicatesInSorted();
        void reverseData();
        void reverseLinks();
        void recursiveReverse(Node<T> *q, Node<T> *p);
        void concatenate(CircularLinkedList<T> first, CircularLinkedList<T> second);
        void merge(CircularLinkedList<T> first, CircularLinkedList<T> second);
};

template <class T>
//Default constructor
CircularLinkedList<T>::CircularLinkedList() : head(nullptr), last(nullptr), size(0){};

template <class T>
//Parameterized constructor
CircularLinkedList<T>::CircularLinkedList(T *A, int n){
    Node<T> *t;
    head = new Node<T>;
    head->data = A[0];
    head->next = head;
    last = head;
    for(int i=1; i<n; i++){
        t = new Node<T>;
        t->data = A[i];
        t->next = head;
        last->next = t;
        last = t;
    }
    size=n;
}

template <class T>
//Destructor which travels and deletes all nodes, in last next is nullptr
CircularLinkedList<T>::~CircularLinkedList(){
    Node<T> *p = head;
    while(head!=last){
        head = head->next;
        delete p;
        p = head;
    }
    delete p;
    size=0;
}

template <class T>
//Display all elements in circular linked list
void CircularLinkedList<T>::display(){
    if(size==0){
        std::cout <<"[]\n";
        return;
    }
    Node<T> *p = head;
    std::cout<<"["<<p->data<<", ";
    p = p->next;
    while(p!=head){
        std::cout<<p->data<<", ";
        p = p->next;
    }
    std::cout<<"\b\b]\n";
}

template <class T>
//Insert element x at index
void CircularLinkedList<T>::insert(int index, T x){
    Node<T> *t, *p = head;
    if(index < 0 || index > size){
        std::cout<<"Index out of range, Can't add element at "<<index<<"\n";
        return;
    }
    t = new Node<T>;
    t->data = x;
    t->next = nullptr;
    if(index == 0){
        t->next = head;
        head = t;
        last->next = head;
    }
    else{
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
    size++;
}

template <class T>
//Remove element at index
void CircularLinkedList<T>::remove(int index){
    Node<T> *p = head, *q = nullptr;
    if(index < 0 || index > size){
        std::cout<<"Index out of range, Can't remove element at "<<index<<"\n";
        return;
    }
    if(size==0){
        std::cout<<"Linked list is empty, Can't remove element at "<<index<<"\n";
        return;
    }
    if(index == 0){
        head = (size==1) ? nullptr : head->next;
        delete p;
    }else{
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        delete q;
    }
    size--;
}

template <class T>
//Returns length of circular linked list
int CircularLinkedList<T>::length(){
    return size;
}

template <class T>
//Returns sum of all elements in circular linked list, if list is empty returns 0
T CircularLinkedList<T>::sum(){
    Node<T> *p = head;
    T sum = 0;
    do{
        sum += p->data;
        p = p->next;
    }while(p!=last->next);
    return sum;
}

template <class T>
//Returns max element in circular linked list if list is empty returns 0
T CircularLinkedList<T>::max(){
    Node<T> *p = head->next;
    T max = head->data;
    do{
        if(p->data > max)
            max = p->data;
        p = p->next;
    }while(p!=last->next);
    return max;
}

template <class T>
//Returns min element in circular linked list, if list is empty returns 0
T CircularLinkedList<T>::min(){
    Node<T> *p = head->next;
    T min = head->data;
    do{
        if(p->data < min)
            min = p->data;
        p = p->next;
    }while(p!=last->next);
    return min;
}

template <class T>
//Returns index of key if found, else returns -1
int CircularLinkedList<T>::search(T key){
    Node<T> *p = head;
    int index = 0;
    do{
        if(p->data == key)
            return index;
        p = p->next;
        index++;
    }while(p==last->next);
    return -1;
}

template <class T>
//Adds element at the end of circular linked list
void CircularLinkedList<T>::add(T x){
    Node<T> *t = new Node<T>;
    t->data = x;
    t->next = nullptr;
    if(head == nullptr){
        head = t;
        last = t;
        last->next = head;
    }else{
        last->next = t;
        last = t;
        t->next = head;
    }
    size++;
}

//Checks if circular linked list is sorted or not
template <class T>
bool CircularLinkedList<T>::isSorted(){
    Node<T> *p = head->next;
    T x = head->data;
    do{
        if(x > p->data){
            std::cout<<"Linked list is not sorted\n";
            return false;
        }
        x = p->data;
        p = p->next;
    }while(p!=last->next);
    std::cout<<"Linked list is sorted\n";
    return true;
}

//Inserts element in sorted linked list
template <class T>
void CircularLinkedList<T>::insertSorted(T x){
    if(!isSorted()){
        std::cout<<"Linked list is not sorted, can't insert element\n";
        return;
    }
    Node<T> *p = head, *q = nullptr, *t = new Node<T>;
    t->data = x;
    t->next = t;
    if(head == nullptr){
        head = t;
    }else{
        if(p->data < x){//this if is just to move first time pointer p to second node, so that loop could run conditions properly
            q = p;
            p = p->next;
        }
        while(p != head && p->data < x){
            q = p;
            p = p->next;
        }
        if(p == head){
            t->next = head;
            head = t;
            last->next = head;
        }else{
            t->next = q->next;
            q->next = t;
        }
    }
    size++;
}

//Sorts Circular linked list
template <class T>
void CircularLinkedList<T>::sort(){
    Node<T> *p = head, *q = nullptr;
    T temp;
    do{
        q = p->next;
        do{
            if(p->data > q->data){
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            q = q->next;
        }while(q!=last->next);
        p = p->next;
    }while(p!=last->next);
}

template <class T>
//Removes duplicates from a sorted Linked List
void CircularLinkedList<T>::removeDuplicatesInSorted(){
    if(size==0){
        std::cout<<"Linked list is empty, can't remove duplicates\n";
        return;
    }
    Node<T> *p=head, *q=head->next;
    do{
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
    }while(q->next!=head);
}

template <class T>
//Reverses data in linked list using array, space costly
void CircularLinkedList<T>::reverseData(){
    if(size==0){
        std::cout<<"Circular Linked list is empty, can't reverse data\n";
        return;
    }
    T *A = new T[size];
    Node<T> *p = head;
    int i = 0;
    do{
        A[i++] = p->data;
        p = p->next;
    }while(p->next!=head);
    p = head;
    i--;
    do{
        p->data = A[i--];
        p = p->next;
    }while(p->next!=head);
}

template <class T>
//Reverses links in linked list
void CircularLinkedList<T>::reverseLinks(){
    Node<T> *p = head, *q = nullptr, *r = nullptr;
    last=head;
    do{
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }while(p->next!=head);
    head = q;
    last->next = head;
}

template <class T>
//Reverses links in linked list recursively
void CircularLinkedList<T>::recursiveReverse(Node<T> *q, Node<T> *p){
    if(p){
        recursiveReverse(p, p->next);
        p->next = q;
    }else{
        head = q;
        last = head;
        last->next = head;
    }
}

template <class T>
//Concatenates two linked lists in one linked list
void CircularLinkedList<T>::concatenate(CircularLinkedList<T> first, CircularLinkedList<T> second){
    Node<T> *p = first.head;
    Node<T> *q = second.head;
    Node<T> *t = nullptr;
    this->head = p;
    p = last;
    p->next = q;
    this->last = second.last;
    this->last->next = first.head;
    this->size = first.size + second.size;
}

template <class T>
//Merges two sorted linked lists in one sorted linked list
void CircularLinkedList<T>::merge(CircularLinkedList<T> first, CircularLinkedList<T> second){
    Node<T> *p = first.head;
    Node<T> *q = second.head;
    Node<T> *last = nullptr;
    if(p->data < q->data){
        this->head = last = p;
        p = p->next;
        last->next = head;
    }else{
        this->head = last = q;
        q = q->next;
        last->next = head;
    }
    do{
        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = head;
        }else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = head;
        }
    }while(p!=first.head && q!=second.head);
    if(p!=first.head){
        last->next = p;
        last = first.last;
    }
    if(q!=second.head){
        last->next = q;
        last = second.last;
    }
    last->next=head;
}
