//virtual members

#include <iostream>
using namespace std;

class Polygon
{
    protected:
        int width, height;

    public:
        void set_values(int a,int b)
        {
            width = a;
            height = b;
        }
        virtual int area()
        {
            return 0;
        }
};

class Rectangle : public Polygon
{
    public:
        int area()
        {
            return width * height;
        }
};

class Triangle : public Polygon
{
    public:
        int area()
        {
            return (width * height / 2);
        }
};

int main()
{
    Rectangle rect;
    Triangle trgl;

    Polygon poly;
    Polygon * ppoyl1 = &rect;
    Polygon * ppoyl2 = &trgl;
    Polygon * ppoyl3 = &poly;

    ppoyl1-> set_values(4,5);
    ppoyl2->set_values(4,5);
    ppoyl3->set_values(4,5);

    cout << ppoyl1->area() << endl;
    cout << ppoyl2->area() << endl;
    cout << ppoyl3->area() << endl;

    return 0;
}