//9. Write a program to overload the operator * and find the multiplication of two matrices M1 and M2.

#include <iostream>

class Matrix {
    private:
        int rows, cols;
        int** data;

    public:
        Matrix(int r, int c) : rows(r), cols(c) {
            data = new int*[rows];
            for (int i = 0; i < rows; ++i) {
                data[i] = new int[cols];
            }
        }

        ~Matrix() {
            for (int i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;
        }

        void inputMatrix() {
            std::cout << "Enter the elements of the matrix (" << rows << "x" << cols << "):\n";
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    std::cin >> data[i][j];
                }
            }
        }

        void displayMatrix() const {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    std::cout << data[i][j] << "\t";
                }
                std::cout << "\n";
            }
        }

        Matrix operator*(const Matrix& other) {
            if (cols != other.rows) {
                throw std::invalid_argument("Matrix dimensions do not allow multiplication.");
            }

            Matrix result(rows, other.cols);

            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < other.cols; ++j) {
                    result.data[i][j] = 0;
                    for (int k = 0; k < cols; ++k) {
                        result.data[i][j] += data[i][k] * other.data[k][j];
                    }
                }
            }

            return result;
        }
};

int main() {
    int rows1, cols1, rows2, cols2;

    std::cout << "Enter the number of rows and columns for matrix M1: ";
    std::cin >> rows1 >> cols1;
    Matrix M1(rows1, cols1);
    M1.inputMatrix();

    std::cout << "Enter the number of rows and columns for matrix M2: ";
    std::cin >> rows2 >> cols2;
    Matrix M2(rows2, cols2);
    M2.inputMatrix();

    try {
        Matrix M3 = M1 * M2;
        std::cout << "Resultant Matrix (M1 * M2):\n";
        M3.displayMatrix();
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}