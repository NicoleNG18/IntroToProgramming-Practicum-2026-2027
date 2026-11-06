#include <iostream>
 
int main()
{
    std::cout<<"x: ";
    double x;
    std::cin>>x;
 
    std::cout<<"y: ";
    double y;
    std::cin>>y;

    if(x==0 || y==0)
    {
        std::cout<<"On axis";
    }
    if(x>0 && y>0 )
    {
        std::cout<<"I";
    }
    if(x<0 && y>0 )
    {
        std::cout<<"II";
    }
    if(x<0 && y<0 )
    {
        std::cout<<"III";
    }
    if(x>0 && y<0 )
    {
        std::cout<<"IV";
    }
}
