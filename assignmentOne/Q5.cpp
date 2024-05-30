//5. Write an interactive program to  convert fahrenheit into celcius (and vice versa).
#include<iostream>
using namespace std;
void celcius()
{
    float c,f;
    cout<<"Enter temp in Celcius:",cin>>c;
    f=(9.0/5.0)*c+32;
    cout<<"The temperature in Fahrenheit is "<<f<<" degF";
}
void fahrenheit()
{
    float c,f;
    cout<<"Enter temp in Fahrenheit:",cin>>f;
    c=(f-32.0)*(5.0/9.0);
    cout<<"The temperature in Celcius is "<<c<<" degC";
}
int main()
{
    int n;
    cout<<"\n\t\t TEMPERATURE \n1.Celius to Fahrenheit\n2.Fahrenheit to Celcius"<<endl;
    cout<<"Choose your option:"<<endl, cin >> n;
    if (n==1 || n==2)
    {
        if(n==1) celcius();
        else fahrenheit();
    }
    else
    {
        cout << "Wrong Input!";
    }
    return 0;
}