#include <iostream>

bool sameCircle(int x1, int y1, int x2, int y2){

    return x1 * x1 + y1 * y1 == x2 * x2 + y2 * y2;
}

int main(){
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (sameCircle(x1, y1, x2, y2)){
        std::cout << "yes";
    }
    else{
        std::cout << "no";
    }
}