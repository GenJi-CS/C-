#include<iostream>
using namespace std;

class Base //single base class
{
    public:
        int x;
        void getdata()
        {
            cout<<"Enter the value of x= ",cin>>x;
        }
};

class Derive : public Base //single derived class
{
    private:
        int y;
    public:
        void readdata()
        {
            cout<<"Enter the value of y= ",cin>>y;
        }
        void product()
        {
            cout<<"Product= "<<x*y;
        }
};

int main()
{
    Derive a;
    a.getdata();
    a.readdata();
    a.product();
    return 0;
}