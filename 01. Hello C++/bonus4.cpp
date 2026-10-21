// bonus4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int km;
	std::cin >> km;

	double price1 = km * 2.50 * (km <= 5)+ (5 * 2.50 + (km - 5) * 1.50) * (km > 5) + 3;
	double price = price1 * (1 + 0.1 * (price1 > 20));

	std::cout << price;
}
