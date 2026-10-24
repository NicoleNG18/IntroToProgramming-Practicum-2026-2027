#include <iostream>

int main(){
    long num;

    std::cin >> num;

    int dec = 0;
    int pow = 1;

    while (num > 0){
        int digit = num % 10;

        dec += digit * pow;
        pow *= 2;
        num /= 10;
    }
    std::cout << dec;
}