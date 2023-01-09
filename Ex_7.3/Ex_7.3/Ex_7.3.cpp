#include <iostream>

float program_1(float a1, float b1, float h1) {
    float v1 = 0;
    v1 = a1 * b1 * h1;
    return v1;
}

float program_2(float a2, float b2, float h2) {
    float s2 = 0;
    s2 = (a2 + b2) * 2 * h2;
    return s2;
}

float program_3(float a3, float b3, float h3) {
    float s3 = 0;
    s3 = ( (a3 + b3) * 2 * h3 ) + (2 * a3 * b3);
    return s3;
}

float program_4(float a4, float b4, float h4) {
    float cv4 = 0;
    cv4 = 4 * (h4 + a4 + b4);
    return cv4;
}

int main()
{
    float a, b, h;
    std::cout << "Nhap lan luot a, b, h: ";
    std::cin >> a >> b >> h;
    std::cout << "Ket qua 1 - The tich: " << program_1(a, b, h) << "\n";
    std::cout << "Ket qua 2 - Dien tich xung quanh: " << program_2(a, b, h) << "\n";
    std::cout << "Ket qua 3 - Dien tich toan phan: " << program_3(a, b, h) << "\n";
    std::cout << "Ket qua 4 - Chu vi: " << program_4(a, b, h) << "\n";
    return 0;
}

