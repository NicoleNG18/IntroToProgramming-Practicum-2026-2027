#include <iostream>

const int SIZE = 128;

void multiplyPolynomials(int A[], int n, int B[], int m, int C[]) {
    for (int i = 0; i < n + m - 1; i++) {
        C[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i + j] += A[i] * B[j];
        }
    }
}

int main()
{
    int A[SIZE];
    int B[SIZE];
    int C[SIZE * 2 - 1];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        std::cin >> B[i];
    }
    multiplyPolynomials(A, n, B, m, C);
    for (int i = 0; i < n+m-1; i++)
    {
        std::cout << C[i] << " ";
    }

    return 0;
}
