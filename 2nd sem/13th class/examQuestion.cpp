#include<iostream>
#include<math.h>
using namespace std;

class distancex
{
	private:
		double x;
		double y;
	
	public:
		void getpoints(double x, double y)
		{
			this->x=x;
			this->y=y;
		}
		double Distance(double x,double y)
		{
			double i= this->x-x;
			double j= this->y-y;
			double sum=pow(i,2)+pow(j,2);
			return sqrt(sum);
		}
};

int main()
{
	distancex d1;
	double x,y;
	cout<<"Enter the points for x1 and y1"<<endl;
	cin>>x>>y;
	d1.getpoints(x,y);
	cout<<"Enter the points for x2 and y2"<<endl;
	cin>>x>>y;
	cout<<"The distance between the two points is "<<d1.Distance(x,y)<<endl;
	return 0;
}