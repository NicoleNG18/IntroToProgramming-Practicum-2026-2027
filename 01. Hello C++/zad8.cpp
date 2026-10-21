// zad8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int code;
    std::cout << " ";
    std::cin >> code;
    int last3 = code % 1000;
    std::cout << "*****" << last3;
}