#include <iostream>

int main(){

    std::cout << "Hello, C++\n";

    unsigned int apples;
    unsigned int pears;
    unsigned int bananas;

    std::cout << "Enter number of Apples: \n";
    std::cin >> apples;

    std::cout << "Enter number of Bananas: \n";
    std::cin >> bananas;

    std::cout << "Enter number of Pears: \n";
    std::cin >> pears;

    std::cout << "Dont forget to buy " << apples << "apples, " << pears << " pears and " << bananas << " bananas!";
}