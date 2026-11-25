#include <iostream>

const int ROWS = 3;
const int COLS = 3;

void tranMatrix(int matrix[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = i + 1; j < COLS; j++){
            int temp = matrix[i][j];

            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
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
    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            std::cin >> matrix[i][j];
        }
    }
    tranMatrix(matrix);

    std::cout << std::endl;
    printMatrix(matrix);
}
