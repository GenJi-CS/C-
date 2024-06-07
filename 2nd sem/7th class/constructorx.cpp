#include<iostream>
using namespace std;

class Counter
{
    private:
        int count;
    
    public:
        Counter() //constructor
        {
            count=0;
        }

        void incCount()
        {
            count++;
        }

        int getCount()
        {
            return count;
        }
};

int main()
{
    Counter c1;
    cout<<"\nBefore calling Counter Function, Count= ";
    cout<<c1.getCount();

    c1.incCount();
    cout<<"\n\nAfter calling Counter Function, Count= ";
    cout<<c1.getCount();
    return 0;
}