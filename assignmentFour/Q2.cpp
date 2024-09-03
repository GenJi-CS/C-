/*10. Suppose that the father and mother of a daughter have monthly income Rs.70, 000.00 and
Rs. 60, 000.00 respectively. Their daughter’s monthly expense for education is a total of
5% of the father’s income and 7% of the mother’s income. How much money is needed
for one year of education for the daughter? Using a suitable type of inheritance best
matching this scenario, write a program in C++ in order to solve the problem*/

#include <iostream>

class Father
{
    protected:
        float salary;
    public:
        Father()
        {
            std::cout<<"Enter salary of father: "<<std::endl;
            std::cin>>salary;
        }
};

class Mother
{
    protected:
        float salaryx;
    public:
        Mother()
        {
            std::cout<<"Enter salary of mother: "<<std::endl;
            std::cin>>salaryx;
        }
};

class Daughter : protected Father, protected Mother
{
    private:
        float monthlyExp = 0;

    public:
        Daughter()
        {
            monthlyExp = (0.05)*salary + (0.07)*salaryx;
        }
        float expenseCalc(int months)
        {
            return monthlyExp*months;
        }
};

int main()
{
    Daughter dx;
    int months;
    std::cout << "Enter the months for the expenses to be calculated: " <<std::endl;
    std::cin>>months;
    std::cout<<"The expenses of the daughter for " << months << " months is " << dx.expenseCalc(months) << " Rs." <<std::endl;
}