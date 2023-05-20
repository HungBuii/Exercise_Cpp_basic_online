#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <map>
#include <array>

// template de tong quat hoa 1 chuong trinh con va 
// ap dung duoc trong struct va class trong C++


// chua dung template de dai dien cho kieu du lieu
//void hello_int() {
//	std::cout << "Type: " << typeid(int).name() << "; ";
//	std::cout << "Size: " << sizeof(int) << " bytes" << std::endl;
//}
//
//void hello_char() {
//	std::cout << "Type: " << typeid(char).name() << "; ";
//	std::cout << "Size: " << sizeof(char) << " bytes" << std::endl;
//}

// dung template de dai dien cho kieu du lieu
template <typename T>
// co the dung typename = class. VD: template <class T>
void hello() {
	std::cout << "Type: " << typeid(T).name() << "; ";
	std::cout << "Size: " << sizeof(T) << " bytes" << std::endl;
}

// them tham so trong ham hello
template <class T>
void hello(int x) {
	std::cout << "Type: " << typeid(T).name() << "; ";
	std::cout << "Size: " << sizeof(T) << " bytes" << std::endl;
}

// dung template so hoa so luong phan tu trong mang
template <typename T, int length>
struct ABC {
	T a[length];
};

int main() {
	
	// chua dung template
//	hello_int();
//	hello_char();

	// dung template
	hello<int>();
	hello<char>();
	hello<bool*>();
	
	// dung template co tham so cua function
	hello<int>(10);
	
	ABC<int, 4> a;
	std::cout << sizeof(a) << " bytes." << std::endl;
	
	// cac thu vien stl: standard template library
	std::vector<int> v; // vector khong can khai bao so luong va linh dong thay doi so luong duoc
	std::map<int, std::string> m; // vi du danh sach cac hoc sinh thi se co kieu la string nhung ma moi hoc sinh se co mot ma so 
	                              // sinh vien rieng nen co them mot kieu du lieu nua la int
	std::array<int, 5> arr = {1, 2, 3, 4, 5}; // kieu template array can khai bao so luong mang 
											  // template array giong nhu array thong thuong nhu int arr[5]
	for (int x : arr) {
		std::cout << x << " ";
	}
}
