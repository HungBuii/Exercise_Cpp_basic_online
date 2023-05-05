#include <iostream>

struct Person {
	std::string fullname; 
	int age;
	float height;

	Person() : fullname("Unknown") {
		
	}
	
	Person(std::string fn) : fullname(fn) /*cach 1 */ {
//		fullname = fn; // cach 2
	}
	
	Person(std::string fn, int a, float h) : fullname(fn), age(a), height(h) { 
		
	}
	
	Person(const Person& other_person) : fullname(other_person.fullname) {
//		fullname = other_person.fullname; // cach 2
	}
	
	void hello() {
		std::cout << "Hello!" << std::endl;
	}
};

int main() {
	Person person1;
	std::cout << person1.fullname << std::endl;
	
	Person person2("Hung");
	std::cout << person2.fullname << std::endl;
	
	Person person3("Huy", 21, 1.75);
	std::cout << person3.fullname << std::endl;
	
	// Copy constructor
	Person person4 = person3; // cach 1
//	Person person4 = Person(person3); // cach 2
//	Person person4(person3); // cach 3
	std::cout << person4.fullname << std::endl;
}
