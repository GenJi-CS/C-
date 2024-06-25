#include<iostream>
using namespace std;

class Person
{
    protected:
        long id;
        string name;

    public:
        string getName() const
        {
            return name;
        }
};

class Student : public Person
{
    private:
        string group;
        string batch;
        
    public:
        void print() const
        {
            cout << name << ":" << group << "\n";
        }
};

int main()
{
    Student s;
    s.print();
    s.getName();
    return 0;
}