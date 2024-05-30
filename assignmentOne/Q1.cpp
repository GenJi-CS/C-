//1. WAP to calculate the sum of n natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "Enter a number:";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout << "The sum of all natural numbers to " << n <<" is " << sum;
    return 0;
}