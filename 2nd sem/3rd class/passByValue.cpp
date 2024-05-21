#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
 int c;
 c=*a;
 *a=*b;
 *b=c;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Before Swapping: a="<<a<<"\tb="<<b<<endl;
    swap(&a,&b);
    cout<<"After Swapping: a="<<a<<"\tb="<<b<<endl;
}