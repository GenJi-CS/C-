#include<iostream>
using namespace std;
class math{
	private:
		float a,b;
	public:
		void input();
		void add();
		void multiply();
};
void math::input()
{
	cout<<"Enter 1st number";
	cin>>a;
	cout<<"Enter 2nd number";
	cin>>b;
}
void math::add()
{
	float x=a+b;
	cout<<"Addition:"<<x;
}
void math::multiply()
{
	float x=a*b;
	cout<<"\nMultiplication:"<<x;
}
int main(){
	math m;
	m.input();
	m.add();
	m.multiply();
	return 0;
}
