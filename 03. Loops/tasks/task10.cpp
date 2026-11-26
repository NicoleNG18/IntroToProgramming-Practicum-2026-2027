#include <iostream>

int main()
{
    unsigned long long inputNumber;
    std::cin >> inputNumber;

    if (inputNumber == 0)
    {
        std::cout << 0 << std::endl;
    }

    int maxCount = 0;
    int bestDigit = 0;

    for (int i = 9; i >= 0; i--) {
        long long temp = inputNumber;
        int currentCount = 0;

        while (temp > 0)
        {
            if (temp % 10 == i)
            {
                currentCount++;
            }
            temp = temp / 10;
        }

        if (currentCount > maxCount)
        {
            maxCount = currentCount;
            bestDigit = i;
        }
    }

    std::cout << bestDigit << std::endl;

}
