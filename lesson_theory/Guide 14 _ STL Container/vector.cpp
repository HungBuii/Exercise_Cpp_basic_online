#include <iostream>
#include <vector>

// dung ham void de thay doi (tham so la ref hoac pointer)
void hello(std::vector<int>& v) { // neu chi co std::vector<int> v thi se chi copy gia tri va gia tri trong vector main se khong thay doi 
	v[0] = 100;
}

// dung kieu tra ve std::vector<int> de gan 1 mang vector moi (chi co vector lam duoc con mang co dien thi khong)
//std::vector<int> hello() {
//	std::vector<int> v = {199, 200, 300};
//	return v;
//}

int main() {
	std::vector<int> v = {1, 2, 3}; // giong het array nhung duoc sap xep tren heap
	
//	v[0] = 10;
//	std::cout << v[0] << std::endl; // 10
	
	// nhung ham thanh vien trong vector
//	std::cout << v.at(0) << std::endl; // 10 (toan tu vi tri) tu vi tri dua ra ket qua
//	std::cout << v.front() << std::endl; // truy cap phan tu dau tien
//	std::cout << v.back() << std::endl; // truy cap phan tu cuoi cung
//	std::cout << v[v.size() - 1] << std::endl; // truy cap phan tu cuoi cung
	
	// duyet phan tu
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v[i] << " ";
//	}
//	
//	std::cout << std::endl;
//	
//	for (int x : v) {
//		std::cout << x << " ";
//	}
	
	// them, xoa, chem
//	v.push_back(5); // add
//	for (int x : v) {
//		std::cout << x << " ";
//	}
	
//	v.insert(v.begin() + 3, 4); // insert
//	for (int x : v) {
//		std::cout << x << " ";
//	}
	
//	std::cout << std::endl;
//	
//	v.erase(v.begin() + 1);
//	for (int x : v) {
//		std::cout << x << " ";
//	}
	
	// co the gan lai mang
//	v = {9, 10, 11, 12}; // fix value 
//	for (int x : v) {
//		std::cout << x << " ";
//	}
	
	// co the gan 2 mang lai cho nhau
//	std::vector<int> v1 = {1, 2, 4, 9};
//	std::vector<int> v2 = v1;
//	for (int x : v2) std::cout << x << " ";
	
	// con tro khong the thao tac tren vector
//	std::vector<int> v1 = {1, 2, 4, 8};
//	std::cout << v1 << std::endl; // error boi vi v1 trong vector se khong cho ra ket qua la dia chi
//								     kieu du lieu la vector luon chu khong phai la con tro
	
	// dung ham de truy cap mang bang cach dung con tro hoac ref
	std::vector<int> v1 = {1, 2, 4, 9}; // vector duoc coi la 1 bien thong thuong co the gan,...
	
	hello(v1); // dung ham void
	
//	v1 = hello(); // dung kieu tra ve std::vector<int>
	
	for (int x : v1) {
		std::cout << x << " ";
	}
}


