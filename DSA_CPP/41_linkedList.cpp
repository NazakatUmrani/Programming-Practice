template <class T>
//Class Node
class Node{
    public:
        T data;
        Node *next;
};

template <class T>
//Class LinkedList
class LinkedList{
    Node<T> *first, *last;
    int size;
    public:
        LinkedList();
        LinkedList(T *A, int n);
        ~LinkedList();
        void display();
        void insert(int index, T x);
        void remove(int index);
        int length();
        int sum();
        int max();
        int min();
        int search(T key);
        void add(T x);
};

template <class T>
//Default constructor
LinkedList<T>::LinkedList() : first(NULL), last(NULL), size(0){};

template <class T>
//Parameterized constructor
LinkedList<T>::LinkedList(T *A, int n){
    Node<T> *t;
    first = new Node<T>;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(int i=1; i<n; i++){
        t = new Node<T>;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

template <class T>
//Destructor which travels and deletes all nodes, in last next is NULL
LinkedList<T>::~LinkedList(){
    Node<T> *p = first;
    while(first){
        first = first->next;
        delete p;
        p = first;
    }
}

template <class T>
//Display all elements in linked list
void LinkedList<T>::display(){
    Node<T> *p = first;
    std::cout<<"[";
    while(p){
        std::cout<<p->data<<", ";
        p = p->next;
    }
    std::cout<<"\b\b]\n";
}

template <class T>
//Insert element x at index
void LinkedList<T>::insert(int index, T x){
    Node<T> *t, *p = first;
    if(index < 0 || index > size){
        std::cout<<"Index out of range, Can't add element at "<<index<<"\n";
        return;
    }
    t = new Node<T>;
    t->data = x;
    t->next = NULL;
    if(index == 0){
        t->next = first;
        first = t;
    }else{
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

template <class T>
//Remove element at index
void LinkedList<T>::remove(int index){
    Node<T> *p = first, *q = NULL;
    if(index < 0 || index > size){
        std::cout<<"Index out of range, Can't remove element at "<<index<<"\n";
        return;
    }
    if(index == 0){
        first = first->next;
        delete p;
    }else{
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        delete q;
    }
}

template <class T>
//Returns length of linked list
int LinkedList<T>::length(){
    return size;
}

template <class T>
//Returns sum of all elements in linked list, if list is empty returns 0
int LinkedList<T>::sum(){
    Node<T> *p = first;
    int sum = 0;
    while(p){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

template <class T>
//Returns max element in linked list if list is empty returns 0
int LinkedList<T>::max(){
    Node<T> *p = first->next;
    int max = first->data;
    while(p){
        if(p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

template <class T>
//Returns min element in linked list, if list is empty returns 0
int LinkedList<T>::min(){
    Node<T> *p = first->next;
    int min = first->data;
    while(p){
        if(p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}

template <class T>
//Returns index of key if found, else returns -1
int LinkedList<T>::search(T key){
    Node<T> *p = first;
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
//Adds element at the end of linked list
void LinkedList<T>::add(T x){
    Node<T> *t;
    t = new Node<T>;
    t->data = x;
    t->next = NULL;
    if(first == NULL){
        first = t;
        last = t;
    }else{
        last->next = t;
        last = t;
    }
}