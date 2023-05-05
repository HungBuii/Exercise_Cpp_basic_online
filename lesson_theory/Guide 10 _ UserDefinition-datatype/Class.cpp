#include <iostream>

class Person {
//private: // dung private thi main khong the truy cap va khoi tao gia tri
public: 
	char fullname[30];
	int age;
	float height;
public:
	void hello() {
		std::cout << "Hello! I am " << fullname << std::endl;
	}	
};

int main() {
	Person person = {"Hung", 21, 1.68};
	std::cout << person.fullname << std::endl;
}
