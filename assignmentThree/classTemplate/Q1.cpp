/*4. Write a class template that shows the working of a basic calculator 
(addition, subtraction, division and multiplication).*/

#include <iostream>

template <typename T>
class Calculator
{
    private:
        T num1;
        T num2;
        int choice;

    public:
        Calculator() {}
        
        void getInput()
        {
            std::cout << "Enter the 1st number: ", std::cin >> num1;
            std::cout << "Enter the 2nd number: ", std::cin >> num2;
        }
        
        void displayMenu()
        {
            std::cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division" << std::endl;
            std::cout << "Enter your choice: ",std::cin >> choice,std::cout << std::endl;
        }
        void choiceMade()
        {
            switch(choice)
            {
                case 1:
                    std::cout << num1 << " + " << num2 << " = " << addition() << std::endl;
                    break;
                
                case 2:
                    std::cout << num1 << " - " << num2 << " = " << subtraction() << std::endl;
                    break;
                
                case 3:
                    std::cout << num1 << " * " << num2 << " = " << multiplication() << std::endl;
                    break;

                case 4:
                    std::cout << num1 << " / " << num2 << " = " << division() << std::endl;
                    break;

                default:
                    std::cout << "Invalid Input!";
            }
        }
        T addition() {return num1 + num2;}
        T subtraction() {return num1 - num2;}
        T multiplication() {return num1 * num2;}
        T division() {return num1/num2;}
};

int main() {

    char type;
    std::cout << "Enter 'i' for integer or 'f' for float: ";
    std::cin >> type;

    if (type == 'i') {
        Calculator<int> calc;
        calc.getInput();
        calc.displayMenu();
        calc.choiceMade();
    } else if (type == 'f') {
        Calculator<float> calc;
        calc.getInput();
        calc.displayMenu();
        calc.choiceMade();
    } else {
        std::cout << "Invalid type selected!" << std::endl;
    }

    return 0;
}