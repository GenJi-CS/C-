#include<iostream>
using namespace std;

class Student
{
    private:
        char name[20],regd[10],branch[10];
        int sem;
    
    public:
        void input();
        void display();
};

void Student::input()
{
    cout<<"Enter name:",cin>>name;
    cout<<"Enter regd:",cin>>regd;
    cout<<"Enter branch:",cin>>branch;
    cout<<"Enter sem:",cin>>sem;
}

void Student::display()
{
    cout<<"\n\nName:"<<name;
    cout<<"\nREGD:"<<regd;
    cout<<"\nBranch:"<<branch;
    cout<<"\nSem:"<<sem;
}

int main()
{
    Student s1;
    s1.input();
    s1.display();
    return 0;
}