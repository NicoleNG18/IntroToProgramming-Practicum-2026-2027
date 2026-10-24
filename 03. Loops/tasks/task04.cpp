#include <iostream>
 
int main()
{
    unsigned number;
    std::cin>>number;
 
    for(unsigned col = 0; col<number; col++ )
    {
        for(unsigned row = 0; row<number; row++ )
        {
            if(row == col)
            {
                std::cout<<"0";
            }
            else if(row < col)
            {
                std::cout<<"-";
            }
            else
            {
                std::cout<<"+";
            }
            if(row==number-1)
            {
            std::cout<<"\n";
            }

        }
        
    }
}
