#include <iostream>

int main()
{
    int x = 0;
    std::cout << "Enter x = ";
    std::cin >> x;

    int sum = 0;
    for (int i = 0; i <= x / 2; i++) {
        if (i == 0) {
            continue;
        }
        if (x % i == 0) {
            sum += i;
        }
    }
    
    if (sum == x) {
        std::cout << "It's a perfect number!";
    }
    else {
        std::cout << "It's not a perfect number!";
    }
}

