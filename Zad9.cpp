#include <iostream>

int main(){

    int numerator, denominator;

    std::cin >> numerator >> denominator;

    int temp;
    int n = numerator;

    if (denominator < 0){
        numerator = -numerator;
        denominator = -denominator;
    }

    if (n < 0){
        n = -n;
    }

    while (denominator != 0){
        temp = n % denominator;
        n = denominator;
        denominator = temp;
    }
    numerator /= n;
    denominator /= n;

    std::cout << numerator << "/" << denominator;
}