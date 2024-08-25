//5. Write a function template to perform linear search in an array.

#include <iostream>

template <typename T>
void inputArray(T arr[], int size) {
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    int choice;

    std::cout << "Select the type of array:\n";
    std::cout << "1. Integer\n2. Float\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    if (choice == 1) {
        int* intArray = new int[size];
        inputArray(intArray, size);

        int intKey;
        std::cout << "Enter the integer key to search: ";
        std::cin >> intKey;

        int result = linearSearch(intArray, size, intKey);
        if (result != -1) {
            std::cout << "Integer key found at index: " << result+1 << std::endl;
        } else {
            std::cout << "Integer key not found." << std::endl;
        }

        delete[] intArray;
    } else if (choice == 2) {
        float* floatArray = new float[size];
        inputArray(floatArray, size);

        float floatKey;
        std::cout << "Enter the float key to search: ";
        std::cin >> floatKey;

        int result = linearSearch(floatArray, size, floatKey);
        if (result != -1) {
            std::cout << "Float key found at index: " << result+1 << std::endl;
        } else {
            std::cout << "Float key not found." << std::endl;
        }

        delete[] floatArray;
    } else {
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
