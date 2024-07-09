#include<iostream>
using namespace std;

class A //single base class
{
    public:
        int a;
        void getData1()
        {
            cout<<"Enter value of A: ",cin>>a;
        }
};

class B : public A //dervie class from base class
{
    public:
        int b;
        void getData2()
        {
            cout<<"Enter value of B: ",cin>>b;
        }
};

class C : public B //derive class from derive1 class
{
    private:
        int c;

    public:
        void getData3()
        {
            cout<<"Enter value of C: ",cin>>c;
        }

        //funtion to print sum
        void sum()
        {
            int ans = a + b + c;
            cout<<"Sum: "<<ans;
        }
};

int main()
{
    C c1;
    c1.getData1();
    c1.getData2();
    c1.getData3();
    c1.sum();
    
    return 0;
}