#include <iostream>

int main(){

    int x, y;

    std::cin >> x >> y;

    if (x == 0 || y == 0) {
        std::cout << "On axis";
    } 
    else if (x > 0 && y > 0) {
        std::cout << "First";
    } 
    else if (x < 0 && y > 0) {
        std::cout << "Second";
    } 
    else if (x < 0 && y < 0) {
        std::cout << "Third";
    } 
    else {
        std::cout << "Fourth";
    }
}
