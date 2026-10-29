// zad1_conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//zad 1
	//int a, b;
	//std::cin >> a >> b;
	//std::cout << (a < b ? a : b);

	//zad 2
	//int year;
	//std::cin >> year;
	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//{
	//	std::cout << "yes";
	//}
	//else
	//{
	//	std::cout << "no";
	//}

	//zad 3
	//double a, b, c;
	//std::cin >> a >> b >> c;
	//if (a + b > c && a + c > b && b + c > a)
	//{
	//	std::cout << "yes";
	//}
	//else if  (a + b < c || a + c < b || b + c < a)
	//{
	//	std::cout << "no";
	//}
	//else 
	//{
	//std::cout << "invalid input";
	//}

	//zad 4
	// ++ - 1  x-y+ 2 x-y- 3 x+y- 4
	//double x, y;
	//std::cin >> x >> y;
	//if (x > 0 && y > 0)
	//{
	//	std::cout << "first";
	//}
	//else if (x < 0 && y > 0)
	//{
	//	std::cout << "second";
	//}
	//else if (x < 0 && y < 0)
	//{
	//	std::cout << "third";
	//}
	//else if (x > 0 && y < 0)
	//{
	//	std::cout << "fourth";
	//}
	//else
	//{
	//	std::cout << "on axis";
	//}

	//zad 5
	//int month, year;
	//std::cin >> month;
	//if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	//{
	//	std::cout << "31";
	//}
	//else if (month == 2)
	//{
	//	std::cout << "Enter year: " ;
	//	std::cin >> year;
	//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//	{
	//		std::cout << "29";
	//	}
	//	else
	//	{
	//		std::cout << "28";
	//	}
	//}

	//zad 6
	//unsigned a, b;
	//std::cin >> a >> b;
	//unsigned a1, a2, b1, b2;
	//a2 = a % 10;
	//a1 = (a % 100) / 10;
	//b2 = b % 10;
	//b1 = (b % 100) / 10;
	//unsigned endNum = a1 * 1000 + a2 * 100 + b1 * 10 + b2;
	//if (a1 < a2 < b1 < b2)
	//{
	//	std::cout << endNum << " - YES";
	//}
	//else
	//{
	//	std::cout << endNum << " - NO";
	//}

	//zad 7
	//int a, x, y;
	//std::cin >> a >> x >> y;
	//int col = x / a;
	//int row = y / a;

	//if ((col + row) % 2 == 0)
	// {
	//	std::cout << "black";
	// }
	//else
	// {
	//	std::cout << "white";
	//}


	//zad 8
	//int a, b, choice;
	//double sum;
	//std::cin >> choice >> a >> b;
	//if (choice == 1)
	//{
	//	std::cout << a + b;
	//}
	//else if (choice == 2)
	//{
	//	std::cout << a - b;
	//}
	//else if (choice == 3)
	//{
	//	std::cout << a * b;
	//}
	//else if (choice == 4)
	//{
	//	if (b == 0)
	//	{
	//		std::cout << "Division by zero";
	//	}
	//	else
	//	{
	//		double c = b;
	//		sum = a / c;
	//		std::cout << sum;
	//	}
	//}
	//else if (choice == 5)
	//{
	//	if (b == 0)
	//	{
	//		std::cout << "Division by zero";
	//	}
	//	else
	//	{
	//		sum = a % b;
	//		std::cout << sum;
	//	}
	//}
	//else
	//{
	//	std::cout << "Invalid option";
	//}

		//zad 9
	//	double a, b, c, max;
	//	std::cin >> a >> b >> c;
	//
	//	if (a <= 0 || b <= 0 || c <= 0 ||
	//		a + b <= c || a + c <= b || b + c <= a)
	//	{
	//		std::cout << "Not a triangle";
	//	}
	//	else
	//	{
	//
	//		if (a == b && b == c)
	//			std::cout << "Equilateral, ";
	//		else if (a == b || a == c || b == c)
	//			std::cout << "Isosceles, ";
	//		else
	//			std::cout << "Scalene, ";
	//
	//		if (a >= b && a >= c)
	//			max = a;
	//		else if (b >= a && b >= c)
	//			max = b;
	//		else
	//			max = c;
	//
	//		if (max * max == a * a + b * b + c * c - max * max)
	//			std::cout << "Right";
	//		else if (max * max < a * a + b * b + c * c - max * max)
	//			std::cout << "Acute";
	//		else
	//			std::cout << "Obtuse";
	//	}
	//}

	//zad bonus
	//	unsigned day, month, year;
	//	std::cin >> day >> month >> year;
	//
	//	unsigned daysInMonth;
	//
	//	if (month < 1 || month > 12 || day < 1)
	//	{
	//		std::cout << "Invalid date";
	//	}
	//	else
	//	{
	//
	//		if (month == 4 || month == 6 || month == 9 || month == 11)
	//			daysInMonth = 30;
	//		else if (month == 2)
	//		{
	//			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	//			{
	//				daysInMonth = 29;
	//			}
	//			else
	//			{
	//				daysInMonth = 28;
	//			}
	//		}
	//		else
	//		{
	//			daysInMonth = 31;
	//		}
	//
	//		if (day > daysInMonth)
	//		{
	//			std::cout << "Invalid date";
	//		}
	//		else
	//		{
	//			if (day < daysInMonth)
	//			{
	//				day++;
	//			}
	//			else 
	//			{
	//				day = 1;
	//
	//				if (month < 12)
	//				{
	//					month++;
	//				}
	//				else 
	//				{
	//					month = 1;
	//					year++;
	//				}
	//			}
	//
	//			std::cout << day << "." << month << "." << year;
	//		}
	//	}
	//}

