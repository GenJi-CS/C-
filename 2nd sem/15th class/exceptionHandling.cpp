#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;

    cout << "Dividend(Operand 1)";
    cin >> a;
    cout << "Divisor(Operand 2)";
    cin >> b;

    float result = a / b ;

    cout << a << " / " << b << " = " << result <<endl;

    return 0;
}