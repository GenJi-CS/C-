#include <iostream>
using namespace std;

template <class T>
class Bubblesort
{
    private:
        int x;
        T numbers[];

    public:
        Bubblesort(T x) : int(x) {
            int x = x;
            T numbers[x];
        }

        void getArray()
        {
            for(int i=0,i<x;i++)
            {
                cout << "Enter the " << i+1 << "element of the array: ",cin >> numbers[i],cout <<endl;
            }
        }

        void printArray()
        {
            for(int i=0;i<x;i++)
            {
                cout << numbers[i] << "\t" << endl;
            }
        }
};

int main()
{
    int choice;
    cout << "Choose 1 for integers.\nChoose 2 for float." << endl;
    cout << "Enter your choice: ", cin >> choice , cout << endl;

    int x;
    cout << "Enter the number of elements in array: " ,cin >> x, cout << endl;
    
    switch (choice)
    {
        case 1:
            Bubblesort<int> obj1(x);
            obj1.getArray();
            cout << "Before bubblesort: " << endl;
            obj1.printArray();
            
            break;
        case 2:
            Bubblesort<float> obj1(x);
            break;
        default:
            cout << "Invalid input." << endl;
            return 0;
    }
}