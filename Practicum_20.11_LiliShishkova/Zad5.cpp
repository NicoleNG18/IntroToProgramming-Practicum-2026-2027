#include <iostream>

const int MAX_SIZE = 128;

void printSpiral(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols){
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right){

        for (int j = left; j <= right; j++){
            std::cout << matrix[top][j] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++){
            std::cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--){
                std::cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--){
                std::cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
    std::cout << std::endl;
}

int main(){
    int rows, cols;

    std::cout << "Enter number of rows and columns and then the matrix: ";
    std::cin >> rows >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cin >> matrix[i][j];
        }
    }
    printSpiral(matrix, rows, cols);
}
