#include <iostream>

int main(){

    int num1, num2, temp;

    std::cin >> num1 >> num2;

    int smaller = num1 < num2 ? num1 : num2;

    for (int i = smaller; i >= 1; i--){
        if (num1 % i == 0 && num2 % i == 0){
            std::cout << i << ' ';
        }
    }
}