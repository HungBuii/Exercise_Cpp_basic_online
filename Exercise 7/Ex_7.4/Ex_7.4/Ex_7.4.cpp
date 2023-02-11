#include <iostream>

bool program_1(int value) {
    if (value % 2 == 0 || value == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool program_2(int value) {
    if (value >= 0) {
        return true;
    }
    else {
        return false;
    }
}

bool program_3(int value) {
    if (value < 1) {
        return false;
    }
    else {
        for (int i = 2; i < (int)value / 2; i++) {
            if (value % i != 0) {
                return true;
            }
            else {
                return false;
            }
        }
    }
}

int main()
{
    int x;
    std::cout << "Nhap x: ";
    std::cin >> x;
    std::cout << "Ket qua 1: " << (program_1(x) ? "So chan" : "So le") << "\n";
    std::cout << "Ket qua 2: " << (program_2(x) ? "So duong" : "So am") << "\n";
    std::cout << "Ket qua 3: " << (program_3(x) ? "So nguyen to" : "Ko phai so nguyen to") << "\n";
}

