#include <iostream>

int main()
{
    unsigned n;
    do
    {
        std::cin>>n;
        if(n<2)
        {
            std::cout<<"Enter at least 2 numbers!";
        }
        else
        {
            unsigned max = 0;
            unsigned max2 = 0;
            unsigned currentMax = 0;
            unsigned currentMax2 = 0;
            for(unsigned i = n; i>=1; i--)
            {
                unsigned current;
                std::cin>>current;
                if(current >= currentMax2)
                {
                    if(current >= currentMax)
                    {
                        currentMax = current;
                        if(currentMax2<=max2)
                        {
                            currentMax2=max;
                        }
                        else
                        {
                            currentMax = current;
                        }
                    }
                    else
                    {
                        currentMax2=current;
                    }
                }   
            max = currentMax;
            max2 = currentMax2;
            } 
            
            std::cout<<"Max: " <<max <<"\nSecond to max: " <<max2;
        }
    }
    while(n<2);

}
