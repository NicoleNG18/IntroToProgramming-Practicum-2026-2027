#include <iostream>

int main(){

    unsigned int a, b;

    std::cin >> a >> b;

    int number = a * 100 + b;

    int firstDigit = number / 1000;
    int secondDigit = number / 100 % 10;
    int thirdDigit = number / 10 % 10;
    int fourthDigit = number % 10;

    std::cout << number << " - ";

    if (firstDigit < secondDigit && secondDigit < thirdDigit && thirdDigit < fourthDigit) {
        std::cout << "Yes";
    } 
    else {
        std::cout << "No";
    }
}