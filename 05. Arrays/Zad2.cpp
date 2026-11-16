
#include <iostream>

const unsigned MAX_SIZE_OF_VECTOR = 128;

long long scalarProduct(int a[], int b[], int n) {
    long long product = 0;
    for (int i = 0; i < n; i++) {
        product += a[i] * b[i];
    }
    return product;
}

int main()
{
    unsigned n;
    std::cout << "n = ";
	std::cin >> n;
    int a[MAX_SIZE_OF_VECTOR];
    int b[MAX_SIZE_OF_VECTOR];
	std::cout << "a = ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cout << "b = ";
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];

    }

    std::cout << scalarProduct(a, b, n) << std::endl;

}
