#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main() {
	std::ifstream input("input.txt");
		
	int x, y;
	
	
	input >> x >> y;
//	std::cin >> x >> y;
	
	std::cout << "x + y = " << x + y << "\n";
//	
//	input.ignore(); // bo qua lan nhap enter gan nhat con sot lai
////	std::cin.ignore();
//	
//	std::string s1, s2;
//	
//	std::getline(input, s1); // ket thuc dong thu nhat
//	std::getline(input, s2); // ket thuc dong thu hai

//	std::getline(std::cin, s1);
//	std::getline(std::cin, s2);
//	std::cout << "s1 + s2 = " << s1 + s2;

// doc tung dong trong file
//	std::string line;
//	while(std::getline(input, line)) { // doc 1 dong den khi het ky tu thi se doc xuong dong tiep theo qua getline
//		std::cout << line << "\n";
//	}

//	ghi file
//	std::ofstream output("output.txt");
//	output << "Hung\nnee";
//	std::cout << "Hung\nne";
}


