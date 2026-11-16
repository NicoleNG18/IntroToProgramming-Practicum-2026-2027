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

bool check(double matrix1[][MAX_ROWS], unsigned rows, unsigned cols){
    double sumD1 = 0;
    double sumD2 = 0;
    double sumRows [MAX_ROWS] ={0};
    double sumCols [MAX_ROWS] ={0};
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) 
        {
            sumRows[i] = sumRows[i] + matrix1[i][j];
            sumCols[j] = sumCols[j] + matrix1[j][i];
            
        }
        sumD1 = sumD1 + matrix1[i][i];
        sumD2 = sumD2 + matrix1[rows-1- i][i];
    
    }
    bool isMagic = (sumD1 == sumD2);

    for (unsigned g = 0; g < rows; g++) {
        if (sumRows[g] != sumD1 || sumCols[g] != sumD1) {
            isMagic = false;
        }
    }
    return isMagic;

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
    std::cout << "\nEnter matrix:";
    getMatrix(matrix1, rows, rows);
    std::cout<<"\nMatrix:\n";
    printMatrix(matrix1, rows, rows);
    std::cout << "\nAnswer: " << std::boolalpha << check(matrix1, rows, rows);
}
