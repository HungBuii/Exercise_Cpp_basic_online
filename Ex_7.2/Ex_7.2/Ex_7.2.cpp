#include <iostream>

float program(int j) {
    double x = 0;
    x = j * 1.8 + 32;
    return x; 
}

int main()
{
    
    std::cout << "Ket qua 1: " << std::endl;
    
    for (int i = 0; i < 11; i++) {
        
        std::cout << i << " (C) = " << program(i) << " (F)" << std::endl;
    }

    std::cout << "Ket qua 2: " << std::endl;
    int c = 0;
    std::cout << "Enter degree C: ";
    std::cin >> c;
    std::cout << c << " (C) = " << program(c) << " (F)" << std::endl;

    return 0;
}

