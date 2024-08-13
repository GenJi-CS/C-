#include<iostream>
#include<stdexcept>
using namespace std;

float Division(float num, float den)
{
    if(den==0)
    {
        throw runtime_error("Math error: Attempted to divide by 0");
    }

    return (num/den);

}

int main()
{
    float numerator, demoinator, result;
    numerator = 12.5;
    demoinator = 0;

    try
    {
        result = Division(numerator,demoinator);

        cout << "The quotient is " << result <<endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}