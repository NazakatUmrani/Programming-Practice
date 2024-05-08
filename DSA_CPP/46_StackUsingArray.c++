#include <iostream>
using namespace std;

template <class T>
class stack{
    int top;
    int size;
    int maxSize;
    T *p;
    public:
        stack(){
            top=-1;
            size=0;
            maxSize=0;
            p=nullptr;
        }
        stack(int maxSize, int size, T* ptr){
            this->maxSize = maxSize;
            this->size = size;
            p = new int[maxSize];
            for (int i=0; i<size; i++){
                p[i]=ptr[i];
                top++;
            }
        }
        int getSize(){ return size; }
        void setSize(int size){ this->size=size; }
        int isEmpty(){ return (top==-1)?1:0; } //1 If Empty else 0
        int isFull(){ return (top==maxSize-1)?1:0; } //1 If Full else 0
        void push(T element){
            if(!isFull()){
                p[++top]=element;
                size++;
            }
            else{
                cout<<"Stack is full\n";
            }
        }
        T pop(){
            if(!isEmpty()){
                size--;
                return p[--top];
            }
            else{
                cout<<"Stack is already Empty\n";
            }
        }
        T peek(int pos){ // 1-based
            if(!isEmpty() && (top-pos+1>0)){
                return p[top-pos+1];
            }
            else{
                if(isEmpty())
                    cout<<"Stack is Empty\n";
                else
                    cout<<"Invalid Position "<<pos<<" in stack of size "<<size<<"\n";
            }
        }
        T Top(){
            if(!isEmpty())
                return p[top];
            else
                cout<<"Stack is Empty\n";
        }
        void print(){
            for (int i = 0; i<top; i++){
                cout<<p[i]<<", ";   
            }
            cout<<"\b\b \n"; //removing extra comma and space
        }
};

int main () {
    int arr[]={4,3,2};
    stack<int> s(5,3,arr);
    s.print();
    cout<<s.getSize()<<endl;
    return 0;
}