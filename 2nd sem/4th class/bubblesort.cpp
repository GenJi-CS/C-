#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
int main()
{
    int n;
    cout << "Enter the number of elements for array: " , cin >> n ;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the " << i+1 << " Element of the array:", cin >> a[i];
    }
    bubbleSort(a,n);
    printArray(a,n);
    return 0;
}