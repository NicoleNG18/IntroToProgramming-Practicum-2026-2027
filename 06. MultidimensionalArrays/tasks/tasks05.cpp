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


void printMatrix(const double matrix[][MAX_ROWS], unsigned rows, unsigned cols) {
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            std::cout << matrix[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            std::cout << matrix[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                std::cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                std::cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    double matrix1[MAX_ROWS][MAX_ROWS];
    unsigned rows;
    std::cout << "Enter number of rows of matrix: ";
    std::cin >> rows;
    unsigned cols;
    std::cout << "Enter number of columns of matrix: ";
    std::cin >> cols;
    std::cout << "\nEnter matrix:";
    getMatrix(matrix1, rows, cols);
    std::cout<<"\nMatrix:\n";
    printMatrix(matrix1, rows, cols);
}
