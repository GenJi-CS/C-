#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char *myCharPointer = new char;
    char *myCharArray = new char[30];
    strcpy(myCharArray,"This is a basic example\n");
    *myCharPointer = 'a';
    cout << myCharArray << *myCharPointer;
    delete myCharPointer;
    delete [] myCharArray;
    return 0;
}