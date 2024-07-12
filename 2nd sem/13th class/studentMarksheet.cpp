//multiple inheritance

#include<iostream>
using namespace std;

class Student
{
    int roll;
    char name[20];
    char add[20];
    char city[20];

    public:
        Student()
        {
            cout<<"Welcome to the student information system"<<endl;
        }

        void getData()
        {
            cout<<"Enter the student roll no:",cin>>roll;
            cout<<"Enter the student name:",cin>>name;
            cout<<"Enter the student address:",cin>>add;
            cout<<"Enter the student city:",cin>>city;
        }

        void putData()
        {
            cout<<"\nThe student roll no:"<<roll;
            cout<<"\nThe student name:"<<name;
            cout<<"\nThe student city:"<<city;
        }
};

class Marks: public Student
{
    int sub1;
    int sub2;
    int sub3;
    int per;

    public:
        void input()
        {
            getData();
            cout<<"Enter the marks of 1st subject:",cin>>sub1;
            cout<<"Enter the marks of 2nd subject:",cin>>sub2;
            cout<<"Enter the marks of 3rd subject:",cin>>sub3;
        }
        void output()
        {
            putData();
            cout<<"\nMarks1:"<<sub1;
            cout<<"\nMarks2:"<<sub2;
            cout<<"\nMarks3:"<<sub3;
        }
        void calculate()
        {
            per = (sub1 + sub2 + sub3) / 3 * 100;
            cout<<"\nTotal percentage:"<<per;
        }
};

int main()
{
    Marks m1;
    int ch;
    int count=0;
    do
    {
        cout<<"\n1.Input data\n2.Output data\n3.Calculate percentage\n4.Exit";
        cout<<"\nEnter your choice:",cin>>ch;
        switch(ch)
        {
            case 1:
                m1.input();
                count++;
                break;
            case 2:
                m1.output();
                count++;
                break;
            case 3:
                m1.calculate();
                count++;
                break;
            default:
                cout<<"Wrong Input!";
        }
    } while (ch!=4);
}