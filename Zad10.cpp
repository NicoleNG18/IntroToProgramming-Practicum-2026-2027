#include <iostream>

int main(){

    int num;
    int maxCount = 0;
    int mostFrequent = 0;

    std::cin >> num;

    for (int i = 0; i <= 9; i++){
        int temp = num;
        int count = 0;

        while (temp > 0) {
            if (temp % 10 == i) {
                count++;
            }
            temp /= 10;
        }

        if (count >= maxCount) {
            maxCount = count;
            mostFrequent = i;
        }
    }
    std::cout << mostFrequent;
}
