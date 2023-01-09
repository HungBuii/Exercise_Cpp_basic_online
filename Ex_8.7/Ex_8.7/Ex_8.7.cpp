/*
Nhập 1 mảng 2 chiều có kích thước MxNxP gồm các giá trị là số nguyên
1. In ra tất các phần tử trong mảng theo thứ tự giảm dần và ko có số trùng lặp
2. In ra các cặp số chúng chia hết được cho nhau
3. In ra các bộ 3 số khác nhau sao cho 1 số bằng tổng 2 số còn lại

******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    const int M = 2;
    const int N = 3;
    const int P = 2;

    int a[M][N][P] = {
                            {
                                {3, 2},
                                {2, 7},
                                {1, 8}
                            },
                            {
                                {2, 9},
                                {5, 8},
                                {7,20}
                            }
    };

    // Chuyển đổi thành mảng 1 chiều 
    int b[M * N * P];
    int i = 0;
    for (int j = 0; j < M; j++) {
        for (int k = 0; k < N; k++) {
            for (int l = 0; l < P; l++) {
                b[i++] = a[j][k][l];
            }
        }
    }

    // Sắp xếp giảm dần 
    for (int i = 0; i < M * N * P; i++) {
        for (int j = i + 1; j < M * N * P; j++) {
            if (b[j] > b[i]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    // Lược bỏ số trùng lặp 
    int c[M * N * P];
    int count = 0;
    for (int i = 0; i < M * N * P; i++) {
        if (b[i] != b[i + 1]) c[count++] = b[i];
    }

    // Câu 1 
    {
        cout << "Ket qua 1: ";
        for (int i = 0; i < count; i++) {
            cout << c[i] << " ";
        }
        cout << "\n";
    }

    // Câu 2
    {
        cout << "Ket qua 2:\n";
        for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                if (c[i] % c[j] == 0) {
                    cout << "\t(" << c[i] << "; "
                        << c[j] << ")\n";
                }
            }
        }
    }

    // Câu 3
    {
        cout << "Ket qua 3:\n";
        for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                for (int k = j + 1; k < count; k++) {
                    if (c[i] == c[j] + c[k]) {
                        cout << "\t" << c[i] << " = "
                            << c[j] << " + " << c[k] << "\n";
                    }
                }
            }
        }
    }

    return 0;
}




