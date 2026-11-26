#include <iostream>

unsigned getDigit(unsigned a)
{
    return a % 10; 
}

unsigned removeDigit(unsigned a)
{
    return a / 10;
}

long long getFactoriel(unsigned digit)
{
    long long fact = 1;
    for (unsigned i = 1; i <= digit; i++)
    {
        fact = fact * i;
    }
    return fact;
}

long long sumOfDigitsFactoriels(unsigned x)
{
    long long totalSum = 0;

    if (x == 0) 
    {
        return getFactoriel(0);
    }

    while (x > 0)
    {
        unsigned currentDigit = getDigit(x);
        totalSum = totalSum + getFactoriel(currentDigit);     
        x = removeDigit(x);                         
    }

    return totalSum;
}

bool isStrong(unsigned x)
{
    return sumOfDigitsFactoriels(x) == x;
}

int main()
{
    unsigned num1;
    std::cin >> num1;
    std::cout << std::boolalpha << isStrong(num1);
}
