#include <iostream>
#include <string>
#include <typeinfo>

template <typename T1, typename T2> // cach 1
//template <class T1, class T2> // cach 2
void hello() {
	std::cout << "Type 1: " << typeid(T1).name() << std::endl;
	std::cout << "Type 2: " << typeid(T2).name() << std::endl;
}

template <class T, int length> // tham so hoa const do dai cua mang
struct ABC {
	T a[length];
};


int main() {
	ABC<int, 5> a;
	std::cout << sizeof(a) << " bytes" << std::endl;
}


