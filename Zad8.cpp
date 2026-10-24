#include <iostream>

int main(){

    int num;

    std::cin >> num;

    int steps = 0;
    int maxValue = num;

    std::cout << "Sequence: " << num;

    while (num != 1){
        if (num % 2 == 0){
            num /= 2;
        } 
        else{
            num = 3 * num + 1;
        }
        std::cout << ' ' << num;

        steps++;

        if (num > maxValue){
            maxValue = num;
        }
    }
    std::cout << "\nSteps: " << steps;
    std::cout << "\nMax value: " << maxValue;
}
