#include <iostream>

int main()
{
    const int length = 5;
    int a[length] = {};
    std::cout << "Enter even 5 elements array: ";
    for (int i = 0; i < length; i++) {
        std::cin >> a[i];
    }

    // Result 1
    std::cout << "Result 1: " << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << std::endl;
    }

    // Result 2
    std::cout << "Result 2: ";
    for (int i = 0; i < length; i++) {
        if (i < 4) std::cout << a[i] << ", ";
        else if (i >= length-1) std::cout << a[i] << std::endl;
    }

    // Result 3
    std::cout << "Result 3: ";
    for (int i = 0; i < length/2; i++) { // loop 2 times 0 - 4, 1 - 3 and can't loop 2 - 2
            int temp = a[i];
            a[i] = a[length-i-1];
            a[length-i-1] = temp;
    }
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << " ";
    }

}

