#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int cur_idP = 0;
static int cur_idS = 0;
class Person{
    protected:
        string name;
        int age;
    public:
        virtual void putdata(){}
        virtual void getdata(){}
};
class Professor: public Person{
    int publications, cur_id;
    public:
        Professor(){
            cur_idP++;
            cur_id = cur_idP;
        }
        void getdata(){
            cin >> name >> age >> publications;
        }
        void putdata(){
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};
class Student : public Person{
    int marks[6], cur_id;
    public:
        Student (){
            cur_idS++;
            cur_id = cur_idS;
        }
        void getdata(){
            cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
        }
        void putdata(){
            cout << name << " " << age << " " << marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5] << " " << cur_id << endl;
        }
};
int main(){
