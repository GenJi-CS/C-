//2. WAP to check wheather a number is prime or not.
#include<iostream>
using namespace std;
int num(int a)
{
        int i;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                cout <<a<<" is composite"<<endl;
                return 0;
            }
        }
        cout<<a<<" is prime."<<endl;
    }
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    num(a);
    return 0;
}