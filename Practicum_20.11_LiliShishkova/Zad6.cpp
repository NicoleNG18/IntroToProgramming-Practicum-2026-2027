#include <iostream>

const int MAX_SIZE = 128;

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size){
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            int temp = matrix[i][j];

            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void reverseRows(int matrix[MAX_SIZE][MAX_SIZE], int size){
    for (int i = 0; i < size; i++) {
        int left = 0;
        int right = size - 1;

        while (left < right) {
            int temp = matrix[i][left];

            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;

            left++;
            right--;
        }
    }
}

void rotateMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size){
    transposeMatrix(matrix, size);
    reverseRows(matrix, size);
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int size;

    std::cout << "Enter the size and then matrix: ";
    std::cin >> size;

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            std::cin >> matrix[i][j];
        }
    }
    rotateMatrix(matrix, size);

    std::cout << std::endl;
    printMatrix(matrix, size);
}
