#include<iostream>
using namespace std;

class A
{
    public:
        int x;
        
        void getx()
        {
            cout<<"Enter value of x: ",cin>>x;
        }
};

class B
{
    public:
        int y;
        
        void gety()
        {
            cout<<"Enter value of y: ",cin>>y;
        }
};

class Sum : public A, public B
{
    public:
        void sum()
        {
            cout<<"The sum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
        }
};

int main()
{
    Sum s;
    s.getx();
    s.gety();
    s.sum();
    return 0;
}