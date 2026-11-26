#include <iostream>

const size_t MAXARRAYSIZE = 16;

void getArray (unsigned arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

unsigned getGCDTWO (unsigned a, unsigned b)
{
    while ( b != 0)
    {
            long long temp = b;
            b = a % b;
            a = temp;
    }
    return a;
}

unsigned getGCD(unsigned a[], unsigned b[], size_t size)
{
    unsigned gcd = 0;
    for (unsigned i = 0; i< size; i++  )
    {
        gcd = getGCDTWO(gcd, b[i]);
    }
    return gcd;
}

int main()
{
    size_t n;
    do
    {
        std::cin>>n;
    }
    while(n<1 || n>MAXARRAYSIZE);
    unsigned arr1[MAXARRAYSIZE];
    getArray(arr1, n);
    std::cout<<getGCD(arr1, arr1, n);
}
