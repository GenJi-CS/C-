#include<iostream>
using namespace std;
class check{
    public:
    float a;
    int fah(){
        cout << "In celcius:" << a <<endl;
        cout << "In fahrenheit" << ((9.0/5.0)*a+32) << endl;
        cout << "In kelvin:" << (a+273) << endl;
    }
};
int main(){
    class check nu;
    cout<<"Enter in Celcius:"<<endl;
    cin>>nu.a;
    nu.fah();
    return 0;
}