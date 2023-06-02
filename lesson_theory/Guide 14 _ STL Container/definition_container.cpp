#include <iostream>
#include <array> // stl container
#include <string> // stl container (hay dung)
#include <list> // stl container
#include <forward_list> // stl container
#include <vector> // stl container (hay dung)
#include <map> // stl container (binh thuong)
#include <unordered_map> // stl container (hay dung)
#include <stack> // stl container (thi thoang hay dung)
#include <queue> // stl container (thi thoang hay dung)

int main() {
	std::array<int, 3> a = {1, 2, 3};
//	for (int i = 0; i < a.size(); i++) {
//		// trong array co dien thi muon tinh so phan tu chung ta phai viet la sizeof(a) / sizeof(int)
//		std::cout << a[i] << std::endl;
//	}
	a = {6, 7, 8, 9, 10}; // array co dien k the gan nhung array tren co the gan duoc
	
	// nhung thu vien stl tren se duoc cung cap 1 luong bytes co dinh
	std::string s = "Hung ne";
	std::list<int> l = {1, 2, 3}; // double linked list (co nghia la co 2 con tro tro len)
	std::forward_list<int> fl;
	
	std::vector<int> v = {1, 2, 3}; // duoc sap xep cac phan tu giong het array nhung duoc quan ly tren bo nho heap va co dung luong co dinh khoang 32 bytes tuy theo trinh bien dich
	std::cout << sizeof(v);
}


