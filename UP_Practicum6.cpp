#include <iostream>

int main(){
    
    unsigned int num, firstDigit, secondDigit, lastDigit, sum;

    std::cout << "Enter 3 digit number: ";
    std::cin >> num;

    lastDigit = num % 10;
    secondDigit = (num / 10) % 10;
    firstDigit = num/100;

    sum = firstDigit + secondDigit + lastDigit;

    std::cout << "First digit: " << firstDigit;
    std::cout << "\nMiddle digit: " << secondDigit;
    std::cout << "\nLast digit: " << lastDigit;    

    std::cout << "\nThe sum of the digits is: " << sum;
}