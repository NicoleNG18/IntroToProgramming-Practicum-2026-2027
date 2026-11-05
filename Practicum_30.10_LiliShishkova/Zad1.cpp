#include <iostream>

unsigned int digitCount(int num){
    unsigned count;

    while (num != 0){
        num = num / 10;
        
        count++;
    }
    return count;
}

int main(){
    int num;
    std::cin >> num;

    std::cout << digitCount(num);
}