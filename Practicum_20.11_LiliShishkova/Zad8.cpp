#include <iostream>

const int MAX_SIZE = 128;

bool isSaddlePoint(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, int row, int col){
    bool isRowMin = true;
    bool isRowMax = true;
    bool isColMin = true;
    bool isColMax = true;

    for (int j = 0; j < cols; j++){
        if (matrix[row][j] < matrix[row][col]){
            isRowMax = false;
        }
        if (matrix[row][j] > matrix[row][col]){
            isRowMin = false;
        }
    }

    for (int i = 0; i < rows; i++) {
        if (matrix[i][col] < matrix[row][col]){
            isColMax = false;
        }
        if (matrix[i][col] > matrix[row][col]){
            isColMin = false;
        }
    }
    return (isRowMin && isColMax) || (isRowMax && isColMin);
}

void printSaddlePoints(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols){
    bool found = false;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (isSaddlePoint(matrix, rows, cols, i, j)){
                std::cout << matrix[i][j] << " ";

                found = true;
            }
        }
    }
    if (!found){
        std::cout << "No saddle points";
    }
    std::cout << std::endl;
}

int main(){
    int rows, cols;

    std::cout << "Enter rows and columns and then the matrix: ";
    std::cin >> rows >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cin >> matrix[i][j];
        }
    }
    std::cout << std::endl;
    printSaddlePoints(matrix, rows, cols);
}
