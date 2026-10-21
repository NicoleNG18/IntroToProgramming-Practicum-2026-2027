// zad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int seconds;
    std::cout << " ";
    std::cin >> seconds;
    int days = seconds / 86400;
    seconds = seconds % 86400;

    int hours = seconds / 3600;
    seconds = seconds % 3600;

    int minutes = seconds / 60;
    seconds = seconds % 60;

    std::cout << days << " days " << hours << " hours " << minutes << " minutes " << seconds << " seconds";
}

