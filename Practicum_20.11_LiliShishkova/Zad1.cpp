#include <iostream>

const int ROWS = 3;
const int COLS = 3;

void sumMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int result[ROWS][COLS];

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            std::cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            std::cin >> matrix2[i][j];
        }
    }
    std::cout << std::endl;

    sumMatrices(matrix1, matrix2, result);
    printMatrix(result);

    std::cout << std::endl;

    subMatrices(matrix1, matrix2, result);
    printMatrix(result);
}