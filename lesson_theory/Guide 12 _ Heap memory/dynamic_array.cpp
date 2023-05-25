#include <iostream>
#include <string>

int main() {
//	int* a = new int[3] {5, 10, 15}; cach 1
//	int* a = new int[3]; // khai bao mang tren vung nho heap
//	a[0] = 5; a[1] = 10; a[2] = 15; // truy cap mang bang con tro
//	for(int i = 0; i < 3; i++) {
//		std::cout << a[i] << " ";
//	}

//	int* a[3] = { new int(5), new int(10), new int(15) }; // khai bao mang tren vung nho stack
//														  // va nhung bien trong mang la nhung bien pointer chua nhung dia chi duoc khoi tao tren heap
//	*(a[0])= 10; *(a[1]) = 15; *(a[2]) = 20; // boi vi nhung bien trong mang la pointer nen can uu tien them toan tu * de co the truy cap vao nhung pointer trong mang
//	delete a[0]; delete a[1]; delete a[2]; // mang duoc khai bao trong stack nen se delete nhung du lieu duoc khoi tao o vung nho heap 
//	for(int i = 0; i < 3; i++) {
//		std::cout << *(a[i]) << " ";
//	}	


	int* a = new int[3]; 
	a[0] = 5; a[1] = 10; a[2] = 15; 
	for(int i = 0; i < 3; i++) {
		std::cout << a[i] << " ";
	}					
	delete[] a; // tu dong thu hoi cac phan tu array trong heap 							  
}


