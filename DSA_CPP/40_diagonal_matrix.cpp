#include <iostream>
using namespace std;
class DiagonalMatrix{
    private:
        int *ptr;
        int length;
    public:
        DiagonalMatrix(){
            ptr = NULL;
            this->length = 0;
        }
        DiagonalMatrix(int length){
            ptr=new int[length];
            this->length=length;
        }
        DiagonalMatrix(int *p, int length){
            ptr = new int[length];
            this->length = length;
            for(int i=0; i<length; i++){
                ptr[i]=p[i];
            }
        }
        void create(){
            if(ptr!=NULL)
                delete[] ptr;
            cout<<"Enter size for matrix > ";
            cin>>this->length;
            ptr=new int[length];
            for(int i=0; i<length; i++){
                cout<<"Enter element["<<i<<","<<i<<"] > ";
                cin>>ptr[i];
            }
        }
        int get(int i, int j){
            if(i==j && (0<i && i<=length))
                return ptr[i-1];
            else
                return 0;
        }
        void set(int element, int i, int j){
            if(i==j && (0<i && i<=length))
                ptr[i-1] = element;
        }
        void display(){
            for(int i=1; i<=length; i++){
                cout<<"|";
                for(int j=1; j<=length; j++){
                    cout<<get(i,j);
                    if (j != length) {
                        cout<<"\t";
                    }
                }
                cout<<"|\n";
            }
        }
        DiagonalMatrix* operator+(DiagonalMatrix *a){
            int maxLength = (a->length > this->length) ? a->length : this->length;
            DiagonalMatrix *obj = new DiagonalMatrix(maxLength);
            for (int i = 1; i <= maxLength; i++) {
                int sum = a->get(i, i) + this->get(i, i);
                obj->set(sum, i, i);
            }
            return obj;
        }
        ~DiagonalMatrix(){
            if(ptr!=NULL){
                delete[] ptr;
            }
        }
};

int main () {
    int arr1[7]={1,2,3,4,5,6,7};
    DiagonalMatrix *a =new DiagonalMatrix(arr1,7);
    int arr2[9]={9,8,7,6,5,4,3,2,1};
    DiagonalMatrix *b = new DiagonalMatrix(arr2,9);
    cout<<"Displaying Matrix A\n";
    a->display();
    cout<<"Displaying Matrix B\n";
    b->display();
    DiagonalMatrix *c;
    c = *a+b;
    cout<<"Displaying Matrix C\n";
    c->display();
    return 0;
}