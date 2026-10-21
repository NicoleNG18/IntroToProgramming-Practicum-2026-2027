// bonus1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int a, b, c, d;
	d = num % 10;
	c = num / 10 % 10;
	b = num / 100 % 10;
	a = num / 1000;
	int palindrome = d * 1000 + c * 100 + b * 10 + a;
	std::cout << (palindrome == num);
}