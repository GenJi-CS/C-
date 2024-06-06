/*Question 1
Implement a class called Student with the descriptions as below:
Data members:
Name of the student
Array of the ID of the books the student has borrowed
Member functions:
getName() returns the name of the student
setName(string) sets the name of the student
issueBook(long) adds the ID of the book borrowed by the student to the array of borrowed books’ ID
getIssuedBooks() returns the IDs of the borrowed books*/
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

void Student:: setName()
{
    cout<<"Enter your Name:"<<endl;
    cin>>name;
}

void Student:: getName()
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
    s1.setName();
    s1.getName();
    s1.issueBook();
    s1.getIssuedBooks();
    cout<<"Library log closed!";
    return 0;
}