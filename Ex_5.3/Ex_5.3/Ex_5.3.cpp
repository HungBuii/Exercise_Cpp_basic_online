#include <iostream>

int main()
{
    int x = 0;
    std::cout << "Enter x = ";
    std::cin >> x;

    // Part 1

    for (int i = 0; i <= x; i++) {
        if (i == 0) {
            continue;
        }
        if (x % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    // Part 2
    int count = 0;
    for (int i = 0; i <= x; i++) {
        if (i == 0) {
            continue;
        }
        if (x % i == 0) {
            count++;
        }
    }
    std::cout << count << std::endl;

    // Part 3
    bool prime_num = true;
    for (int i = 0; i < x; i++) {
        if (i == 0) {
            continue;
        }
        if (count > 2) {
            prime_num = false;
        }
        else {
            prime_num = true;
        }
    }

    if (prime_num == true) {
        std::cout << "It's a prime number!";
    }
    else {
        std::cout << "It's not a prime number!";
    }

}
