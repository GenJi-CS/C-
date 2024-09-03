/*13. Create a class that includes a data member that holds a ‘serial number’ for each object
created from the class. That is, the first object created will be numbered 1, the second 2,
and so on. When each object is created, its constructor can examine this count member
variable to determine the appropriate serial number for the new object.
Then write a main() program that creates three objects and queries each one about its
serial number. It should respond to Object number: 1, Object number :2 and so on.*/

#include <iostream>
using namespace std;

class SerialNumber {
private:
    static int count;
    int serial;

public:
    SerialNumber() {
        serial = ++count;
    }

    void showSerialNumber() const {
        cout << "Object number: " << serial << endl;
    }
};

int SerialNumber::count = 0;

int main() {
    SerialNumber obj1, obj2, obj3,obj4,obj5;

    obj1.showSerialNumber();
    obj2.showSerialNumber();
    obj3.showSerialNumber();
    obj4.showSerialNumber();
    obj5.showSerialNumber();

    return 0;
}