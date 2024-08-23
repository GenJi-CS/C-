#include <iostream>
using namespace std;

class Polygon
{
    protected:
        int width, height;

    public:
        void set_values (int a,int b)
        {
            width = a;
            height = b;
        }
};

class Recatangle : public Polygon
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
            return width * height/2;
        }
};

int main()
{
    Recatangle rect;
    Triangle tgrl;

    Polygon * ppoly1 = &rect;
    Polygon * ppoyl2 = &tgrl;

    ppoly1-> set_values(4,5);
    ppoyl2-> set_values(4,5);

    cout << rect.area() << endl;
    cout << tgrl.area() << endl;

    return 0;
}