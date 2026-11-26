#include <iostream>

const unsigned int MAX_ROWS = 128;

void getMatrix(double matrix[][MAX_ROWS], unsigned rows) {
    std::cout<<"\n";
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < rows; j++) {
            std::cout << "Enter matrix [" << i << "] [" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

void getSum(double matrixSum[][MAX_ROWS], double matrix1[][MAX_ROWS], double matrix2[][MAX_ROWS], unsigned rows){
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < rows; j++) {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void printMatrix(const double matrix[][MAX_ROWS], unsigned rows) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < rows; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void getSubtract(double matrixSum[][MAX_ROWS], double matrix1[][MAX_ROWS], double matrix2[][MAX_ROWS], unsigned rows){
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < rows; j++) {
            matrixSum[i][j] = matrix2[i][j] - matrix1[i][j];
        }
    }
}

int main() {
    double matrix1[MAX_ROWS][MAX_ROWS];
    double matrix2[MAX_ROWS][MAX_ROWS];
    unsigned rows;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "\nEnter matrix 1:";
    getMatrix(matrix1, rows);
    std::cout << "\nEnter matrix 2:";
    getMatrix(matrix2, rows);
    
    double sum[MAX_ROWS][MAX_ROWS];
    getSum(sum, matrix1, matrix2, rows);
    std::cout<< "\nSum matrix:\n";
    printMatrix(sum, rows);

    double subtract[MAX_ROWS][MAX_ROWS];
    getSubtract(subtract, matrix1, matrix2, rows);
    std::cout<< "\nSubtraction matrix:\n";
    printMatrix(subtract, rows);
}
