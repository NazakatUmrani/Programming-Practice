#include <iostream>
using namespace std;
template <class T>
class Arithmatic{
    private:
        T a;
        T b;
    public:
        Arithmatic(T a, T b){
            this->a = a;
            this->b = b;
        }
        T add(){return a+b;}
        T subtract(){return a-b;}
        T multiply(){return a*b;}
        T divide(){return a/b;}
};

int main () {
    Arithmatic<float> obj(1,3.9);
    cout << obj.add() << endl;
    return 0;
}