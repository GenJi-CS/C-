/*11. An organization has two types of employees: regular and adhoc. Regular employees get a
salary which is basic + DA + HRA where DA is 10% of basic and HRA is 30% of basic.
Adhoc employees are daily wagers who get a salary which is equal to number * wage
where number is number of days worked.

Employee (name eno,salary)
Regular(Basic,salary)
ADHOC(wage, number, days(int n), salary())

(i) Define the classes shown in the following class hierarchy diagram.
(ii) Define the constructors. When a regular employee is created, basic must be a
parameter. When adhoc employee is created, wage must be a parameter.
(iii) Define the destructors.
(iv) Define the member functions for each class. The member function days(int n )
updates salary of the Adhoc employee.
(v) Write a test program to test the classes.*/

#include <iostream>
using namespace std;

class Employee 
{
    public:
        string name;
        float dailySalary;

    Employee() 
    {
        cout << "Enter the name of the employee: ";
        cin >> name;
        cout << "Enter the salary per day for the employee: ", cin >> dailySalary;
    }
    ~Employee()
    {
        cout << "End of program!" << endl;
    }
};

class Regular : public Employee
{
    public:
        float basic = dailySalary*30;
        float salary = basic + (0.1*basic) + (0.3*basic);
        int months;

    Regular()
    {
        cout << "Enter the number of months the employee has been working for: ", cin >> months;
    }
    float calcSalary()
    {
        return salary*months;
    }
};

class ADHOC : public Employee
{
    public:
        int days;
        float wage;
    ADHOC()
    {
        cout << "Enter the number of days the employee has been working for: ", cin >> days;
    }
    float calcWage()
    {
        wage = dailySalary*days;
        return wage;
    }
};

int main()
{
    int choice;
    cout << "1. Regular\n2.ADHOC"<<endl << "Enter choice: ", cin >> choice;
    if(choice == 1) {
        Regular r1;
        cout << "The salary for employee is " << r1.calcSalary() << " Rs." << endl;
    }

    else if(choice == 2) {
        ADHOC a1;
        cout << "The wage for employee is " << a1.calcWage() << " Rs." << endl;
    }
        
        
    else{ 
        cout << "Wrong Input!";
    }
    
    return 0;
}