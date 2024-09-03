/*12. Write a program in C++ to overload
arithmetic assignment operator (+=) in order to add distance value of two objects: md1
and md2 of class my_Distance. While considering the distance value of each object it
must be in terms of meter and centimeter, i.e . int meter and float centimeter. Use two
member functions get_Dist() and show_Dist() for accepting user inputs and displaying
the result, respectively. Use a parameterized constructor and the program should be user
interactive.*/

#include <iostream>
using namespace std;

class my_Distance {
    private:
        int meter;
        float centimeter;

    public:
        my_Distance(int m = 0, float cm = 0.0) : meter(m), centimeter(cm) {}

        void get_Dist() {
            cout << "Enter meters: ";
            cin >> meter;
            cout << "Enter centimeters: ";
            cin >> centimeter;
        }

        void show_Dist() const {
            cout << "Distance: " << meter << " meters and " << centimeter << " centimeters" << endl;
        }

        my_Distance& operator+=(const my_Distance &d) {
            meter += d.meter;
            centimeter += d.centimeter;

            if (centimeter >= 100) {
                meter += int(centimeter) / 100;
                centimeter = int(centimeter) % 100 + (centimeter - int(centimeter));
            }

            return *this;
        }
};

int main() {
    my_Distance md1, md2;

    cout << "Enter the first distance:\n";
    md1.get_Dist();

    cout << "\nEnter the second distance:\n";
    md2.get_Dist();

    md1 += md2;

    cout << "\nTotal combined distance:\n";
    md1.show_Dist();

    return 0;
}