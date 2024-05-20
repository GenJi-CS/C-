#include<iostream>
using namespace std;
class student
{
	private:
		char name[20],regd[10],dept[10];
		int sem;
	public:
		void input();
		void display();
};
void student::input()
{
	cout<<"Enter name";
	cin>>name;
	cout<<"Enter Regdno:";
	cin>>regd;
	cout<<"Enter Department:";
	cin>>dept;
	cout<<"Enter sem:";
	cin>>sem;
}
void student::display()
{
	cout<<"\nName:"<<name;
	cout<<"\nRegd no:"<<regd;
	cout<<"\nDepartment:"<<dept;
	cout<<"\nSem:"<<sem;
}
int main()
{
	student s;
	s.input();
	s.display();
}
