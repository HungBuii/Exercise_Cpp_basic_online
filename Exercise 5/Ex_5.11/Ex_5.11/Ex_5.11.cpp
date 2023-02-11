#include <iostream>

int main()
{
    int m, n = 0;
    std::cout << "Enter m = "; // chieu dai 
    std::cin >> m;

    std::cout << "Enter n = "; // chieu rong
    std::cin >> n;

    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }*/

    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1) {
                std::cout << "* ";
            }
            else if ( (0 < i < n -1) && (j == 0 || j == m - 1) ) {
                std::cout << "* ";
            }
            else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }*/


}

