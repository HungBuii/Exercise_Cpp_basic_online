#include <iostream>

int main()
{
    // array hoat dong giong pointer nhung array khong phai la pointer 
    int a[4] = { 1, 2, 3, 4 };
    //int* p = a;
    ///*int* p = a + 2;*/
    //std::cout << *p << std::endl;

    for (int* p = a; p < a + 4; p++) {
        std::cout << *p << std::endl; // dung pointer de duyet mang (custom) 
                                      // co the dung trong ctdl&gt trong danh sach lien ket (linked list)
    }

    
}

