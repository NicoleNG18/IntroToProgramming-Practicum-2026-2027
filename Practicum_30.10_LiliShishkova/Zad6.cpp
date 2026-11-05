#include <iostream>

bool isDigit(char ch){

    return ch >= '0' && ch <= '9';
}

bool isUpper(char ch){

    return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch){

    return ch >= 'a' && ch <= 'z';
}

bool isAlpha(char ch){

    return isUpper(ch) || isLower(ch);
}

bool isAlnum(char ch){

    return isAlpha(ch) || isDigit(ch);
}

char capitalize(char ch){

    if (isLower(ch)){
        return ch - 32;
    }
    return ch;
}

char makeLower(char ch){
    if (isUpper(ch)){
        return ch + 32;
    }
    return ch;
}

int parseInt(char ch){
    if (!isDigit(ch)){
        return -1;
    }
    return ch - '0';
}

char toChar(int num){
    if (num < 0 || num > 9){
        return '\0';
    }
    return num + '0';
}

double myLog(int num, int base){
    if (num <= 0 || base <= 0 || base == 1){
        return -1;
    }
    double result = 0;

    while (num >= base){
        num /= base;
        result++;
    }

    return result;
}

double myPow(double num, int power){
    if (num == 0 && power < 0){
        return -1;
    }
    double result = 1;
    int count = power;

    if (count < 0){
        count = -count;
    }

    for (int i = 0; i < count; i++){
        result *= num;
    }

    if (power < 0){
        result = 1 / result;
    }

    return result;
}

double myCeil(double num){
    int integer = (int)num;

    if (num > integer){
        return integer + 1;
    }

    return integer;
}

double myFloor(double num){
    int integer = (int)num;

    if (num < integer){
        return integer - 1;
    }

    return integer;
}

double myAbs(double num){
    if (num < 0){
        return -num;
    }
    return num;
}

int main(){
    std::cout << isDigit('5') << '\n';
    std::cout << isUpper('A') << '\n';
    std::cout << isLower('b') << '\n';
    std::cout << isAlpha('c') << '\n';
    std::cout << isAlnum('7') << '\n';

    std::cout << capitalize('a') << '\n';
    std::cout << makeLower('B') << '\n';

    std::cout << parseInt('9') << '\n';
    std::cout << toChar(9) << '\n';

    std::cout << myLog(8, 2) << '\n';
    std::cout << myPow(2, 3) << '\n';
    std::cout << myCeil(3.2) << '\n';
    std::cout << myFloor(3.8) << '\n';
    std::cout << myAbs(-5) << '\n';
}