#include <iostream>

int main(){

    unsigned int num1, num2, mult, lastDigit;
    bool odd;


    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "\nEnter the second number: ";
    std::cin >> num2;

    mult = num1 * num2;
    lastDigit = mult % 10;

    odd = (lastDigit % 10) % 2;

    std::cout << "\nMultiplied: " << mult;    
    std::cout << "\nLast digit after multiplying: " << lastDigit;
    std::cout << "\nIs the last digit odd: " << odd;
}