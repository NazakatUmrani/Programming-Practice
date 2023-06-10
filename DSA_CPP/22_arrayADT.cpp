#include <iostream>
using namespace std;

class arrayADT{
    int *ptr;
    int size, length;
    public:
        arrayADT();
        arrayADT(int);
        arrayADT(int*, int, int);
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
        bool isSorted();
        void insertSorted(int);
        void sortPosAndNeg();
        void merge(const arrayADT&, const arrayADT&);
};
int main () {
    int array1[]={1,5,34,50,56};
    arrayADT arr1(array1,10,5);
    int array2[]={6,7,52,54,74};
    arrayADT arr2(array2,10,5);
    arrayADT arr3;
    arr3.merge(arr1,arr2);
    arr3.display();
    return 0;
}
arrayADT::arrayADT(){
    size=0;
    length=0;
    ptr=NULL;
}
arrayADT::arrayADT(int size){
    this->size = size;
    ptr = new int[size];
}
arrayADT::arrayADT(int* a, int size, int length){
    ptr = new int[size];
    this->size=size;
    this->length=length;
    for(int i=0; i<length; i++)
        ptr[i]=a[i];
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
bool arrayADT::isSorted(){
    for(int i=0; i<length-1; i++)
        if(ptr[i]>ptr[i+1])
            return false;
    return true;
}
void arrayADT::insertSorted(int element){
    if(length>=size)
        return;
    int i=length-1;
    while(element<ptr[i] && i>=0){
        ptr[i+1]=ptr[i];
        i--;
    }
    ptr[i+1]=element;
    length++;
}
void arrayADT::sortPosAndNeg(){
    int i=0,j=length-1;
    while(i<j){
        while(ptr[i]<0) i++;
        while(ptr[j]>=0) j--;
        if(i<j) swap(ptr[i],ptr[j]);
    }
}
void arrayADT::merge(const arrayADT& a,const arrayADT& b){
    int i=0,j=0,k=0;
    this->size = a.size+b.size;
    this->length = a.length+b.length;
    ptr = new int[size];
    while (i<a.length && j<b.length){
        if(a.ptr[i]<b.ptr[j])
            this->ptr[k++]=a.ptr[i++];
        else
            this->ptr[k++]=b.ptr[j++];
    }
    while(i<a.length)
        this->ptr[k++]=a.ptr[i++];
    while(j<b.length)
        this->ptr[k++]=b.ptr[j++];
}
