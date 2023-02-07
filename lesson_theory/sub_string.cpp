#include <iostream>
#include <string>

using namespace std;

int main() {
	// in cac chuoi con tu string
//	std::string name = "Vu Nguyen Coder";
//	
//	int i = name.find(' ');
//	while(i != std::string::npos) {
//		std::cout << name.substr(0, i) << "\n"; // substr(0, index)
//		name = name.substr(i+1);
//		i = name.find(' ');
//	}
//	std::cout << name; // in ra chu "Coder" boi vi chi co 2 khoang trang nen khi
					   // dung while thi den khoang trang thu 2 se chi duyet den "Nguyen" 
	
	// gan chuoi vao mang
	std::string name = "Vu Nguyen Coder";
	std::string a[100];
	int last_index = 0;
	
	int i = name.find(' ');
	while(i != std::string::npos) {
		a[last_index] = name.substr(0, i);
		last_index++;
		name = name.substr(i+1);
		i = name.find(' ');
	}
	a[last_index] = name;
	last_index++;
	
	for (int i = 0; i < last_index; i++) {
		std::cout << a[i] << "\n";
	}
}
