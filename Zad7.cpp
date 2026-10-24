#include <iostream>

int main(){

    int num;

    std::cin >> num;

    int square = num * num;
    bool automorphic = true;

    while (num > 0){
        if (num % 10 != square % 10){
            automorphic = false;

            break;
        }
        num /= 10;
        square /= 10;
    }

    if (automorphic){
        std::cout << "Automorphic";
    } 
    else{
        std::cout << "Not automorphic";
    }
}