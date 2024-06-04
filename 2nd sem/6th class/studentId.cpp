#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        char id[10];
        char stream[10];
        int roll;

    public:
        void input()
        {
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter stream: ", cin>>stream;
            cout<<"Enter id: ", cin>>id;
            cout<<"Enter roll: ",cin>>roll;
        }
        void display()
        {
            cout<<"\n\nName of Student: " <<name <<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Roll no: "<<roll<<endl;
            cout<<"Stream: "<<stream<<endl;
        }
};

int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}