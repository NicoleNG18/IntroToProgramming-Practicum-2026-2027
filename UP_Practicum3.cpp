#include <iostream>

const double dollar = 1.1;
const int yen = 145;

int main(){

    double euro;
    
    std::cout << "Enter euros: ";
    std::cin >> euro;
  
    std::cout << "Dollars: " << euro * dollar;

    std::cout << "\nYen: " << euro * yen;
}