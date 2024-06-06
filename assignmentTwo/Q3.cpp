/*Question 3
A rectangle can be deﬁned by two points (top-left and bottom-right or top-right and bottom-left). Implement a class called Rectangle 
using the Point class we saw during the lecture. 

The Rectangle class must have the following methods:
void setPoints(const Point &, const Point &)
void getDimensions(double &, double &)
double perimeter()

Write the main() function to check if your implementation works correctly.*/
#include<iostream>
using namespace std;
class rect
{
    private:
        int x,y,x1,y1;
        double length,breadth;
    
    public:
        void setPoints()
        {
            cout<<"Enter either topLeft and bottomRight or topRight and bottomLeft dimensions!"<<endl;
            cout<<"Enter the dimesion of 1st point: ",cin>>x>>y;
            cout<<"Enter the dimension of 2nd point: ",cin>>x1>>y1;
        }
        void getDimensions()
        {
            if((x>x1 && y>y1) || (x<x1 && y<y1))
            {
                if(x<x1)
                {
                    length=x1-x;
                    breadth=y1-y;
                }
                else
                {
                    length=x-x1;
                    breadth=y-y1;
                }
            }
        }
        double perimeter()
        {
            return 2*(length+breadth);
        }
};

int main()
{
    rect R1;
    R1.setPoints();
    R1.getDimensions();
    cout<<"The perimeter of the given rectangle is: "<<R1.perimeter()<<" Units."<<endl;
    return 0;
}