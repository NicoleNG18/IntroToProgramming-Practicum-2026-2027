#include <iostream>

const int SIZE = 3;

bool isMagicSquare(int matrix[SIZE][SIZE]){
    int magicSum = 0;

    for (int j = 0; j < SIZE; j++){
        magicSum += matrix[0][j];
    }

    for (int i = 0; i < SIZE; i++){
        int rowSum = 0;

        for (int j = 0; j < SIZE; j++){
            rowSum += matrix[i][j];
        }
        if (rowSum != magicSum){
            return false;
        }
    }

    for (int j = 0; j < SIZE; j++){
        int colSum = 0;

        for (int i = 0; i < SIZE; i++){
            colSum += matrix[i][j];
        }
        if (colSum != magicSum){
            return false;
        }
    }
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < SIZE; i++){
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][SIZE - 1 - i];
    }
    if (mainDiagonalSum != magicSum || secondaryDiagonalSum != magicSum){
        return false;
    }
    return true;
}

int main(){
    int matrix[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            std::cin >> matrix[i][j];
        }
    }

    if (isMagicSquare(matrix)) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
}
