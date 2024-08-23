#include <iostream>
using namespace std;

class Test
{
    public: 
        Test(int=0);
        void print() const;

    private:
        int x;
};

Test :: Test(int a) 
{
    x = a;
}

void Test :: print() const
{
    cout << "x is equal to " << x;
    cout << "\n this-> is equal to " << this->x;
    cout << "\n(*this).x is equal to " << (*this).x << endl;
}
int main()
{
    Test testobj1(12) , testobj2(15);
    testobj1.print();
    testobj2.print();
    return 0;
}