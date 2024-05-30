//3. WAP to find largest element of an array.
#include<iostream>
using namespace std;
int greatest(int arr[],int* n)
{
    int great=0;
    for(int i=0;i<*n;i++)
    {
        if (great<arr[i])
        {
            great=arr[i];
        }
    }
    return great;
}
int main()
{
    int n;
    cout << "Enter the number of elements for array: " ;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the " << i+1 << " Element of the array:", cin >> a[i];
    }
    int great=greatest(a,&n);
    cout << endl << "The greatest number in that array is: " << great;
    return 0;
}