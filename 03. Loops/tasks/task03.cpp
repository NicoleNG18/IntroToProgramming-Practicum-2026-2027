#include <iostream>
 
int main()
{
    unsigned number;
    std::cin>>number;
    
    unsigned sum=0;
    for(unsigned i = 1;i<number; i++)
    {
        if(number%i==0)
        {
            sum = sum+i;
        }
        if(i == (number - 1) && sum == number)
        {
            std::cout<<"Perfect";
        }
        if(i==(number - 1) && sum != number)            
        {
            std::cout<<"Not perfect"; 
        }
    }    
}
