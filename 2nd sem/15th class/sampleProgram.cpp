#include<iostream>
using namespace std;

int main()
{
    int studentAge;
    try
    {
        cout << "Student Age: ";
        cin >> studentAge;

        if(studentAge < 0)
                    throw "Positive Number Required!";

            cout << "\nStudent Age: " << studentAge << "\n";
    }
    catch(const char* msg)
    {
        cout << "Error: " << msg;
    }
    cout<<"\n";
    return 0;
}