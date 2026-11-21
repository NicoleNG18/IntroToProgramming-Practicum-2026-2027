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
void multiply (double matrixMultiplication[][MAX_ROWS], double matrix1[][MAX_ROWS], double matrix2[][MAX_ROWS], unsigned i, unsigned j, unsigned cols){
    for (unsigned k = 0; k < cols; k++) {
        matrixMultiplication[i][j] = matrixMultiplication[i][j] + matrix1[i][k]*matrix2[k][j]; 
    }
}

void getMultiplication(double matrixMultiplication[][MAX_ROWS], double matrix1[][MAX_ROWS], double matrix2[][MAX_ROWS], unsigned cols, unsigned cols2){
    for (unsigned i = 0; i < cols; i++) {
        for (unsigned j = 0; j < cols2; j++) {
            matrixMultiplication[i][j] = 0;
            multiply(matrixMultiplication, matrix1, matrix2, i, j, cols);
        }
    }
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
    double matrix1[MAX_ROWS][MAX_ROWS];
    unsigned rows;
    std::cout << "Enter number of rows of matrix 1: ";
    std::cin >> rows;
    unsigned cols;
    std::cout << "Enter number of cols of matrix 1: ";
    std::cin >> cols;
    std::cout << "\nEnter matrix 1:";
    getMatrix(matrix1, rows, cols);

    double matrix2[MAX_ROWS][MAX_ROWS];
    std::cout << "\nEnter number of rows of matrix 2: " <<cols;
    unsigned cols2;
    std::cout << "\nEnter number of cols of matrix 2: ";
    std::cin >> cols2;
    std::cout << "\nEnter matrix 2:";
    getMatrix(matrix2, cols, cols2);
    if(rows==cols2){        
        double multiplication [MAX_ROWS][MAX_ROWS];
        getMultiplication(multiplication, matrix1, matrix2, cols, cols2);
        std::cout<< "\nMultiplcation matix (" << rows << "X" <<cols2<< "):\n";
        printMatrix(multiplication, rows, cols2);
    }
    else{
        std::cout<<"\nThese matrices cannot be multipled!\n\nMatrix 1: \n";
        printMatrix(matrix1, rows, cols);
        std::cout<<"\nMatrix 2:\n";
        printMatrix(matrix2, cols, cols2);
    }
}
