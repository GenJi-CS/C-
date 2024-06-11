#include<iostream>
using namespace std;

class stu
{
    private:
        char name[20],add[20];
        int roll,zip;

    public:
        stu(); //Constructor
            ~stu(); //Destructor
        void read();
        void disp();
};

stu :: stu()
{
    cout<<"\nThis is Student Details constructor called......."<<endl;
}

void stu :: read()
{
    cout<<"Enter the student name: ";
    cin>>name;
    cout<<"Enter the student roll no: ";
    cin>>roll;
    cout<<"Enter the student address: ";
    cin>>add;
    cout<<"Enter the ZipCode: ";
    cin>>zip;
}

void stu :: disp()
{
    cout<<"\nThe Entered Student Details are shown below:  \n";
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll no: "<<roll<<endl;
    cout<<"Address is: "<<add<<endl;
    cout<<"ZipCode: "<<zip<<endl;
}

stu :: ~stu()
{
    cout<<"\n\nStudent Details is Closed.......";
}

int main()
{
    stu stu1;
    stu1.read();
    stu1.disp();
    return 0;
}