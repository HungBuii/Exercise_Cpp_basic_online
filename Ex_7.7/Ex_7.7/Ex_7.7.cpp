#include <iostream>
#include <cmath>

void swap(int& a, int& b)
{
    int temp = 0;
    temp = b;
    b = a;
    a = temp;
}

void swap(int* a, int* b)
{
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;

    // int x = 10;
    // int* p = &x; 
    // ( int* p;
    // p = &x )
    // *p = 10;
    // p = 0x7ffd008ac77c
}


int main()
{
    int x = 10;
    int y = 20;

    {
        swap(x, y);
        std::cout << "Test 1: " << (x == 20 && y == 10 ? "Pass" : "Failed") << "\n";
    }
    {
        swap(&x, &y);
        std::cout << "Test 2: " << (x == 10 && y == 20 ? "Pass" : "Failed") << "\n";
    }
    {
        int z = 30;
        int* p1 = &x;
        int* p2 = &y;
        int* p3 = &z;
        swap(p1, p2);
        swap(p2, p3);
        std::cout << "Test 3: " << (x == 20 && y == 30 && z == 10 ? "Pass" : "Failed") << "\n";
    }
}

