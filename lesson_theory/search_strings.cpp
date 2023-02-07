#include <iostream>
#include <string>

using namespace std;

int main() {
	std::string name = "Vu Nguyen Coder";
	int i = name.find("Nguyen");
	if (i == std::string::npos) {
		std::cout << "Not found!";
	}
	else {
		std::cout << "Found result!";
	}
}
