#include <iostream>

int main(){

    int num1, num2;
    bool temp;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "\nEnter the second number: ";
    std::cin >> num2;

    temp = !(num2 % num1);

    std::cout << "\n" << temp;

}
