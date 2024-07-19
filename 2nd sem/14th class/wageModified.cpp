#include<iostream>

class Person
{
    protected:
        std::string name;
        int age;
    
    public:
        Person()
        {
            std::cout<<"default Person"<<std::endl;
        }
        Person(std::string name, int age):name(name),age(age)
        {
            std::cout<<"Param Person"<<std::endl;
        }

        void print() const{
            std::cout<<"Name:"<<name<<" "<<"Age:"<<age<<" ";
        }
};

class Employee
{
    protected:
        std::string employer;
        double wage;
    
    public:
        Employee()
        {
            std::cout<<"default Employee"<<std::endl;
        }
        Employee(std::string employer, double wage):employer(employer),wage(wage)
        {
            std::cout<<"param Employer\n";
        }
        void print() const{
            std::cout<<"Employer:"<<employer<<" Wage:"<<wage<<" ";
        }
};

class Teacher:public Employee, public Person
{
    protected:
        int teachergrade;

    public:
        Teacher()
        {
            std::cout<<"default Teacher"<<std::endl;
        }
        Teacher(std::string name, int age, std::string employer, double wage, int teachergrade):Person(name,age), Employee(employer,wage), teachergrade(teachergrade)
        {
            std::cout<<"param teacher"<<std::endl;
        }
};

int main()
{
    Teacher t("ram",30,"test",12324,4);
    //t.print(); (Error:request for member 'print' is ambiguous)
    t.Employee::print();
    t.Person::print();
    return 0;
}