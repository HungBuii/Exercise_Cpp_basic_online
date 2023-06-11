#include <iostream>
#include <iomanip> // thay doi dinh dang format
#include <string>

int main() {
	int x = 123;
	std::string s = "abc";
	
	std::cout << std::left << std::setfill('_') << std::setw(6) << x << "|"
			  << std::right << std::setw(6) << s << ".";
	// setw: do dai ki tu toi thieu co 6 ky tu
	// left, right: dua du lieu sang ben trai hoac phai (bien co hieu)
	// setfill: hien thi khoang trong du lieu bang ky tu cu the (bien co hieu)
}


