#include <iostream>
#include <string>

using namespace std;

int program_1(std::string fullname, char x) {
	int count = 0;
	for (int i = 0; i < fullname.length(); i++) {
		if (x == fullname[i]) count++;
	}
	return count;
}

int program_2(std::string fullname) {
	int num_space = fullname.find(' ');
	int count = 1;
	while (num_space != std::string::npos) {
		fullname = fullname.substr(num_space + 1);
		num_space = fullname.find(' ');
		count++;
	}
	return count;
}

bool program_3(std::string s, std::string s1) {
	int first_space = s.find(' ');
	std::string last_name;
	last_name = s.substr(0, first_space);
	if (last_name == s1) return true;
	return false;
}

std::string program_4(std::string s) {
	int first_space = s.find(' ');
	std::string last_name;
	last_name = s.substr(0, first_space);
	return last_name;
}

std::string program_5(std::string s) {
	int num_space = s.find(' ');
	while(num_space != std::string::npos) {
		s = s.substr(num_space + 1);
		num_space = s.find(' ');
	}
	return s;
}

int main() {
	std::string fullname;
 	std::cout << "Nhap ho ten day du: ";
    std::getline(std::cin, fullname);
 	std::cout << "Ket qua 1a: " << program_1(fullname, 'a') << "\n";
	std::cout << "Ket qua 1b: " << program_1(fullname, 'u') << "\n";
 	std::cout << "Ket qua 1c: " << program_1(fullname, 'z') << "\n";
    std::cout << "Ket qua 2: " << program_2(fullname) << "\n";
    std::cout << "Ket qua 3a: " << program_3(fullname, "Nguyen") <<  "\n";
    std::cout << "Ket qua 3b: " << program_3(fullname, "Trinh") <<  "\n";
    std::cout << "Ket qua 4: " << program_4(fullname) << "\n";
    std::cout << "Ket qua 5: " << program_5(fullname) << "\n";
}
