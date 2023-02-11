#include <iostream>

int main()
{
    float x = 0;
    float y = 0;

    std::cout << "Enter x, y: ";
    std::cin >> x >> y;

    float* p = &x;
    float* q = &y;

    std::cout << ((*p) + (*q)) / 2 << std::endl;
}

