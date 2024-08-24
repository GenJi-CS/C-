/*4. Write a program with the following:
a. A function to read double type numbers from the keyboard.
b. A function to calculate the division of these two numbers.
c. A try block to throw an exception when a wrong type of data is entered.
d. A try block to detect and throw an exception if the condition “divide-by-zero”
occurs.
e. Appropriate catch block to handle the exceptions thrown.*/

#include <iostream>
#include <stdexcept>
#include <string>

bool checkForFloat(std::string s)
{
    if (s.empty()) {
        return false;
    }

    bool has_decimal_point = false;
    bool has_digit_before = false;
    bool has_digit_after = false;

    size_t start = 0;
    if (s[0] == '+' || s[0] == '-') {
        start = 1;
    }

    for (size_t i = start; i < s.size(); ++i) {
        char c = s[i];
        if (c == '.') {
            if (has_decimal_point) {
                return false;
            }
            has_decimal_point = true;
        } else if (std::isdigit(c)) {
            if (has_decimal_point) {
                has_digit_after = true;
            } else {
                has_digit_before = true;
            }
        } else {
            return false;
        }
    }
    return has_digit_before && (has_digit_after || !has_decimal_point);
}

double getFloat()
{
    std::string num;
    std::cout << "Enter the number: ",std::cin >> num;
    if( checkForFloat(num) )
    {
        float x = std :: stof(num);
        return x;
    }
    else
    {
        throw std::runtime_error("Not a float number.");
    }    
}

float Division(float num, float den)
{
    if(den==0)
    {
        throw std::runtime_error("Math error: Attempted to divide by 0");
    }

    return (num/den);

}

int main()
{
    try
    {
        float a = getFloat();
        float b = getFloat();

        try
        {
            float result = Division(a,b);
            std::cout << "The quotient is " << result << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}