#include <iostream>

const int MAX_SIZE = 128;

bool isCenterSymmetric(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols){
    int totalElements = rows * cols;

    for (int index = 0; index < totalElements / 2; index++){
        int row = index / cols;
        int col = index % cols;
        if (matrix[row][col] != matrix[rows - 1 - row][cols - 1 - col]){
            return false;
        }
    }
    return true;
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
    std::cout << std::boolalpha << isCenterSymmetric(matrix, rows, cols) << std::endl;
}
