#include <iostream>

void findSpecialNumbers(int m, int n) {
    bool found = false;
    for (int i = m; i <= n; i++) {
        if (i >= 1000 && i <= 9999) {
            int thousands = i / 1000;  
            int tensAndOnes = i % 100;
            int newNum = thousands * 100 + tensAndOnes;
            if (newNum % 11 == 0) {
                std::cout << i << " ";  
                found = true;            
            }
        }
    }
    if (!found)
    {
        std::cout << "No such a number!";
    }
    
    std::cout << std::endl;
}

int main() {
    int m, n;
    std::cin >> m >> n;
    findSpecialNumbers(m, n);
}
