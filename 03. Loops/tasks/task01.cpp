int main()
{
    unsigned number;
    std::cin>>number;
    
    for(unsigned i = 1; i<number; i++)
    {
        std::cout<<"X = " << i <<" Y = " <<(number-i)<<"\n";
    }
}
