// bonus3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::cout << a * (a > b) + b * (b > a);

}
