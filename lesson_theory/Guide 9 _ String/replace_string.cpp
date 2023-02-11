#include <iostream>
#include <string>

using namespace std;

int main() {
	std::string name = "Coder Vu Nguyen Coder";
//	name.replace(10, 5, "Programmer");
	
	int i = name.find("Coder");
	while (i != std::string::npos) {
		name.replace(i, 5, "Programmer"); // replace(index_start, nums_char_need_replace, "content")
		i = name.find("Coder");
	}
	
	std::cout << name;
}
