#include <iostream>
#include <cmath>

double distance(int x1, int y1, int x2, int y2){

    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double perimeter(int x1, int y1, int x2, int y2, int x3, int y3){
    double ab = distance(x1, y1, x2, y2);
    double bc = distance(x2, y2, x3, y3);
    double ca = distance(x3, y3, x1, y1);

    return ab + bc + ca;
}

int main(){
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    std::cout << perimeter(x1, y1, x2, y2, x3, y3);
}