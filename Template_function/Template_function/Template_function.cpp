#include <iostream>

template <typename T> // Tong quat hoa mot function (generic function) la chuong trinh con voi hello
void hello() {
    std::cout << "Type: " << typeid(T).name() << "; ";
    std::cout << "Size: " << sizeof(T) << " bytes" << std::endl;
}

int main()
{
    hello<int>(); // truyen kieu du lieu 
    hello<char>();
}

