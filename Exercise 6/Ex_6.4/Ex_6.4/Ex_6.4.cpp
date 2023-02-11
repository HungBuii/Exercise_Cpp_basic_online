#include <iostream>

int main()
{
    int x1, x2, x3, x4;

    std::cout << "Nhap lan luot x1, x2, x3, x4: ";
    std::cin >> x1 >> x2 >> x3 >> x4; // x1, x2, x3, x4 duoc nhap vao may tinh se duoc luu cung mot vung du lieu cach nhau 4 byte

    int* p = NULL;
    int product_num = 1;

    for (p = &x1; p <= &x4; p += 8) { // con tro p co kich thuoc 8 byte 
        std::cout << *p << " "; 
        product_num *= *p;
    }

    std::cout << std::endl;
    /*std::cout << (double)product_num / 4 << std::endl;*/
    std::cout << (double)pow(product_num, 0.25); /*GM = x1×x2×x3...xn−−−−−−−−−−−−−−−√n Trung Binh Nhan */

    std::cout << sizeof(p); // 8 byte
}

