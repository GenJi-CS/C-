#include<iostream>
#include<stdexcept>

using namespace std;

//Function to perform division
int divide (int numerator, int denominator)
{
    try
    {
        if(denominator == 0)
        {
            //Throw a runtime_error if attempting to divide by zero
            throw runtime_error("Division by zero!");
        }
        //Perform the division and return the result
        return numerator/denominator;
    }
    catch(const exception& e)
    {
        cout << "Caught excpetion in divide(): " << e.what() << endl;
        //rethrow the caught exception to handle it at a higher level
        throw;
    }
}

//Function to caluculate the sum of two numbers
int calculateSum(int a, int b)
{
    try
    {
        if(a<0 || b<0){
            //throw an invalid_argument exception for negative numbers
            throw invalid_argument("Negative numbers not allowed!");
        }
        //calculate and return the sum
        return a + b;
    }
    catch(const exception& e)
    {
        cout << "Caught exception in calculateSum(): " << e.what() << endl;
        //rethrow the caught exception to handle it at a higher level
        throw;
    }   
}

int main()
{
    try
    {
        //Calculate the sum of 10 and the result of dividing by 20 by 2
        int result = calculateSum(10,divide(20,2));
        cout << "Result: " << result << endl;

        //Attempt to divide by zero, trigerring an exception
        int invalidResult = calculateSum(5,divide(10,0));
        cout << "Invalid Result: " << invalidResult << endl;
    }
    catch(const exception& e)
    {
        cout << "Caught exception in main: " << e.what() << '\n';
        //handle the exception at highest level
    }
    return 0;
}