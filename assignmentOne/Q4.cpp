//4. WAP to access the largest element of an array using pointers.
#include<iostream>
using namespace std;
int greatest(int arr[])
{
    int *p=&arr[0];
    for(int i=0;i<5;i++)
    {
        if (*p<arr[i])
        {
            *p=arr[i];
        }
    }
    return *p;
}
int main()
{
    int a[5]={21,32,43,12,11};
    int p;
    p=greatest(a);
    cout << endl << "The greatest number in that array is: " << p;
    return 0;
}