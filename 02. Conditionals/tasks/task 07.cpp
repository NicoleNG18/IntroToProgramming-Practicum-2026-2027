#include <iostream>
 
int main()
{
    std::cout<<"a: ";
    unsigned a;
    std::cin>>a;
    if(a<0)
    {
        std::cout<<"Invalid side size!";
    }
       
    std::cout<<"x: ";
    unsigned x;
    std::cin>>x;
    if(x<0)
    {
        std::cout<<"Invalid X!";
    }

    std::cout<<"y: ";
    unsigned y;
    std::cin>>y;
    if(y<0)
    {
        std::cout<<"Invalid Y!";
    }

    if((x+y)%2 == 0)
    {
         std::cout << "black";
    } else {
        std::cout << "white";
    
    }


}
