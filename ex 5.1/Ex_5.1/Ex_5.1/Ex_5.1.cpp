#include <iostream>

int main()
{
    int product_num = 1;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            product_num = i * j;
            std::cout << i << " * " << j << " = " << product_num << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}

