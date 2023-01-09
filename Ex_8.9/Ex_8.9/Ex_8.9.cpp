#include <iostream>
using namespace std;

bool check_pointer(int* a, int n, int* p)
{
    // Check dieu kien con tro co thuoc mang khong
    /* Cach 1
    for (int i = 0; i < n; i++) {
        if (p == &a[i]) {
            return true;
        }
    }
    return false;*/

    // Cach 2
    if (p >= a && p <= a + n)
    {
        return true;
    }
    return false;
}

bool check_same_pointers(int* a, int n, int* p1, int* p2)
{   
    // Check 2 con tro co cung tro giong cho nhau khong
    /* Cach 1
    for (int i = 0; i < n; i++) {
        if (p1 == &a[i] && p2 == &a[i]) {
            return true;
        }
    }
    return false;*/

    // Cach 2
    if (check_pointer(a, n, p1)
        && check_pointer(a, n, p2)
        && p1 == p2)
    {
        return true;
    }
    return false;
}

int get_distance_in_byte(int* a, int n, int* p1, int* p2)
{
    /* Cach 1
    int x = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p1 == &a[i] && p2 == &a[j]) {
                x = j - i;
                return x * sizeof(int);
            }
        }
    }
    return -1;
    */

    // Cach 2
    if (check_pointer(a, n, p1)
        && check_pointer(a, n, p2))
    {
        return abs(p1 - p2) * sizeof(int); 
        // Vi du: p1 = a, p2 = a + 3 => p2 - p1 = 3. 3 chinh la khoang cach 
    }
    return -1;
}

int move_by_bytes_and_get_value(int* a, int n, int* p, int num_of_bytes)
{
    /*Cach 1
    int i = num_of_bytes / 4;
    p = p + i;
    if (num_of_bytes % 4 != 0 || p > &a[n] || p < a) {
        return -1;
    }
    return *p;*/

    // Cach 2
    if (num_of_bytes % sizeof(int) == 0) {
        int* q = p + ( num_of_bytes / sizeof(int) ); // khoi tao mot con tro q de tro vao gia tri con tro p moi
        if (check_pointer(a, n, q)) {
            return *q;
        }
    }
    return -1;
}


int main()
{
    // Sample data
    const int n = 7;
    int a[n] = { 3, 1, 2, 8, 6, 10, 15 };
    int* p1 = a + 1;
    int* p2 = a + 3;
    int* p3 = NULL;
    int* p4 = a + 8;
    int* p5 = p2 - 2;

    // Test cau 1
    {
        cout << "Test 1.1: " << (check_pointer(a, n, p1) == true ? "Pass" : "Failed") << "\n";
        cout << "Test 1.2: " << (check_pointer(a, n, p2) == true ? "Pass" : "Failed") << "\n";
        cout << "Test 1.3: " << (check_pointer(a, n, p3) == false ? "Pass" : "Failed") << "\n";
        cout << "Test 1.4: " << (check_pointer(a, n, p4) == false ? "Pass" : "Failed") << "\n";
        cout << "----\n";
    }

    // Test cau 2
    {
        cout << "Test 2.1: " << (check_same_pointers(a, n, p1, p2) == false ? "Pass" : "Failed") << "\n";
        cout << "Test 2.2: " << (check_same_pointers(a, n, p1, p2 - 2) == true ? "Pass" : "Failed") << "\n";
        cout << "----\n";
    }

    // Test cau 3
    {
        cout << "Test 3.1: " << (get_distance_in_byte(a, n, p1, p2) == 8 ? "Pass" : "Failed") << "\n";
        cout << "Test 3.2: " << (get_distance_in_byte(a, n, p1, a + 8) == -1 ? "Pass" : "Failed") << "\n";
        cout << "----\n";
    }

    // Test cau 4
    {
        cout << "Test 4.1: " << (move_by_bytes_and_get_value(a, n, p1, 4) == 2 ? "Pass" : "Failed") << "\n";
        cout << "Test 4.2: " << (move_by_bytes_and_get_value(a, n, p1, 12) == 6 ? "Pass" : "Failed") << "\n";
        cout << "Test 4.3: " << (move_by_bytes_and_get_value(a, n, p1, 3) == -1 ? "Pass" : "Failed") << "\n";
        cout << "Test 4.4: " << (move_by_bytes_and_get_value(a, n, p1, -1) == -1 ? "Pass" : "Failed") << "\n";
        cout << "----\n";
    }
}

