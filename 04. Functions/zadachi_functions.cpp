// zadachi_functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//zad 1
//int count(int num)
//{
//    int count = 0;
//    while(num !=0)
//    {
//        num /= 10;
//        count++;
//    }
//    return count;
//}
//
//int main()
//{
//    int n;
//    std::cin >> n;
//    std::cout << count(n);
//}

//zad 2
//int Square(int x)
//{ 
//	int square = x * x;
//	return square;
//}
//
//int sumOfSquare(int n)
//{
//	int sumOfSquare = 0;
//	for (int i = 0; i <= n; i++)
//	{
//		sumOfSquare += Square(i);
//	}
//	return sumOfSquare;
//}
//
//int main()
//{
//	int number;
//	std::cin >> number;
//	std::cout << sumOfSquare(number);
//}

//zad 3
//bool areOnSameCircle(int a, int b, int c, int d)
//{
//	if (a * a + b * b == c * c + d * d)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//
//int main()
//{
//	int a, b, c, d;
//	std::cin >> a >> b >> c >> d;
//	bool answer = areOnSameCircle(a, b, c, d);
//	if (answer == true)
//	{
//		std::cout << "Yes";
//	}
//	else
//	{
//		std::cout << "No";
//	}
//}

//zad 4
//double getperimeterTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
//{
//	double abLength = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//	double bcLength = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
//	double caLength = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
//	double p = abLength + bcLength + caLength;
//	return p;
//}
//
//int main()
//{
//	double x1, x2, x3, y1, y2, y3;
//	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	std::cout << getperimeterTriangle(x1, y1, x2, y2, x3, y3);
//}

// zad 5
//bool areCollinear(int x1, int y1, int x2, int y2, int x3, int y3)
//{
//	if (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) == 0)
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int x1, x2, x3, y1, y2, y3;
//	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	bool answer = areCollinear(x1, y1, x2, y2, x3, y3);
//	if (answer == true)
//	{
//		std::cout << "Yes";
//	}
//	else
//	{
//		std::cout << "No";
//	}
//}

//zad 6
//bool isDigit(char symbol)
//{
//	if (isDigit(symbol))
//	{
//		return true;
//	}
//	return false;
//}
//
//bool isUpper(char symbol)
//{
//	if (isUpper(symbol))
//	{
//		return true;
//	}
//	return false;
//}
//
//bool isLower(char symbol)
//{
//	if (isLower(symbol))
//	{
//		return true;
//	}
//	return false;
//}
//
//bool isAlpha(char symbol)
//{
//	if (isAlpha(symbol))
//	{
//		return true;
//	}
//	return false;
//}
//
//bool isAlnum(char symbol)
//{
//	if (isAlnum(symbol))
//	{
//		return true;
//	}
//	return false;
//}
//
//char capitalize(char symbol)
//{
//	if (!isAlpha(symbol)) 
//	{
//		return symbol;
//	}
//	return toupper(symbol);
//}
//
//char makeLower(char symbol)
//{
//	return tolower(symbol);
//}
//
//char parseInt(char symbol)
//{
//	if (!isDigit(symbol))
//	{
//		return -1;
//	}
//	return int(symbol);
//}
//
//int toChar(char symbol)
//{
//	if (isDigit(symbol))
//	{
//		return toChar(symbol);
//	}
//	return '\0';
//}
//
//double myLog(double number, double base)
//{
//	if (number <= 0 || base <= 0 || base == 1)
//	{
//		return -1;
//	}
//	return std::log(number) / std::log(base);
//}
//
//double myPow(double number, int power)
//{
//	return std::pow(number, power);
//}
//
//double myCeil(double number)
//{
//	return std::ceil(number);
//}
//
//double myFloor(double number)
//{
//	return std::floor(number);
//}
//
//double myAbs(double number)
//{
//	return std::abs(number);
//}

//zad 7

//bool isDivisibleBy11(int number)
//{
//    return number % 11 == 0;
//}
//
//int removeHundredsDigit(int number)
//{
//    int lastTwoDigits = number % 100;
//    int firstDigit = number / 1000;
//
//    return firstDigit * 100 + lastTwoDigits;
//}
//
//void findNumbers(int m, int n)
//{
//    bool found = false;
//
//    for (int i = m; i <= n; i++)
//    {
//        if (i >= 1000 && i <= 9999)
//        {
//            int number = removeHundredsDigit(i);
//
//            if (isDivisibleBy11(number))
//            {
//                std::cout << i << " ";
//                found = true;
//            }
//        }
//    }
//
//    if (!found)
//    {
//        std::cout << "No such a number!";
//    }
//}
//
//int main()
//{
//    int m, n;
//
//    std::cin >> m >> n;
//
//    findNumbers(m, n);
//
//}

//zad 8
//int mixNums(int num1, int num2)
//{
//    int result = 0;
//
//    while (num1 > 0 || num2 > 0)
//    {
//        if (num1 > 0)
//        {
//            result = result * 10 + num1 % 10;
//            num1 /= 10;
//        }
//
//        if (num2 > 0)
//        {
//            result = result * 10 + num2 % 10;
//            num2 /= 10;
//        }
//    }
//
//    return result;
//}
//
//int main()
//{
//    int num1, num2;
//    std::cin >> num1 >> num2;
//
//    std::cout << mixNums(num1, num2);
//}

//zad 9
//long long factorial(int digit)
//{
//    long long result = 1;
//
//    for (int i = 1; i <= digit; i++)
//    {
//        result *= i;
//    }
//
//    return result;
//}
//
//bool isStrong(long long n)
//{
//    long long original = n;
//    long long sum = 0;
//
//    if (n < 0)
//    {
//        return false;
//    }
//
//    do
//    {
//        int digit = n % 10;
//        sum += factorial(digit);
//        n /= 10;
//    } while (n > 0);
//
//    return sum == original;
//}
//
//int main()
//{
//    long long n;
//    std::cin >> n;
//
//    if (isStrong(n))
//    {
//        std::cout << "true";
//    }
//    else
//    {
//        std::cout << "false";
//    }
//}