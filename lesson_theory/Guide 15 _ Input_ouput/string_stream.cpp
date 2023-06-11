#include <iostream>
#include <string>
#include <sstream> // dung de chuyen doi int, float, bool,... thanh chuoi va nguoc lai

int main() {
	int x, y;
	std::stringstream ss("2 4");
	ss << "Hung ne" << 123 << " " << true;
	std::cout << ss.str();
}


