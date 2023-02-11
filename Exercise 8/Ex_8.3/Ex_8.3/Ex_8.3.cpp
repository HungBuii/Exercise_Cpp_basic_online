#include <iostream>

int main()
{
    const int length = 1000;
    int a[length];

    std::cout << "Nhap so luong phan tu: ";
    int n; std::cin >> n;

    std::cout << "Nhap lien tiep " << n << " gia tri: ";
    for (int i = 0; i < n; i++) std::cin >> a[i];

    // Result 1

    std::cout << "Ket qua 1: " << a[0] + a[n - 1] << "\n";

    // Result 2
    std::cout << "Ket qua 2: ";
        if (n % 2 == 0) {
            std::cout << a[n / 2 - 1] << " ";
        }
        std::cout << a[n / 2] << std::endl;
    
    // Result 3
    int sum_even = 0;
    int sum_odd = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) sum_even += a[i];
        else sum_odd += a[i];
    }
    std::cout << "Ket qua 3: " << sum_even * sum_odd << std::endl;

    return 0;
}

