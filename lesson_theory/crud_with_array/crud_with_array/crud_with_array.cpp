#include <iostream>

const int length = 1000;
int last_index = 0;

void add(int b[], int x) {
    if (last_index > length) {  // 0 -> 1000(last_index): okey, 0 -> 1001(last_index): not working 
        std::cout << "Array is full!" << std::endl;
        return;
    }
    b[last_index] = x;
    last_index++;
}

void insert(int c[], int index, int x) {
    if (last_index > length) {
        std::cout << "Array is full!" << std::endl;
    }
    if (index < 0 || index > last_index) {
        std::cout << "Out of range!" << std::endl;
    }
    for (int i = last_index; i >= index; i--) {
        c[i + 1] = c[i];
    }
    c[index] = x;
    last_index++;
}

void remove(int d[], int index) {
    if (index < 0 || index > last_index) {
        std::cout << "Out of range!" << std::endl;
    }
    for (int i = index; i <= last_index; i++) {
        d[i] = d[i + 1];
    }
    last_index--;
}

int main()
{
    int a[length] = {};
    add(a, 5);
    add(a, 10);
    add(a, 15);
    add(a, 20);

    insert(a, 2, 6);

    remove(a, 0);

    for (int i = 0; i < last_index; i++) {
        std::cout << a[i] << std::endl;
    }
    

    return 0;
}

