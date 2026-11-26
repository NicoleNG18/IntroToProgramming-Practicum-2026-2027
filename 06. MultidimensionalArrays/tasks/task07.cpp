#include <iostream>

const unsigned int MAX_ROWS = 128;

void getMatrix(double matrix[][MAX_ROWS], unsigned rows, unsigned cols) {
    std::cout<<"\n";
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            std::cout << "Enter matrix [" << i << "] [" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

bool check (double matrix[][MAX_ROWS], unsigned rows, unsigned cols){
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[rows - 1 - i][cols - 1 - j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    double matrix1[MAX_ROWS][MAX_ROWS];
    unsigned rows;
    std::cout << "Enter number of rows of matrix: ";
    std::cin >> rows;
    unsigned cols;
    std::cout << "Enter number of cols of matrix: ";
    std::cin >> cols;
    std::cout << "\nEnter matrix:";
    getMatrix(matrix1, rows, cols);
    std::cout<<"\nAnswer: " << std::boolalpha<<check(matrix1, rows, cols);
}
