// bonus2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    bool negative = num < 0;

    std::cout << num * (1 - 2 * negative);
}