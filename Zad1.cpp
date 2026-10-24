#include <iostream>

int main(){
    
    int x, y, n;

    std::cin >> n;

    for (int i = 1; i < n; i++){
        x = i;
        y = n - x;

        if (x > 0 && y > 0){
            std::cout << "x = " << x << " y = " << y << "\n";
        }
    }
}