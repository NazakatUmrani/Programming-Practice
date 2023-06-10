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
        int max();
        int min();
        int sum();
        int avg();
        void swap(int&, int&);
        void reverse();
        void reverseOld();
        void leftShift();
        void rightShift();
        void leftRotate();
        void rightRotate();
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
    cout << arr.linearSearch(4) << endl;
    cout << arr.binarySearch(4) << endl;
    arr.display();
    arr.reverseOld();
    arr.display();
    arr.reverse();
    arr.display();
    arr.leftRotate();
    arr.display();
    arr.rightRotate();
    arr.display();
    arr.leftShift();
    arr.display();
    arr.rightShift();
    arr.display();
    return 0;
}

arrayADT::arrayADT(int size){
    this->size = size;
    ptr = new int[size];
}
arrayADT::~arrayADT(){
    delete[] ptr;
}
void arrayADT::create(){
    cout << "Enter number of elements: ";
    cin >> length;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < length; i++){
        cout << "Array element: " << i << " = " << flush;
        cin >> ptr[i];
    }
}
void arrayADT::display(){
    cout << "{";
    for (int i = 0; i < length; i++){
        cout << ptr[i] << ", ";
    }
    cout<<"\b\b}\n";
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
int arrayADT::max(){
    if(length<0)
        return -1;
    int max=ptr[0];
    for(int i=1;i<length;i++)
        if(max<ptr[i])
            max = ptr[i];
    return max;
}
int arrayADT::min(){
    if(length<0)
        return -1;
    int min=ptr[0];
    for(int i=1;i<length;i++)
        if(min>ptr[i])
            min = ptr[i];
    return min;
}
int arrayADT::sum(){
    int sum=0;
    for(int i=0; i<length; i++)
        sum+=ptr[i];
    return sum;
}
int arrayADT::avg(){
    return sum()/length;
}
void arrayADT::swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
void arrayADT::reverse(){
    for(int i=0,j=length-1; i<j; i++,j--)
        swap(ptr[i],ptr[j]);
}
void arrayADT::reverseOld(){
    int *temp = new int[length];
    for(int i=0,j=length-1; i<length; i++,j--)
        temp[i] = ptr[j];
    for(int i=0; i<length; i++)
        ptr[i] = temp[i];
    delete []temp;
}
void arrayADT::leftShift(){
    for(int i=0; i<length-1; i++)
        ptr[i]=ptr[i+1];
    ptr[length-1] = 0;
}
void arrayADT::rightShift(){
    for(int i=length-1; i>0; i--)
        ptr[i]=ptr[i-1];
    ptr[0] = 0;
}
void arrayADT::leftRotate(){
    int temp = ptr[0];
    leftShift();
    ptr[length-1]=temp;
}
void arrayADT::rightRotate(){
    int temp = ptr[length-1];
    rightShift();
    ptr[0]=temp;
}