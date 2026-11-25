#include <iostream>

const int MAX_SIZE = 128;

int calculateElement(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int row, int col, int k) {
    int sum = 0;

    for (int i = 0; i < k; i++){
        sum += matrix1[row][i] * matrix2[i][col];
    }
    return sum;
}

void multiplyMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int n, int k, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            result[i][j] = calculateElement(matrix1, matrix2, i, j, k);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int n, k, m;

    std::cout << "First enter n, k and m and then the matrices: ";

    std::cin >> n >> k >> m;

    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            std::cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < k; i++){
        for (int j = 0; j < m; j++){
            std::cin >> matrix2[i][j];
        }
    }
    multiplyMatrices(matrix1, matrix2, result, n, k, m);

    std::cout << std::endl;
    printMatrix(result, n, m);
}
