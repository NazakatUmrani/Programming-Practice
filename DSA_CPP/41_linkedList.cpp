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
        bool isSorted();
        void insertSorted(T x);
        void sort();
        void removeDuplicatesInSorted();
        void reverseData();
        void reverseLinks();
        void recursiveReverse(Node<T> *q, Node<T> *p);
        void concatenate(LinkedList<T> first, LinkedList<T> second);
        void merge(LinkedList<T> first, LinkedList<T> second);
        bool isLoop();
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

//Checks if linked list is sorted or not
template <class T>
bool LinkedList<T>::isSorted(){
    Node<T> *p = first->next;
    int x = first->data;
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
    Node<T> *p = first, *q = NULL, *t;
    t = new Node<T>;
    t->data = x;
    t->next = NULL;
    if(first == NULL){
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
}

//Sorts linked list
template <class T>
void LinkedList<T>::sort(){
    Node<T> *p = first, *q = NULL;
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
    Node<T> * p=first, *q=first->next;
    while(q){
        if(p->data != q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

template <class T>
//Reverses data in linked list using array, space costly
void LinkedList<T>::reverseData(){
    int *A = new int[size];
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
    Node<T> *p = first, *q = NULL, *r = NULL;
    while(p){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
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
    Node<T> *t = NULL;
    this->first = p;
    while(p->next){
        p = p->next;
    }
    p->next = q;
    this->last = second.last;
    this->size = first.size + second.size;
}

template <class T>
//Merges two sorted linked lists in one sorted linked list
void LinkedList<T>::merge(LinkedList<T> first, LinkedList<T> second){
    Node<T> *p = first.first;
    Node<T> *q = second.first;
    Node<T> *last = NULL;
    if(p->data < q->data){
        this->first = last = p;
        p = p->next;
        last->next = NULL;
    }else{ll
        this->first = last = q;
        q = q->next;
        last->next = NULL;
    }
    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if(p){
        last->next = p;
    }
    if(q){
        last->next = q;
    }
}

template <class T>
//Checks if linked list is looped or not
bool LinkedList<T>::isLoop(){
    if(last->next == NULL)
        return false;
    else
        return true;
}