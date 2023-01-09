#include <iostream>

const int MAX = 100;

void program_print(int a[], int& length) {
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void program_push_back(int a[], int& length, int x) {
    if (length > MAX) {
        std::cout << "Array is full!" << std::endl;
        return;
    }
    a[length] = x; // length = 0
    length++;
}

void program_insert(int a[], int& length, int x, int position) {
    if (length > MAX) {
        std::cout << "Array is full!" << std::endl;
        return;
    }
    if (position < 0 || position > length) {
        std::cout << "Out of range!" << std::endl;
        return;
    }

    for (int i = length; i >= position; i--) {
        a[i + 1] = a[i];
    }
    a[position] = x;
    length++;
}

void program_push_front(int a[], int& length, int x) {
    for (int i = length; i >= 0; i--) {
        a[i + 1] = a[i];
    }
    a[0] = x;
    length++;
}

void program_remove(int a[], int& length, int position) {
    if (position < 0 || position > length) {
        std::cout << "Out of range!" << std::endl;
        return;
    }
    for (int i = position; i <= length; i++) {
        a[i] = a[i + 1];
    }
    length--;
}

void program_remove_value(int a[], int& length, int x) {
    for (int i = 0; i <= length; i++) {
        while (a[i] == x) {
            program_remove(a, length, i);
        }
    }
}

int main()
{
    int a[MAX];
    int length = 0;
    std::cout << "1 - Test push back: ";
    program_push_back(a, length, 5);
    program_push_back(a, length, 10);
    program_push_back(a, length, 15);
    program_push_back(a, length, 20);
    program_print(a, length);

    std::cout << std::endl;

    std::cout << "2 - Test insert: ";
    program_insert(a, length, 13, 2);
    program_print(a, length);

    std::cout << std::endl;

    std::cout << "3 - Test push front: ";
    program_push_front(a, length, 2);
    program_push_front(a, length, 2);
    program_push_front(a, length, 2);
    program_print(a, length);

    std::cout << std::endl;

    std::cout << "4 - Test remove: ";
    program_remove(a, length, 4);
    program_print(a, length);

    std::cout << std::endl;

    std::cout << "5 - Test remove value: ";
    program_remove_value(a, length, 2);
    program_remove_value(a, length, 15);
    program_print(a, length);
}

