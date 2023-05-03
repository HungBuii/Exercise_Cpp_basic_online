#include <iostream>

// cach 1
struct Person { 
	char fullname[30];
	int age;
	float height;
	
	void hello() {
		std::cout << "Hello! I am " << fullname << std::endl;
	}
};

// cach 2: chi ap dung cho C++
//struct Person { 
//	char fullname[30];
//	int age = 21;
//	float height = 1.68;
//};

int main() {
	// cach 1
	Person person = {"Hung", 21, 1.68};
	// cach 2
//	Person person = {"Hung"};
//	std::cout << person.fullname; // ap dung cho phien ban C++ moi 
	person.hello();
}
