//Class Node
template <class T>
class Node{
    public:
        T data;
        Node *next;
};

//Class LinkedList
template <class T>
class LinkedList{
    Node<T> *first;
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
};

//Default constructor
template <class T>
LinkedList<T>::LinkedList() : first(NULL), size(0){};

//Parameterized constructor
template <class T>
LinkedList<T>::LinkedList(T *A, int n){
    Node<T> *last, *t;
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

//Destructor which travels and deletes all nodes, in last next is NULL
template <class T>
LinkedList<T>::~LinkedList(){
    Node<T> *p = first;
    while(first){
        first = first->next;
        delete p;
        p = first;
    }
}

//Display all elements in linked list
template <class T>
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

//Returns length of linked list
template <class T>
int LinkedList<T>::length(){
    return size;
}

//Returns sum of all elements in linked list
template <class T>
int LinkedList<T>::sum(){
    Node<T> *p = first;
    int sum = 0;
    while(p){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

//Returns max element in linked list
template <class T>
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

//Returns min element in linked list
template <class T>
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