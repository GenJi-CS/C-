#include<iostream>
using namespace std;

class Check
{
    private:
        int i;

    public:
        Check() : i(10){}
        
        Check operator -- ()
        {
            Check temp;
            temp.i = --i;
            return temp;
        }

        Check operator -- (int)
        {
            Check temp;
            temp.i = i--;
            return temp;
        }

        void Display()
        {
            cout<<"i= "<<i<<endl;
        }
};

int main()
{
    Check obj,obj1;
    obj.Display();

    obj1.Display();

    //Opertor function is called, only then value of obj is assigned to obj1
    obj1 = --obj;
    obj.Display();
    obj1.Display();

    //Assigns values of obj to obj1, only then operator function is called
    obj1 = obj--;
    obj.Display();
    obj1.Display();

    return 0;
}