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

void getTrans(double matrixTrans[][MAX_ROWS], double matrix1[][MAX_ROWS], double matrix2[][MAX_ROWS], unsigned rows, unsigned cols){
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
                matrixTrans[j][i] =  matrix1[i][j];
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
    std::cout << "Enter number of rows of matrix: ";
    std::cin >> rows;
    unsigned cols;
    std::cout << "Enter number of cols of matrix: ";
    std::cin >> cols;
    std::cout << "\nEnter matrix:";
    getMatrix(matrix1, rows, cols);

    std::cout<<"\nMatrix:\n";
    printMatrix(matrix1, rows, cols);

    double matrix2[MAX_ROWS][MAX_ROWS];
    getTrans(matrix2, matrix1, matrix1, rows, cols);
    std::cout<<"\nTranponented matrix:\n";
    printMatrix(matrix2, rows, cols);


}
