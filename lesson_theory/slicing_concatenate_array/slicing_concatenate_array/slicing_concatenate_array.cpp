#include <iostream>

void concat(int a[], int length_a, 
            int b[], int length_b, 
            int c[], int length_c) 
    // cooncatenate
{
    for (int i = 0; i < length_a; i++)
    {
        c[i] = a[i];
    }

    int j = 0;
    for (int i = length_a; i < length_c; i++)
    {
        c[i] = b[j];
        j++;
    }
}

void split(int a[], int length_a,
    int b[], int length_b,
    int c[], int length_c,
    int index)
{
    for (int i = 0; i <= index; i++) // bat buoc cat tu index = 2
                                     // neu muon cat tuy y thi phai goi them 2 mang voi 2 kich thuoc khac voi 
                                     // 2 mang ban dau a, b
    {
        a[i] = c[i];
    }

    int j = 0;
    for (int i = index + 1; i < length_c; i++) {
        b[j] = c[i];
        j++;
    }

}

int main()
{
    const int length_a = 3;
    const int length_b = 2;
    const int length_c = length_a + length_b;

    int a[length_a] = { 1, 2, 3 };
    int b[length_b] = { 4, 5 };
    int c[length_c] = { };

    concat(a, length_a, b, length_b, c, length_c);

    for (int x : c) std::cout << x << " ";
    std::cout << std::endl;

    split(a, length_a, b, length_b, c, length_c, 2);

    for (int x : a) std::cout << x << " ";
    std::cout << std::endl;

    for (int x : b) std::cout << x << " ";
    std::cout << std::endl;
}

