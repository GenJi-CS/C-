#include <iostream>
using namespace std;

class Base
{
    public:
        void show()
        {
            cout << "show function from base class" << endl;
        }
};

class Derive1 : public Base
{
    public:
        void show()
        {
            cout << "show function from Derive1 class" << endl;
        }
};

class Derive2 : public Base
{
    public:
        void show()
        {
            cout << "show function from Derive2 class" << endl;
        }
};

int main()
{
    Derive1 dv1;
    Derive2 dv2;
    Base *ptr; //pointer to base class
    ptr = &dv1; //put address of dv1 in pointer pr
    ptr->show();
    ptr = &dv2;
    ptr->show();
    return 0;
}