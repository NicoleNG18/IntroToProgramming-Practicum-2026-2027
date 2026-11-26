#include <iostream>

const size_t MAXARRAYSIZE = 100;

void getArray (unsigned arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

double avg (unsigned arr[], size_t size)
{
    unsigned avg;
    for (unsigned i = 0; i < size; i++  )
    {
        avg = avg + arr[i];
        if (i == size - 1 )
        {
            avg = avg / size;
        }
    }
    return avg;

}

unsigned aboveAvg (unsigned arr[], size_t size)
{
    unsigned cnt = 0;
    double average =  avg(arr, size);
    for (unsigned i = 0; i < size; i++  )
    {
        if(arr[i] > average)
        {
            cnt++;
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
    }while(n<1 || n>100);
    unsigned arr[MAXARRAYSIZE];
    getArray(arr, n);
    std::cout<<"Average: " << avg(arr, n);
    std::cout<<"\nAbove average: " <<aboveAvg(arr, n);
    
}
