#include <iostream>

struct Person {
	std::string fullname; 
	int age;
	float height;
	
	void hello() {
		std::cout << "Hello!" << std::endl;
	}
};

int main() {
	Person person = {"Hung", 21, 1.68};
	
	// Pointer
	Person* p = &person;
	std::cout << (*p).fullname << std::endl; // cach 1
	std::cout << p->fullname << std::endl; // cach 2
	// Reference
	Person& p1 = person;
	std::cout << p1.fullname << std::endl;
	
	// access age by pointer
	int *p2 = &person.age;
	std::cout << *p2 << std::endl;
}
