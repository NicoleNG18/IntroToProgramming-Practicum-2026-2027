#include <iostream>

unsigned getDigit(unsigned x)
{
    return x % 10;
}

unsigned mixNums(unsigned a, unsigned b)
{
    unsigned result = 0;
    while (a > 0 || b > 0)
    {
        if (a > 0)
        {
            result = result * 10 + getDigit(a); 
            a = a / 10;                         
        }
        if (b > 0)
        {
            result = result * 10 + getDigit(b); 
            b = b / 10;                                              
        }
    }
    return result;
}

int main()
{
    unsigned num1, num2;
    std::cin >> num1 >> num2;
    std::cout << mixNums(num1, num2);
}
