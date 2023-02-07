#include <iostream>

bool is_subarray(int a[], int length_a, 
                 int b[], int length_b) 
{
    if (length_a < length_b)
        return false;

    for (int i = 0; i < length_a; i++)
    {
        if (a[i] == b[0]) {
            if (i + length_b > length_a) return false;

            bool check = true;
            for (int j = 0; j < length_b; j++)
            {
                if (b[j] != a[i + j]) {
                    check = false;
                    break;
                }
            }
            if (check == true) return true;
        }
    }
    return false;
}

int main()
{
    const int length_a = 6;
    const int length_b = 3;
    int a[length_a] = { 1, 2, 3, 4, 5 }; // can customize from length
    int b[length_b] = { 3, 4, 5 };

    bool result = is_subarray(a, length_a, b, length_b);
    std::cout << (result ? "True" : "False");
}

