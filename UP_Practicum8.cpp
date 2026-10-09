#include <iostream>

int main(){

    int code, lastDigits;

    std::cout << "Enter the 8 digit number: ";
    std::cin >> code;

    std::cout << "\n*****" << code % 1000;
}