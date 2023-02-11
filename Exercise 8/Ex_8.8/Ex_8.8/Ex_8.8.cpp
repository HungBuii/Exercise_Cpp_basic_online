#include <iostream>
using namespace std;

int program_1(int length) {
    int x = length * sizeof(int);
    return x;
}

void program_2(int a[], int length) {
    std::cout << "\t" << "Dia chi" << "\t" << "Gia tri" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << "\t" << &a[i] << "\t" << a[i] << std::endl;
    }
}

int main()
{
    const int length = 5;
    int a[length] = { 1, 6, 3, 7, 2 };
    cout << "Ket qua 1: " << program_1(length) << " bytes\n";
    cout << "Ket qua 2:\n"; program_2(a, length);
}

