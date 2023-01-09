#include <iostream>

void show_array(int a[]) {
// co the viet la void show_array(int* a) boi vi tham so khong duoc la mang ma phai la mot pointer 
// boi vi line 14 truyen doi so la dia chi cua mang a nen dia chi se phai duoc nhan boi pointer
// C++ ho tro viet a[] de tranh nham lan giua pointer va mang
    for (int i = 0; i < 3; i++) {
        std::cout << a[i] << " "; // boi vi con tro (pointer) dang tro vao mang a nen co the 
                                  // dung duyet mang thong thuong  
    }
    /* Cach 2: dung pointer de duyet mang
    for (int* p = a; p < a + 3; p++) {
        std::cout << *p << " ";  
    }*/
}

int main()
{
    int a[] = { 1, 2, 3, 4 };
    show_array(a); // a la dia chi 

    return 0;
}

