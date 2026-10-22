#include <iostream>

int main(){

    double a, b, c, temp;

    std::cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {

        std::cout << "Not a triangle";
    } 
    else {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        if (a == b && b == c) {
            std::cout << "Equilateral";
        } 
        else if (a == b || a == c || b == c) {
            std::cout << "Isosceles";
        } 
        else {
            std::cout << "Scalene";
        }

        if (a * a + b * b == c * c) {
            std::cout << ", Right";
        } 
        else if (a * a + b * b > c * c) {
            std::cout << ", Acute";
        } 
        else {
            std::cout << ", Obtuse";
        }
    }

}