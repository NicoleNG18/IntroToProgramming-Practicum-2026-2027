// Tasks from seminar 6 - Kosta Politov.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

//TASK 1:
const int MAX_SIZE = 128;

void getMatrix(int arr[][MAX_SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cin >> arr[i][j];
		}
	}
}

void sumOfMatrixes(const int a[][MAX_SIZE], const int b[][MAX_SIZE], int result[][MAX_SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[i][j] = a[i][j] + b[i][j];
		}
	}
}

void differenceOfMatrixes(const int a[][MAX_SIZE], const int b[][MAX_SIZE], int result[][MAX_SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[i][j] = b[i][j] - a[i][j];
		}
	}
}

void printMatrix(const int arr[][MAX_SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//TASK 2:
void transposeMatrix(int arr[][MAX_SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}

//TASK 3:
int rowSum(const int arr[][MAX_SIZE], int size, int row) {
	int sum = 0;
	for (int j = 0; j < size; j++) {
		sum += arr[row][j];
	}
	return sum;
}

int colSum(const int arr[][MAX_SIZE], int size, int col) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i][col];
	}
	return sum;
}

int mainDiagonalSum(const int arr[][MAX_SIZE], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i][i];
	}
	return sum;
}

int secondaryDiagonalSum(const int arr[][MAX_SIZE], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i][size - 1 - i];
	}
	return sum;
}

bool isMagicSquare(const int arr[][MAX_SIZE], int size) {
	int target = mainDiagonalSum(arr, size);

	if (secondaryDiagonalSum(arr, size) != target) {
		return false;
	}

	for (int i = 0; i < size; i++) {
		if (rowSum(arr, size, i) != target || colSum(arr, size, i) != target) {
			return false;
		}
	}

	return true;
}

//TASK 4:
int getSizeOf() {
	int sizeOfArray;

	do {
		std::cin >> sizeOfArray;
		if (sizeOfArray <= 0 || sizeOfArray > MAX_SIZE) {
			std::cout << "Invalid input, try again:\n";
		}
	} while (sizeOfArray <= 0 || sizeOfArray > MAX_SIZE);

	return sizeOfArray;
}

void getRectangleMatrix(int arr[][MAX_SIZE], int sizeOfRows, int sizeOfCols) {
	for (int i = 0; i < sizeOfRows; i++) {
		for (int j = 0; j < sizeOfCols; j++) {
			std::cin >> arr[i][j];
		}
	}
}

void matrixMultiplier(int matrixA[][MAX_SIZE], int matrixB[][MAX_SIZE], int resultingMatrix[][MAX_SIZE],
	int rowsOfA, int rowsOfB, int colsOfB) {
	for (int i = 0; i < rowsOfA; i++) {
		for (int j = 0; j < colsOfB; j++) {
			int sum = 0;
			for (int p = 0; p < rowsOfB; p++) {
				sum += matrixA[i][p] * matrixB[p][j];
			}
			resultingMatrix[i][j] = sum;
		}
	}
}

void printRectangleMatrix(int arr[][MAX_SIZE], int sizeOfRows, int sizeOfCols) {
	for (int i = 0; i < sizeOfRows; i++) {
		for (int j = 0; j < sizeOfCols; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//TASK 5:


int main()
{
	//TASK 1:
	//int sizeOfMatrixes;

	//std::cout << "Enter size of matrixes: \n";

	//do {
	//	std::cin >> sizeOfMatrixes;
	//	if (sizeOfMatrixes <= 0 || sizeOfMatrixes > MAX_SIZE) {
	//		std::cout << "Invalid input, try again:\n";
	//	}
	//} while (sizeOfMatrixes <=0 || sizeOfMatrixes > MAX_SIZE);

	//int matrix1[MAX_SIZE][MAX_SIZE];
	//int matrix2[MAX_SIZE][MAX_SIZE];
	//int sum[MAX_SIZE][MAX_SIZE];
	//int difference[MAX_SIZE][MAX_SIZE];

	//std::cout << "Give elements of the first matrix:\n";
	//getMatrix(matrix1, sizeOfMatrixes);

	//std::cout << "Give elements of the second matrix:\n";
	//getMatrix(matrix2, sizeOfMatrixes);

	//sumOfMatrixes(matrix1, matrix2, sum, sizeOfMatrixes);
	//differenceOfMatrixes(matrix1, matrix2, difference, sizeOfMatrixes);

	//std::cout << "Sum:\n";
	//printMatrix(sum, sizeOfMatrixes);
	//std::cout << "\n";

	//std::cout << "Difference:\n";
	//printMatrix(sum, sizeOfMatrixes);


	//TASK 2:
	//int sizeOfMatrix;

	//std::cout << "Enter size of matrix: \n";

	//do {
	//	std::cin >> sizeOfMatrix;
	//	if (sizeOfMatrix <= 0 || sizeOfMatrix > MAX_SIZE) {
	//		std::cout << "Invalid input, try again:\n";
	//	}
	//} while (sizeOfMatrix <=0 || sizeOfMatrix > MAX_SIZE);

	//int matrix[MAX_SIZE][MAX_SIZE];

	//std::cout << "Enter elements of the matrix:\n";

	//getMatrix(matrix, sizeOfMatrix);

	//transposeMatrix(matrix, sizeOfMatrix);

	//printMatrix(matrix, sizeOfMatrix);


	//TASK 3:
	//int sizeOfMatrix;

	//std::cout << "Enter size of matrix: \n";

	//do {
	//	std::cin >> sizeOfMatrix;
	//	if (sizeOfMatrix <= 0 || sizeOfMatrix > MAX_SIZE) {
	//		std::cout << "Invalid input, try again:\n";
	//	}
	//} while (sizeOfMatrix <=0 || sizeOfMatrix > MAX_SIZE);

	//int matrix[MAX_SIZE][MAX_SIZE];

	//std::cout << "Enter elements of the matrix:\n";

	//getMatrix(matrix, sizeOfMatrix);

	//std::cout << std::boolalpha << isMagicSquare(matrix, sizeOfMatrix);


	//TASK 4:
	//int sizeOfRows1 = getSizeOf(),
	//	sizeOfCols1 = getSizeOf();

	//int sizeOfRows2 = getSizeOf(),
	//	sizeOfCols2 = getSizeOf();

	//if (sizeOfCols1 != sizeOfRows2) {
	//	std::cout << "Impossible multiplication!\n";
	//	return 1;
	//}

	//int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE];

	//std::cout << "Enter elements of the first matrix:\n";
	//getRectangleMatrix(matrix1, sizeOfRows1, sizeOfCols1);

	//std::cout << "Enter elements of the second matrix:\n";
	//getRectangleMatrix(matrix2, sizeOfRows2, sizeOfCols2);

	//int multipliedMatrix[MAX_SIZE][MAX_SIZE];

	//matrixMultiplier(matrix1, matrix2, multipliedMatrix, sizeOfRows1, sizeOfRows2, sizeOfCols2);

	//printRectangleMatrix(multipliedMatrix, sizeOfRows1, sizeOfCols2);


	//TASK 5:
	std::cout << "Enter number of rows:\n";
	int sizeOfRows = getSizeOf();

	std::cout << "Enter number of columns:\n";
	int sizeOfCols = getSizeOf();

	int matrix[MAX_SIZE][MAX_SIZE];

	std::cout << "Enter elements of the matrix:\n";
	getRectangleMatrix(matrix, sizeOfRows, sizeOfCols);

	
}
