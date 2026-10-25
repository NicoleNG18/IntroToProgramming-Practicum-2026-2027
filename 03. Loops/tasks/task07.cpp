#include <iostream>

int main()
{
    unsigned n;
    std::cin >> n;

    unsigned square = n * n; 
    unsigned tempN = n; 

    bool isAutomorphic = true;

    do
    {
        unsigned digitN = tempN % 10;
        unsigned digitSquare = square % 10;

        if (digitN != digitSquare)
        {
            isAutomorphic = false;
            break; 
        }

        tempN = tempN / 10;
        square = square / 10;
    }
    while (tempN > 0); 

    if (isAutomorphic==true)
    {
        std::cout << "Automorphic" << std::endl;
    }
    else
    {
        std::cout << "Not automorphic" << std::endl;
    }
}
