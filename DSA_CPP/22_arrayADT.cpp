#include <iostream>
using namespace std;

class arrayADT{
    int *ptr;
    int size, length;
    public:
        arrayADT(int size);
        ~arrayADT();
        void create();
        void display();
        void append(int);
        void insert(int, int);
        void remove(int);
        int linearSearch(int);
        int binarySearch(int);
        int get(int);
        void set(int, int);
};
int main () {
    arrayADT arr(10);
    arr.create();
    arr.display();
    arr.append(4);
    arr.append(5);
    arr.append(6);
    arr.append(7);
    arr.insert(2,5);
    arr.display();
    arr.remove(7);
    arr.display();
    cout << arr.linearSearch(4);
    cout << arr.binarySearch(4);
    return 0;
}

arrayADT::arrayADT(int size){
    this->size = size;
    ptr = new int[size];
}
arrayADT::~arrayADT(){
    delete[] ptr;
    cout << "Array destroyed" << endl;
}
void arrayADT::create(){
    cout << "Enter number of elements: ";
    cin >> this->length;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < this->length; i++){
        cout << "Array element: " << i << " = " << flush;
        cin >> ptr[i];
    }
}
void arrayADT::display(){
    for (int i = 0; i < length; i++){
        cout << ptr[i] << " ";
    }
    cout<<"\b\n";
}
void arrayADT::append(int element){
    if(length<size){
        ptr[length++]=element;
    }
}
void arrayADT::insert(int index, int element){
    if(length<size && (index>-1 && index<=length)){
        for(int i=length; i>index; i--){
            ptr[i]=ptr[i-1];
        }
        ptr[index]=element;
        length++;
    }
}
void arrayADT::remove(int index){
    if(index<length && index > -1){
        for(int i=index; i<length-1; i++){
            ptr[i]=ptr[i+1];
        }
        length--;
    }
}
int arrayADT::linearSearch(int element){
    for(int i=0; i<length; i++){
        if(ptr[i] == element)
            return i;
    }
    return -1;
}
int arrayADT::binarySearch(int key){
    int low,high,mid;
    low=0;
    high=length-1;
    while (low<high)
    {
        mid=(low+high)/2;
        if(ptr[mid]==key)
            return mid;
        else if(ptr[mid]<key)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}
int arrayADT::get(int index){
    if(index<0 && index>=length)
        return -1;
    return ptr[index];
}
void arrayADT::set(int index, int element){
    if(0<=index && index<length)
        ptr[index] = element;
}