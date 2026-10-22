#include <iostream>

int main(){
    
    int a, b;
    std::cin >> a >> b;

    int min = (a < b) ? a : b;
    std::cout << min;

}