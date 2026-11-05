// Kosta Politov - Seminar 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//TASK 1:
int numberOfDigits(int number) {
	int counter = 0;

	while (number != 0) {
		counter++;
		number /= 10;
	}

	return counter;
}

//TASK 2:
int square(int x) {
	x = x * x;
	return x;
}

int sumOfSquares(int n) {
	int sumOfSquares = 0;

	for (int i = 1; i <= n; i++) {
		sumOfSquares += square(i);
	}

	return sumOfSquares;
}

//TASK 3:
bool areCoordinatesOnTheSameCircle(int a, int b, int c, int d) {
	int radius1 = sqrt(a * a + b * b);
	int radius2 = sqrt(c * c + d * d);

	if (radius1 == radius2) {
		return 1;
	}

	return 0;
}

//ТАСК 4:
double getLenghtFromCoordinates(double x1, double y1, double x2, double y2) {
	double lenght = sqrt(square(x2 - x1) + square(y2 - y1));
	return lenght;
}

double parameterOfTriangleByCoordinates(int a, int b, int c, int d, int e, int f) {
	//A (a, b); B (c, d); C (e, f)
	//side1 = AB; side2 = BC; side3 = CA;
	double side1 = getLenghtFromCoordinates(a, b, c, d);
	double side2 = getLenghtFromCoordinates(c, d, e, f);
	double side3 = getLenghtFromCoordinates(e, f, a, b);

	return side1 + side2 + side3;
}

double areaOfATriangle(double x1, double y1, double x2, double y2, double x3, double y3) {
	double area = sqrt((parameterOfTriangleByCoordinates(x1, y1, x2, y2, x3, y3) / 2) * ((parameterOfTriangleByCoordinates(x1, y1, x2, y2, x3, y3) / 2)
		- getLenghtFromCoordinates(x1, y1, x2, y2))*((parameterOfTriangleByCoordinates(x1, y1, x2, y2, x3, y3) / 2) - getLenghtFromCoordinates(x2, y2, x3, y3))*
	((parameterOfTriangleByCoordinates(x1, y1, x2, y2, x3, y3) / 2) - getLenghtFromCoordinates(x3, y3, x1, y1)));

	return area;
}

//TASK 5:
bool areCollinear(double x1, double y1, double x2, double y2, double x3, double y3) {
	if (areaOfATriangle(x1, y1, x2, y2, x3, y3) == 0) {
		return true;
	}

	return false;
}

//TASK 6:
//My own mini library of functions
bool isDigit(char symbol) {
	switch (symbol) {
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
		return true;
	default:
		return false;
	}
}

bool isUpper(char symbol) {
	switch (symbol) {
	case 'A': case 'B': case 'C': case 'D': case 'E':
	case 'F': case 'G': case 'H': case 'I': case 'J':
	case 'K': case 'L': case 'M': case 'N': case 'O':
	case 'P': case 'Q': case 'R': case 'S': case 'T':
	case 'U': case 'V': case 'W': case 'X': case 'Y':
	case 'Z':
		return true;
	default:
		return false;
	}
}

bool isLower(char symbol) {
	switch (symbol) {
	case 'a': case 'b': case 'c': case 'd': case 'e':
	case 'f': case 'g': case 'h': case 'i': case 'j':
	case 'k': case 'l': case 'm': case 'n': case 'o':
	case 'p': case 'q': case 'r': case 's': case 't':
	case 'u': case 'v': case 'w': case 'x': case 'y':
	case 'z':
		return true;
	default:
		return false;
	}
}

bool isAlpha(char symbol) {
	switch (symbol) {
	case 'a': case 'b': case 'c': case 'd': case 'e':
	case 'f': case 'g': case 'h': case 'i': case 'j':
	case 'k': case 'l': case 'm': case 'n': case 'o':
	case 'p': case 'q': case 'r': case 's': case 't':
	case 'u': case 'v': case 'w': case 'x': case 'y':
	case 'z': case 'A': case 'B': case 'C': case 'D':
	case 'E': case 'F': case 'G': case 'H': case 'I': 
	case 'J': case 'K': case 'L': case 'M': case 'N': 
	case 'O': case 'P': case 'Q': case 'R': case 'S': 
	case 'T': case 'U': case 'V': case 'W': case 'X':
	case 'Y': case 'Z':
		return true;
	default:
		return false;
	}
}

bool isAlnum(char symbol){
	if (isAlpha(symbol) || isDigit(symbol)) {
		return true;
	}
	return false;
}

