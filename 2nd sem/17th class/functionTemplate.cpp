#include <iostream>

using namespace std;

template<typename T>
T max_value (T a, T b)
{
    return (a>b)?a:b;
}

int main()
{
    cout << "Max of 5 and 10: " << max_value(5,10) << endl;
    cout << "Max of 8.5 and 7.2: " << max_value(8.5,7.2) << endl;
    return 0;
}