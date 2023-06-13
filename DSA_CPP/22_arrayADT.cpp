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
        float avg();
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
        void menu();
};
int main () {
    arrayADT arr1;
    char choice;
    do{
        system("clear");
        arr1.menu();
        cout<<"do you want to continue y for yes: ";
        cin>>choice;
    }while(choice=='y');
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
    cout << "Enter base size of array: ";
    cin >> size;
    if(ptr!=NULL)
        delete []ptr;
    ptr=new int[size];
    cout << "Enter number of elements: ";
    cin >> length;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < length; i++){
        cout << "Array element: " << i+1 << " = " << flush;
        cin >> ptr[i];
    }
}
void arrayADT::display(){
    if(length==0)
        return;
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
    while (low<=high)
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
    if(0<=index && index<length)
        return ptr[index];
    return -1;
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
float arrayADT::avg(){
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
    this->ptr = new int[size];
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
void arrayADT::menu(){
    int choice,e,i;
    cout << "0 for Displaying array\n";
    cout << "1 for Creating an array\n2 for appending an element\n";
    cout << "3 for inserting an element\n4 for removing an element\n";
    cout << "5 for inserting element in sorted way\n6 for checking is array sorted\n";
    cout << "7 for searching an element (LS)\n8 for searching an element (BS)\n";
    cout << "9 for getting an element by index\n10 for setting an element at a index\n";
    cout << "11 for finding maximum element\n12 for finding minimum element\n";
    cout << "13 for calculating sum of elements\n14 for calculating avg of all elements\n";
    cout << "15 for reversing elements\n";
    cout << "16 for left shift elements\n17 for right shift elements\n";
    cout << "18 for left rotate elements\n19 for right rotate elements\n";
    cout << "20 for sorting positive and negative integers\n";
    cout << "21 for Exit\n";
    cin >> choice;
    switch(choice){
        case 0:
            this->display();
            break;
        case 1:
            this->create();
            break;
        case 2:
            cout << "Enter element to append: ";
            cin >> e;
            this->append(e);
            break;
        case 3:
            cout << "Enter index and element insert: ";
            cin >> i >> e;
            this->insert(i,e);
            break;
        case 4:
            cout << "Enter index to remove element: ";
            cin >> i;
            this->remove(i);
            break;
        case 5:
            cout << "Enter element to insert in sorted way: ";
            cin >> e;
            this->insertSorted(e);
            break;
        case 6:
            if(this->isSorted())
                cout<<"Array is sorted\n";
            else
                cout<<"Array is not Sorted\n";
            break;
        case 7:
            cout << "Enter element to search: ";
            cin >> e;
            i = this->linearSearch(e);
            if(i!=-1)
                cout<<"Element found at index: "<<i<<endl;
            else
                cout<<"Element is not present in list\n";
            break;
        case 8:
            cout << "Enter element to search: ";
            cin >> e;
            i = this->binarySearch(e);
            if(i!=-1)
                cout<<"Element found at index: "<<i<<endl;
            else
                cout<<"Element is not present in list\n";
            break;
        case 9:
            cout << "Enter index to get element: ";
            cin >> i;
            cout<<"Element at "<<i<<" is: "<<this->get(i)<<endl;
            break;
        case 10:
            cout << "Enter index and element to set element: ";
            cin >> i >> e;
            this->set(i,e);
            break;
        case 11:
            i=this->max();
            cout<<"Element max is: "<<i<<endl;
            break;
        case 12:
            i=this->min();
            cout<<"Element min is: "<<i<<endl;
            break;
        case 13:
            i=this->sum();
            cout<<"Sum of all elements is: "<<i<<endl;
            break;
        case 14:
            float a=this->avg();
            cout<<"Average of all elements is: "<<a<<endl;
            break;
        case 15:
            this->reverse();
            break;
        case 16:
            this->leftShift();
            break;
        case 17:
            this->rightShift();
            break;
        case 18:
            this->leftRotate();
            break;
        case 19:
            this->rightRotate();
            break;
        case 20:
            this->sortPosAndNeg();
            break;
        case 21:
            break;
    }
}
