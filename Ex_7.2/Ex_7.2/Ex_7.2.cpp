#include <iostream>

using namespace std;

float program(float x) {
    float result = (float)(x * 1.8 + 32);
    return result;
}

int main() {
    std::cout << "Ket qua 1:\n";
    for (int i = 0; i <= 10; i++) {
        std::cout << "\t" << i << " (C) = " << program(i) << " (F)\n";
    }
    std::cout << "\nNhap do C: ";
    float celsius = 0;
    std::cin >> celsius;
    std::cout << "Ket qua 2: " << program(celsius);
    return 0;
}