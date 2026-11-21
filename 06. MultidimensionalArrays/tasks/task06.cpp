#include <iostream>

const unsigned int MAX_ROWS = 128;

void getMatrix(double matrix[][MAX_ROWS], unsigned rows, unsigned cols) {
    std::cout << "\n";
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            std::cout << "Enter matrix [" << i << "] [" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

void transpose(const double matrix[][MAX_ROWS], double transposed[][MAX_ROWS], unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void reverseColumns(double matrix[][MAX_ROWS], unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols / 2; j++) {
            double temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols - 1 - j];
            matrix[i][cols - 1 - j] = temp;
        }
    }
}

void rotate90(const double matrix[][MAX_ROWS], double rotated[][MAX_ROWS], unsigned rows, unsigned cols) {
    transpose(matrix, rotated, rows, cols);
    reverseColumns(rotated, cols, rows);
}

void printMatrix(const double matrix[][MAX_ROWS], unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    double matrix[MAX_ROWS][MAX_ROWS];
    unsigned rows;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    unsigned cols;
    std::cout << "Enter number of cols: ";
    std::cin >> cols;
    std::cout << "\nEnter matrix:";
    getMatrix(matrix, rows, cols);
    double rotated[MAX_ROWS][MAX_ROWS];
    rotate90(matrix, rotated, rows, cols);
    std::cout << "\nRotated matrix (" << cols << "X" << rows << "):\n";
    printMatrix(rotated, cols, rows);
}
