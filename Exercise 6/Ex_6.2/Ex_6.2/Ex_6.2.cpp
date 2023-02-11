#include <iostream>

int main()
{
    int x = 3;
    float y = 10.5;
    bool z = false;
    std::string s = "abc";

    /*int* p1 = &x;
    float* p2 = &y;
    bool* p3 = &z;
    std::string* p4 = &s;*/

    std::cout << "\t" << "Dia chi" << "\t\t\t" << "Gia tri" << std::endl;
    std::cout << "x" << "\t" << &x << "\t" << x << std::endl;
    std::cout << "y" << "\t" << &y << "\t" << y << std::endl;
    std::cout << "z" << "\t" << &z << "\t" << z << std::endl;
    std::cout << "s" << "\t" << &s << "\t" << s << std::endl;
}
