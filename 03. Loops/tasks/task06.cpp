#include <iostream>

int main()
{
    long long base = 1;
    
    long long binary;
    std::cin >> binary;

    long long decimal = 0;

    long long tempBinary = binary;

    while (tempBinary > 0)
    {
        long long lastDigit = tempBinary % 10;

        if (lastDigit != 0 && lastDigit != 1) {
            std::cout << "Not binary" << std::endl;
            return 1;
        }
        
        decimal = decimal + (lastDigit * base);
        base = base * 2; 

        tempBinary = tempBinary / 10;
    }

    std::cout<<decimal;
    
}