char capitalize(char symbol) {
	if (isUpper(symbol) || isDigit(symbol)) {
		return symbol;
	}
	switch (symbol) {
	case 'a': return 'A';
	case 'b': return 'B';
	case 'c': return 'C';
	case 'd': return 'D';
	case 'e': return 'E';
	case 'f': return 'F';
	case 'g': return 'G';
	case 'h': return 'H';
	case 'i': return 'I';
	case 'j': return 'J';
	case 'k': return 'K';
	case 'l': return 'L';
	case 'm': return 'M';
	case 'n': return 'N';
	case 'o': return 'O';
	case 'p': return 'P';
	case 'q': return 'Q';
	case 'r': return 'R';
	case 's': return 'S';
	case 't': return 'T';
	case 'u': return 'U';
	case 'v': return 'V';
	case 'w': return 'W';
	case 'x': return 'X';
	case 'y': return 'Y';
	case 'z': return 'Z';
	default: return symbol;
	}
}

char makeLower(char symbol) {
	if (isLower(symbol) || isDigit(symbol)) {
		return symbol;
	}
	switch (symbol) {
	case 'A': return 'a';
	case 'B': return 'b';
	case 'C': return 'c';
	case 'D': return 'd';
	case 'E': return 'e';
	case 'F': return 'f';
	case 'G': return 'g';
	case 'H': return 'h';
	case 'I': return 'i';
	case 'J': return 'j';
	case 'K': return 'k';
	case 'L': return 'l';
	case 'M': return 'm';
	case 'N': return 'n';
	case 'O': return 'o';
	case 'P': return 'p';
	case 'Q': return 'q';
	case 'R': return 'r';
	case 'S': return 's';
	case 'T': return 't';
	case 'U': return 'u';
	case 'V': return 'v';
	case 'W': return 'w';
	case 'X': return 'x';
	case 'Y': return 'y';
	case 'Z': return 'z';
	default: return symbol;
	}
}

int parseInt(char symbol) {
	switch (symbol) {
	case '0': return 0;
	case '1': return 1;
	case '2': return 2;
	case '3': return 3;
	case '4': return 4;
	case '5': return 5;
	case '6': return 6;
	case '7': return 7;
	case '8': return 8;
	case '9': return 9;
	default:  return -1;
	}
}

char toChar(int symbol) {
	switch (symbol) {
	case 0: return '0';
	case 1: return '1';
	case 2: return '2';
	case 3: return '3';
	case 4: return '4';
	case 5: return '5';
	case 6: return '6';
	case 7: return '7';
	case 8: return '8';
	case 9: return '9';
	default:  return '\0';
	}
}

double myLog(double base, double x) {
	if (base <= 0 || base == 0 || x <= 0) {
		return -1;
	}
	int count = 0;
	while (x / base >= 1) {
		x = x / base;
		count++; 
	}
	return count;
}

double myPow(double a, int b) {
	if (b == 0) {
		return 1;
	}
	else if (b < 0) {
		double power = a;
		for (int i = 1; i < -b; i++) {
			power = power * a;
		}
		return 1/power;
	}
	else if (b > 0) {
		double power = a;
		for (int i = 1; i < b; i++) {
			power = power * a;
		}
		return power;
	}
}

int myCeil(double symbol) {
	double tempSymbol = symbol + 1;
	return tempSymbol;
}

int myFloor(double symbol) {
	return symbol;
}

double myAbs(double symbol) {
	if (symbol < 0) {
		return -symbol;
	}
	else if (symbol >= 0) {
		return symbol;
	}
}

//TASK 7:
void printNumbersWithRemovedHundreds(int smallerNumber, int biggerNumber) {
	if (smallerNumber > biggerNumber) {
		int temp = smallerNumber;
		smallerNumber = biggerNumber;
		biggerNumber = temp;
	}
	int count = 0;
	while (biggerNumber - smallerNumber >= 0) {
		int firstDigitInHundreds = (smallerNumber/1000)*100;
		int lastTwoDigits = smallerNumber % 100;
		int removedHundreds = firstDigitInHundreds + lastTwoDigits;

		if (removedHundreds % 11 == 0) {
			std::cout << smallerNumber << " ";
			count++;
		}
		smallerNumber++;
	}
	if (count == 0) {
		std::cout << "No such a number!";
	}
}

//TASk 8:
void mixNums(int num1, int num2) {
	int temp1, temp2;
	while (num1 > 0 || num2 > 0) {
		temp1 = num1 % 10;
		temp2 = num2 % 10;
		if (num1 > 0 && num2 > 0) {
			std::cout << temp1 << temp2;
		}
		else if (num1 <= 0) {
			std::cout << temp2;
		}
		else if (num2 <= 0) {
			std::cout << temp1;
		}
		num1 /= 10;
		num2 /= 10;
	}
}

//TASK 9:
long long factorielOfNum(int num) {
	long long factoriel = 1;
	for (int i = 1; i <= num; i++) {
		factoriel *= i;
	}
	return factoriel;
}

bool isStrong(int number) {
	long long sumOfFactoriels = 0;
	int originalNumber = number;

	while (number > 0) {
		int lastDigit = number % 10;
		sumOfFactoriels += factorielOfNum(lastDigit);
		number /= 10;
	}

	return sumOfFactoriels == originalNumber;
} 
{
	
}

