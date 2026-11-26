#include <iostream>

unsigned square (unsigned a)
{
    return a*a;
}

unsigned sumOfSquares(unsigned x)
{
    unsigned sum = 0;
    for(unsigned i = 1; i <= x; i++)
    {
        sum = sum + square(i);
    }
    return sum;
}

int main() 
{
    unsigned n;
    std::cin>>n;
    std::cout<<sumOfSquares(n);

}
