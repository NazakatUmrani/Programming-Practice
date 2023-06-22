#include <iostream>
#include "22_arrayADT.cpp"
using namespace std;

class SET:public arrayADT{
    public:
        SET();
        SET(int*, int, int);
        void menu();
        void append(int);
        void insert(int, int);
        void Union(const SET& a,const SET& b);
        void Intersection(const SET& a,const SET& b);
        void Difference(const SET& a,const SET& b);
};
int main () {
    int a1[6]={1,4,7,12,16,18};
    int a2[7]={2,4,6,8,10,12,14};
    SET a(a1,20,6);
    SET b(a2,20,7);
    SET c;
    cout<<"SET A = ";
    a.display();
    cout<<"SET B = ";
    b.display();
    cout<<"SET AUB = ";
    c.Union(a,b);
    c.display();
    cout<<"SET A∩B = ";
    c.Intersection(a,b);
    c.display();
    cout<<"SET A-B = ";
    c.Difference(a,b);
    c.display();
    return 0;
}
SET::SET():arrayADT(){}
SET::SET(int* ptr, int size, int length):arrayADT(ptr,size,length){}

void SET::menu(){
    int choice,e,i;
    cout << "0 for Displaying set\n";
    cout << "1 for Creating a set\n2 for appending an element\n";
    cout << "3 for inserting an element\n4 for removing an element\n";
    cout << "5 for checking is set sorted\n";
    cout << "6 for searching an element (LS)\n7 for searching an element (BS)\n";
    cout << "8 for getting an element by index\n9 for setting an element at a index\n";
    cout << "10 for finding maximum element\n11 for finding minimum element\n";
    cout << "12 for calculating sum of elements\n13 for calculating avg of all elements\n";
    cout << "14 for reversing elements\n";
    cout << "15 for left shift elements\n16 for right shift elements\n";
    cout << "17 for left rotate elements\n18 for right rotate elements\n";
    cout << "19 for sorting positive and negative integers\n";
    cout << "20 for Union\n21 for Intersection\n";
    cout << "20 for Exit\n";
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
            cout << "Enter element to insert in sorted way: ";
            cin >> e;
            this->insertSorted(e);
            break;
        case 4:
            cout << "Enter index to remove element: ";
            cin >> i;
            this->remove(i);
            break;
        case 5:
            if(this->isSorted())
                cout<<"SET is sorted\n";
            else
                cout<<"SET is not Sorted\n";
            break;
        case 6:
            cout << "Enter element to search: ";
            cin >> e;
            i = this->linearSearch(e);
            if(i!=-1)
                cout<<"Element found at index: "<<i<<endl;
            else
                cout<<"Element is not present in SET\n";
            break;
        case 7:
            cout << "Enter element to search: ";
            cin >> e;
            i = this->binarySearch(e);
            if(i!=-1)
                cout<<"Element found at index: "<<i<<endl;
            else
                cout<<"Element is not present in SET\n";
            break;
        case 8:
            cout << "Enter index to get element: ";
            cin >> i;
            cout<<"Element at "<<i<<" is: "<<this->get(i)<<endl;
            break;
        case 9:
            cout << "Enter index and element to set element: ";
            cin >> i >> e;
            this->set(i,e);
            break;
        case 10:
            i=this->max();
            cout<<"Element max is: "<<i<<endl;
            break;
        case 11:
            i=this->min();
            cout<<"Element min is: "<<i<<endl;
            break;
        case 12:
            i=this->sum();
            cout<<"Sum of all elements is: "<<i<<endl;
            break;
        case 13:
            float avg;
            avg=this->avg();
            cout<<"Average of all elements is: "<<avg<<endl;
            break;
        case 14:
            this->reverse();
            break;
        case 15:
            this->leftShift();
            break;
        case 16:
            this->rightShift();
            break;
        case 17:
            this->leftRotate();
            break;
        case 18:
            this->rightRotate();
            break;
        case 19:
            this->sortPosAndNeg();
            break;
        case 20:
            break;
    }
}
void SET::append(int element){
    if(length>=size){
        int *temp = new int[size+20];
        for(int i=0; i<length; i++){
            temp[i]=ptr[i];
        }
        delete[] ptr;
        ptr = temp;
        size += 20;
    }
    if(linearSearch(element)==-1 && length<size)
        ptr[length++]=element;
    else
        cout<<"Duplicates are not allowed\n";
}
void SET::insert(int index, int element){
    if(length>=size && (-1<index && index<=length)){
        int *temp = new int[size+20];
        for(int i=0; i<length; i++){
            temp[i]=ptr[i];
        }
        delete[] ptr;
        ptr = temp;
        size+=20;
    }
    if(length<size && (index>-1 && index<=length) && linearSearch(element)==-1){
        for(int i=length; i>index; i--){
            ptr[i]=ptr[i-1];
        }
        ptr[index]=element;
        length++;
    }
    else{
        cout<<"Duplicates are not allowed\n";
    }
}
void SET::Union(const SET& a,const SET& b){
    if(ptr!=NULL)
        delete []ptr;
    int i=0,j=0,k=0;
    this->size = a.size+b.size;
    this->ptr = new int[size];
    while (i<a.length && j<b.length){
        if(a.ptr[i]<b.ptr[j])
            this->ptr[k++]=a.ptr[i++];
        else if(b.ptr[j]<a.ptr[i])
            this->ptr[k++]=b.ptr[j++];
        else{
            this->ptr[k++]=a.ptr[i++];
            j++;
        }
    }
    while(i<a.length)
        this->ptr[k++]=a.ptr[i++];
    while(j<b.length)
        this->ptr[k++]=b.ptr[j++];
    this->length = k;
}
void SET::Intersection(const SET& a,const SET& b){
    int i=0,j=0,k=0;
    this->size = a.size+b.size;
    this->ptr = new int[size];
    while (i<a.length && j<b.length){
        if(a.ptr[i]==b.ptr[j]){
            this->ptr[k++]=a.ptr[i++];
            j++;
        }
        else if(a.ptr[i]<b.ptr[j]){
            i++;
        }
        else if(b.ptr[j]<a.ptr[i]){
            j++;
        }
    }
    this->length = k;
}
void SET::Difference(const SET& a,const SET& b){
    int i=0,j=0,k=0;
    this->size = a.size+b.size;
    this->ptr = new int[size];
    while (i<a.length && j<b.length){
        if(a.ptr[i]==b.ptr[j]){
            i++;
            j++;
        }
        else if(a.ptr[i]<b.ptr[j]){
            this->ptr[k++]=a.ptr[i++];
        }
        else if(b.ptr[j]<a.ptr[i]){
            j++;
        }
    }
    while(i<a.length)
        this->ptr[k++]=a.ptr[i++];
    this->length = k;
}