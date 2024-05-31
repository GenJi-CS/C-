#include<iostream>
using namespace std;
class Student
{
    private:
        int n;
        char name[30];
        long int bookId[];
    public:
    void getName();
    void setName();
    void issueBook();
    void getIssuedBooks();
};

void Student:: getName()
{
    cout<<"Enter your Name:"<<endl;
    cin>>name;
}

void Student:: setName()
{
    cout<<"Welcome "<<name<<" !"<<endl;
    cout<<"Enter the number of books you want to borrow:",cin>>n;
}

void Student::issueBook()
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the book id:",cin>>bookId[i];
    }
}

void Student::getIssuedBooks()
{
    cout<<"\n\tStudent Name:"<<name<<endl;
    cout<<"Issued books:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<bookId[i]<<endl;
    }
}

int main()
{
    Student s1;
    s1.getName();
    s1.setName();
    s1.issueBook();
    s1.getIssuedBooks();
    cout<<"Library log closed!";
    return 0;
}