/*15. Write a program to create a base class named “circle”. Derive another class “Cylinder”
from it. The program should calculate total surface area of circle and cylinder using the
concept of inheritance. Circle should have data fields i.e. radius or diameter and method
getRadius ( ) should take value of radius from user. Cylinder should have additional data
field i.e. height and additional method getHeight ( ) to assign value of height. Similarly,
area ( ) function calculates area and display ( ) function prints the final area of the created
objects i.e circle and cylinder. (Circle surface area = pi*r*r and cylinder surface area =
2*pi*r*r+2*r*h).*/

#include <iostream>
using namespace std;

const float PI = 3.14159;

class Circle {
protected:
    float radius;

public:
    void getRadius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    float area() const {
        return PI * radius * radius;
    }

    void display() const {
        cout << "Surface area of the circle: " << area() << endl;
    }
};

class Cylinder : public Circle {
private:
    float height;

public:
    void getHeight() {
        cout << "Enter the height of the cylinder: ";
        cin >> height;
    }

    float area() const {
        return 2 * PI * radius * (radius + height);
    }

    void display() const {
        cout << "Surface area of the cylinder: " << area() << endl;
    }
};

int main() {
    Circle circle;
    Cylinder cylinder;

    cout << "For Circle:" << endl;
    circle.getRadius();
    circle.display();

    cout << "\nFor Cylinder:" << endl;
    cylinder.getRadius();
    cylinder.getHeight();
    cylinder.display();

    return 0;
}