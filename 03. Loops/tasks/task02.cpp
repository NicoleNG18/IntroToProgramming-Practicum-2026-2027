#include <iostream>
 
int main()
{
    unsigned number1;
    std::cin>>number1;
    
    unsigned number2;
    std::cin>>number2;
 
    unsigned smaller = (number1>number2)? number2:number1;
    
    for(unsigned i = smaller ;i>=1; i-- )
    {
        if(number2%i ==0 && number1%i==0)
        {
            std::cout<<i<<" ";
        }
        else
        {
            continue;
        }
    }    
}
