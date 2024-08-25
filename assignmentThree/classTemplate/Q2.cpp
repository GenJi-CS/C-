//5. Write a function template to perform linear search in an array.

#include <iostream>

template <typename T>
class BubbleSort {
private:
    T* array;
    int size;

public:
    BubbleSort(int n) {
        size = n;
        array = new T[size];
    }

    ~BubbleSort() {
        delete[] array;
    }

    void inputArray() {
        std::cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i) {
            std::cin >> array[i];
        }
    }

    void sort() {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - 1 - i; ++j) {
                if (array[j] > array[j + 1]) {
                    std::swap(array[j], array[j + 1]);
                }
            }
        }
    }

    void printArray() const {
        for (int i = 0; i < size; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    char type;
    std::cout << "Enter 'i' for integer or 'f' for float: ";
    std::cin >> type;

    if (type == 'i') {
        BubbleSort<int> sorter(size);
        sorter.inputArray();
        std::cout << "Before sorting:";
        sorter.printArray();
        sorter.sort();
        std::cout << "Sorted integer array: ";
        sorter.printArray();
    } else if (type == 'f') {
        BubbleSort<float> sorter(size);
        sorter.inputArray();
        std::cout << "Before sorting:";
        sorter.printArray();
        sorter.sort();
        std::cout << "Sorted float array: ";
        sorter.printArray();
    } else {
        std::cout << "Invalid type selected!" << std::endl;
    }

    return 0;
}
