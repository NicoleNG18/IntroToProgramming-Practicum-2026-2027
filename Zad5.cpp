#include <iostream>

int main(){

    unsigned int month, year;

    std::cin >> month;

    if (month < 1 || month > 12) {
        std::cout << "Invalid month";
    } 
    else if (month == 2) {
        std::cout << "Year: ";
        std::cin >> year;

        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            std::cout << 29;
        } 
        else {
            std::cout << 28;
        }
    } 
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        std::cout << 30;
    } 
    else {
        std::cout << 31;
    }
}