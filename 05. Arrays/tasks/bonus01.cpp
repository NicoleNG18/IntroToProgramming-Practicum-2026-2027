#include <iostream>

const size_t MAXARRAYSIZE = 128;

void getArray (unsigned arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}


long long getCompressed(unsigned a[], size_t size)
{
    long long compr = 0;

    for (unsigned i = 0; i < size; )
    {
        unsigned current_digit = a[i];
        unsigned cnt = 0;
        while (i < size && a[i] == current_digit)
        {
            cnt++;
            i++;
        }
        compr = compr * 10 + current_digit;
        compr = compr * 10 + cnt;
    }

    return compr;
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
    std::cout<< getCompressed(arr1, n);
}
