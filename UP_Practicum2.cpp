#include <iostream>

int main(){

    unsigned int height, width, area, param;

    std::cout << "Enter height: \n";
    std::cin >> height;

    std::cout << "Enter width: \n";
    std::cin >> width;

    param = 2 * (height + width);
    area = height * width;
    
    std::cout << param << "\n";

    std::cout << area;
}