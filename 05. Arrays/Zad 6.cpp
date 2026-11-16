#include <iostream>
#include <cmath>

const int SIZE = 128;

int maxManhattanDistance(int x[], int y[], int n) {
    int max_dist = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dist = std::abs(x[i] - x[j]) + std::abs(y[i] - y[j]);
            if (dist > max_dist) {
                max_dist = dist;
            }
        }
    }
    return max_dist;
}

int main()
{
    int n;
	std::cin >> n;
    int y[SIZE];
    int x[SIZE];
    for (int i = 0; i < n; i++)
    {
        std::cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> y[i];
    }
	std::cout << maxManhattanDistance(x, y, n) << std::endl;
}

