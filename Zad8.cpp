#include <iostream>

int main(){

    int choice, a, b;

    std::cout << "1. Adding\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Devision\n";
    std::cout << "5. Remainder from devision\n";
    std::cout << "Your choice and two numbers: ";

    std::cin >> choice >> a >> b;

    switch (choice) {
        case 1:
            std::cout << a + b;
            break;
        case 2:
            std::cout << a - b;
            break;
        case 3:
            std::cout << a * b;
            break;
        case 4:
            if (b == 0) {
                std::cout << "Error. Division by zero";
            } 
            else {
                std::cout << (double) a / b;
            }
            break;
        case 5:
            if (b == 0) {
                std::cout << "Error. Division by zero";
            } 
            else {
                std::cout << a % b;
            }
            break;
        default:
            std::cout << "Invalid option";
    }

    return 0;
}
