#include <iostream>

int main(){

    int digit1, digit2, digit3, num;

    std::cout << "Enter the first digit: ";
    std::cin >> digit1;

    std::cout << "\nEnter the second digit: ";
    std::cin >> digit2;

    std::cout << "\nEnter the last digit: ";
    std::cin >> digit3;

    num = (digit1 * 100) + (digit2 * 10) + digit3;

    std::cout << "\nThe number is: " << num;
}