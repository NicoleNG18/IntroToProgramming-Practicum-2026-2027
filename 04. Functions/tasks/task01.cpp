#include <iostream>

int getCntDigits(int x)
{
    if(x<0)
    {
        x = -x;
    }
    unsigned cnt = 0;
    while(x>0)
    {
        x = x / 10;
        ++cnt;
    }
    return cnt;

}

int main() 
{
    int n;
    std::cin>>n;
    std::cout<<getCntDigits(n);

}
