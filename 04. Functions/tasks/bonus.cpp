#include <iostream>

bool isPrime(unsigned n)
{
    if (n < 2) return false;
    for (unsigned i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

unsigned countDistinctPrimeDivisors(unsigned n)
{
    unsigned count = 0;
    for (unsigned i = 2; i <= n; ++i)
    {
        if (n % i == 0 && isPrime(i))
        {
            count++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    return count;
}

unsigned countNumbersWithKPrimeDivisors(unsigned a, unsigned b, unsigned k)
{
    unsigned totalCount = 0;
    for (unsigned i = a; i <= b; ++i) {
        if (countDistinctPrimeDivisors(i) == k)
        {
            totalCount++;
        }
    }
    return totalCount;
}

int main()
{
    unsigned a, b, k;
    std::cin >> a >> b >> k;
    std::cout << countNumbersWithKPrimeDivisors(a, b, k);
}
