#include<iostream>
using namespace std;

class Person
{
    protected:
        int id;
        char name[20];
    public:
        void display()
        {
            cout<<"ID:"<<id<<"\n";
            cout<<"NAME:"<<name;
        }
};

class Teacher : public Person
{
    public:
        void teacher()
        {
            cout<<"Enter name for teacher: ",cin>>name;
            cout<<"Enter id of the teacher: ",cin>>id;
        }
};

class Student : public Person
{
    public:
        void student()
        {
            cout<<"Enter name for student: ",cin>>name;
            cout<<"Enter id of the student: ",cin>>id;
        }
};

int main()
{
    int n;
    cout<<"1. For teacher."<<endl;
    cout<<"2. For student."<<endl;
    cout<<"Choose your option: ",cin>>n;
    if(n==1)
    {
        Teacher t1;
        t1.teacher();
        t1.display();
    }
    else if(n==2)
    {
        Student t1;
        t1.student();
        t1.display();
    }
    else cout<<"Wrong option choosed.";
    return 0;
}