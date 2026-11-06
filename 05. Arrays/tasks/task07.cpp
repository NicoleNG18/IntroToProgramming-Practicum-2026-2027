#include <iostream>

const size_t MAXARRAYSIZE = 128;

void getArray (double arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

void getMultiplication (double arrM[], double a[], double b[], size_t sizeA, size_t sizeB)
{
    for (unsigned i = 0; i< sizeA; i++)
    {
        for (unsigned j = 0; j< sizeB; j++)
        {
            arrM[i+j] = arrM[i+j] +  (a[i] * b[j]);
        }
    }

}

void printArray(double a[], size_t size)
{
    for (unsigned i = 0; i< size; i++)
    {
        std::cout<<a[i] << " ";
    }
}

int main()
{
    size_t n;
    do
    {
        std::cin>>n;
    }
    while(n<1 || n>MAXARRAYSIZE);
    size_t m;
    do
    {
        std::cin>>m;
    }
    while(m<1 || m>MAXARRAYSIZE);
    double arr1[MAXARRAYSIZE];
    double arr2[MAXARRAYSIZE];
    double arrMulti[(MAXARRAYSIZE*2) - 1 ];
    getArray(arr1, n);
    getArray(arr2, m);
    getMultiplication(arrMulti, arr1, arr2, n, m);
    printArray(arrMulti, n+m-1);
}
