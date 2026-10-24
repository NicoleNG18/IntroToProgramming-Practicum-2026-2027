#include <iostream>

int main(){

    int num, position;

    std::cin >> num >> position;

    int count = 0;
    int temp = num;

    while (temp > 0){
        count++;
        temp /= 10;
    }

    if (position < 1 || position > count){
        std::cout << "Dont have digit on index: " << position;
    } 
    else{
        for (int i = 1; i < position; i++){
            num /= 10;
        }

        std::cout << num % 10;
    }
}
