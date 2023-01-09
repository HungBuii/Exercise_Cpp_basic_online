#include <iostream>

int main()
{
    //int a[4] = { 1, 2, 3 ,4 };

    //std::cout << sizeof(a) << std::endl; // kich thuoc cua mang (byte)

    //std::cout << typeid(a).name() << std::endl; // ten kieu du lieu cua mang

    //std::cout << &a << "\t" << a << std::endl; // dia chi luon o vi tri dau tien cua mang

    int a[] = { 1, 2, 3 ,4, 5 };

    std::cout << sizeof(a) / sizeof(int) << std::endl; // so phan tu co trong mang

    return 0;
}

