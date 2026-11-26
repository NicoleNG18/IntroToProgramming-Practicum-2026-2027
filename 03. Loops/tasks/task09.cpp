#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    if (b == 0)
    {
        std::cout<<"Devider must be greater or equal to 1!";
    }

    int tempA = a;
    int tempB = b;

    while (tempB != 0)
    {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    int nod = tempA;

    std::cout << (a / nod) << "/" << (b / nod) << std::endl;
}
