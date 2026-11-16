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

void rotateMatrix(double matrix[][MAX_ROWS], unsigned rows, unsigned cols)
{
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = i+1; j < cols; j++){
            double temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols/2; j++){
            double temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols-1-j];
            matrix[i][cols-1-j] = temp;
        }
    }


}

void printMatrix(const double matrix[][MAX_ROWS], unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    
}

int main() {
    double matrix1[MAX_ROWS][MAX_ROWS];
    unsigned rows;
    std::cout << "Enter number of rows of matrix: ";
    std::cin >> rows;
    std::cout << "\nEnter matrix:";
    getMatrix(matrix1, rows, rows);
    std::cout<<"\nMatrix 90 degrees:\n";
    rotateMatrix(matrix1, rows, rows);
    printMatrix(matrix1, rows, rows);
}
