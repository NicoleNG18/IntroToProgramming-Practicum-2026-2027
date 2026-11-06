#include <iostream>

const size_t MAXARRAYSIZE = 256;

void getArray (unsigned arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

unsigned getInversion (unsigned a[], size_t size)
{
    unsigned cnt = 0;
    for (unsigned j = 1; j< size; j++  )
    {
        for (unsigned i = 0; i< j ; i++)
        {
            if (a[j] < a[i])
            {
                cnt++;
            }

        }
    }
    return cnt;
    
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
    std::cout<< getInversion(arr1, n );
}
