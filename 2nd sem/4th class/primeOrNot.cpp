#include<iostream>
using namespace std;
class check{
    public:
    int a;
    int num(){
        int i;
        for(i=2;i<(this->a);i++)
        {
            if(a%i==0)
            {
                cout <<this->a<<" is composite"<<endl;
                return 0;
            }
        }
        cout<<this->a<<" is prime."<<endl;
    }
};
int main(){
    class check nu;
    cout<<"Enter a number"<<endl;
    cin>>nu.a;
    nu.num();
    return 0;
}