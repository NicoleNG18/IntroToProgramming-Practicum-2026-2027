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

void check (double matrix[][MAX_ROWS], unsigned rows, unsigned cols){
     bool found = false;

    for (unsigned i = 0; i < rows; i++) {
        double minR = matrix[i][0];
        double maxR = matrix[i][0];
        for (unsigned c = 1; c < cols; c++) {
            if (matrix[i][c] < minR) minR = matrix[i][c];
            if (matrix[i][c] > maxR) maxR = matrix[i][c];
        }

        for (unsigned j = 0; j < cols; j++) {
            double minC = matrix[0][j];
            double maxC = matrix[0][j];
            for (unsigned r = 1; r < rows; r++) {
                if (matrix[r][j] < minC) minC = matrix[r][j];
                if (matrix[r][j] > maxC) maxC = matrix[r][j];
            }

            if ((matrix[i][j] == maxR && matrix[i][j] == minC) ||
                (matrix[i][j] == minR && matrix[i][j] == maxC)) {
                std::cout << matrix[i][j] << " ";
                found = true;
            }
        }
    }

    if (!found) {
        std::cout << "No saddle points";
    }
    std::cout << "\n";
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
    std::cout << "\nAnswer: ";
    check(matrix1, rows, cols);
}
