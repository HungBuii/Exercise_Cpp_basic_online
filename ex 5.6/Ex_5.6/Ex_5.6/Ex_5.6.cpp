#include <iostream>

int main()
{
    int total = 0;
    int x = 0;
    std::cout << "Enter x = ";
    std::cin >> x;
    
    int n = 0;
    for (int i = 0; i < x; i++) {
        total += i;
        if (total > x) {
            n = i;
            break;
        }
    }

    std::cout << "Integer number need to find = " << n << std::endl;

}


