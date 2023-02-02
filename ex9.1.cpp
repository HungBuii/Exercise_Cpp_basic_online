#include <iostream>

using namespace std;

int program_1(char x) {
	if (x >= 'A' && x <= 'Z') return 1;
	if (x >= 'a' && x <= 'z') return -1;
	return 0;
} 

int program_2(char x) {
	if ( (x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') ) return 1;
	if (x >= '0' && x <= '9') return -1;
	return 0;
}

char program_3(char x) {
	if ( (program_2(x) == 1) || (program_2(x) == -1) ) {
		if (x == 'Z' || x == 'z' || x == '9') return x;
		else return x + 1;
	}
	return x;
}

int main() {
	char x;
	std::cout << "Nhap ki tu don: ";cin >> x;
	std::cout << "Ket qua 1: " << program_1(x) << "\n";
	std::cout << "Ket qua 2: " << program_2(x) << "\n";
	std::cout << "Ket qua 3: " << program_3(x) << "\n";
}
