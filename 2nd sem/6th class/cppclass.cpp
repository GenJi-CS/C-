#include<iostream>
using namespace std;

class Room
{
    public:
        double length;
        double breadth;
        double height;

        double calculateArea()
        {
            return length * breadth;
        }
        double calculateVolume()
        {
            return length * breadth * height ;
        }
};

int main()
{
    Room room1;
    room1.length=42.5;
    room1.breadth=30.8;
    room1.height=19.2;

    cout<<"Area of the room:"<< room1.calculateArea() << "cm^2."<<endl;
    cout<<"Volume of the room:"<< room1.calculateVolume() << "cm^3."<<endl;
}