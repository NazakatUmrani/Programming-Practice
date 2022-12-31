#include<bits/stdc++.h>

using namespace std;

class Box{
    int l, b, h;
    public:
        Box(){
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int a, int b1, int c){
            l = a;
            b = b1;
            h = c;
        }
        Box(const Box &obj){
            this->l = obj.l;
            this->b = obj.b;
            this->h = obj.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth (){
            return b;
        }
        int getHeight (){
            return h;
        }
        long long CalculateVolume(){
            long long x = (long long)l*b*h;
            return x;
        }
        bool operator <(const Box &obj){
            bool condition = false;
            if (this->l < obj.l) {
                condition = true;
            }
            else if (this->b < obj.b && this->l == obj.l) {
                condition = true;
            }
            else if(this->h < obj.h  && this->b == obj.b  && this->l == obj.l){
                condition = true;
            }
            return condition;
        }
        //Overload operator << as specified
        friend ostream& operator<< (ostream& out, Box& obj){
            out << obj.l << " " << obj.b << " " << obj.h;
            return out;
        }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
