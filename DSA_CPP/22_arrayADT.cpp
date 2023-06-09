#include <iostream>
using namespace std;

class arrayADT{
    int *ptr;
    int size, length;
    public:
        arrayADT(int size){
            this->size = size;
            ptr = new int[size];
        }
        void create(){
            cout << "Enter number of elements: ";
            cin >> this->length;
            cout << "Enter the array elements: " << endl;
            for (int i = 0; i < this->length; i++){
                cout << "Array element: " << i << " = " << flush;
                cin >> ptr[i];
            }
        }
        void display(){
            for (int i = 0; i < length; i++){
                cout << ptr[i] << " ";
            }
            cout<<"\b\n";
        }
        void append(int element){
            if(length<size){
                ptr[length++]=element;
            }
        }
        void insert(int index, int element){
            if(length<size){
                for(int i=length; i>index; i--){
                    ptr[i]=ptr[i-1];
                }
                ptr[index]=element;
                length++;
            }
        }
        ~arrayADT(){
            delete[] ptr;
            cout << "Array destroyed" << endl;
        }
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
    return 0;
}