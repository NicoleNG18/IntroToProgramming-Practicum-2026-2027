#include <iostream>

int main(){

    int num, temp;
    int sum = 0;

    std::cin >> num;

    if (num != 0){
        for (int i = 1; i < num; i++){
            temp = num % i;
            if (temp == 0){
                sum += i;
            }
        }
        if (num == sum){
            std::cout << "Yes";
        }
        else{
            std::cout << "No";
        }
    }
}