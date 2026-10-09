#include <iostream>

int main() {

    int seconds, days, hours, minutes;

    std::cout << "Enter seconds: ";
    std::cin >> seconds;

    days = seconds / 86400;
    seconds = seconds % 86400;

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    seconds = seconds % 60;

    std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
}
