#include <iostream>

int main(){

    int a, x, y;

    std::cin >> a >> x >> y;

    if ((x / a + y / a) % 2 == 0) {
        std::cout << "Black square";
    } 
    else {
        std::cout << "White square";
    }
}