#include <iostream>

int mixNums(int num1, int num2){
    int result = 0;

    while (num1 > 0 || num2 > 0){
        if (num1 > 0){
            result = result * 10 + num1 % 10;
            num1 /= 10;
        }

        if (num2 > 0){
            result = result * 10 + num2 % 10;
            num2 /= 10;
        }
    }
    return result;
}

int main(){
    int num1, num2;
    std::cin >> num1 >> num2;

    std::cout << mixNums(num1, num2);
}
