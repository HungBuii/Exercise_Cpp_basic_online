#include <iostream>
#include <string>

using namespace std;

int main() {
	std::string fullname;
	std::cout << "Nhap ho ten day du: ";
	std::getline(std::cin, fullname);
	std::cout << "Ket qua 1: " << program_1(fullname) << "\n";
	std::cout << "Ket qua 2: " << program_2(fullname) << "\n";
	std::cout << "Ket qua 3: " << program_3(fullname) << "\n";	
}
