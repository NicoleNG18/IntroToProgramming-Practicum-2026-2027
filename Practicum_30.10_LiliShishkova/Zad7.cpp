#include <iostream>

bool isValid(int num){
    int result = num / 1000 * 100 + num % 100;

    return result % 11 == 0;
}

void findNumbers(int num1, int num2){
    bool found = false;

    for (int i = num1; i <= num2; i++){
        if (i >= 1000 && i <= 9999 && isValid(i)){
            std::cout << i << " ";
            found = true;
        }
    }
    if (!found){
        std::cout << "No such a number!";
    }
}

int main(){
    int num1, num2;
    std::cin >> num1 >> num2;

    findNumbers(num1, num2);
}
