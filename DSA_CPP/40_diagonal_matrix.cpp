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
        DiagonalMatrix(int *p, int length){
            ptr = new int[length];
            this->length = length;
            for(int i=0; i<length; i++){
                ptr[i]=p[i];
            }
        }
        void create(){
            if(ptr==NULL)
                delete ptr;
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
        ~DiagonalMatrix(){
            if(ptr!=NULL)
                delete ptr;
        }
};

int main () {
    DiagonalMatrix obj;
    obj.create();
    obj.display();
    cout<<"After setting 17 at 4,4\n";
    obj.set(17,4,4);
    obj.display();
    return 0;
}