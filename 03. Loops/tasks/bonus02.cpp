#include <iostream>

int main()
{
    unsigned n;
    std::cin>>n;
    if (n<2)
    {
        std::cout<<"Enter at least 2!";
    }
    else
    {
        unsigned sum = 0;
        unsigned a;
        for(unsigned i = n; i >1; i--)
        {
            std::cin>>a;
            sum = sum + a;
        }
        std::cout<<"Missing: " <<n-a+1;
    }
}
