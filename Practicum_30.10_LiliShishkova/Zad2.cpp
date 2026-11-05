#include <iostream>

int sumOfSquares(int num){
    int sum, temp;

    for (int i = 1; i <= num; i++){
        temp = i * i;
        sum += temp;
    }
    return sum;
}

int main(){
    int num;
    std::cin >> num;

    std::cout << sumOfSquares(num);
}