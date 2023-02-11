#include <iostream>

bool check_prime_number(int x) {
    if (x < 1) return false;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    const int M = 4;
    const int N = 3;
    int a[M][N] = { {8, 12, 9}, {4, 10, 13}, 
                    {15, 8, 20}, {12, 11, 10} 
                  };


    // Exercise 1 + Exercise 2
    int sum = 0;
    int max = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum += a[i][j];
            if (a[i][j] > max) max = a[i][j];
        }
    }
    std::cout << "Result 1: " << sum << std::endl;
    std::cout << "Result 2: " << max << std::endl;

    // Exercise 3
    int sum_max = 0;
    int i_max = 0;
    
    for (int i = 0; i < M; i++)
    {
        sum = 0;
        for (int j = 0; j < N; j++)
        {
            sum += a[i][j];
        }
        if (sum > sum_max) {
            sum_max = sum;
            i_max = i;
        }
    }

    std::cout << "Result 3: " ;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i == i_max) {
                std::cout << a[i][j] << " ";
            }
        }
    }
    std::cout << std::endl;

    // Exercise 4

    std::cout << "Result 4: ";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (check_prime_number(a[i][j])) {
                std::cout << a[i][j];
                return 0;
            }
        }
    }
    // return 0 dung de thoat het chuong trinh khi tim duoc 1 so nguyen to
    // return 0 xuat hien se lam cac doan code duoi khong the hoat dong 
    // neu can nhung doan code duoi hoat dong nua cach duy nhat la dua code tu 64 den 71 vao 1 function roi "return" 
    // de thoat vong lap khi tim duoc gia tri can tim
    std::cout << "No prime number!" << std::endl;

    return 0;
}

