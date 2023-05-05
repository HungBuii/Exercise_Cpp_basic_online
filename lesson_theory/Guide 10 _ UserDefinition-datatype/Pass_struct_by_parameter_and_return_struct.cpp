#include <iostream>
#include <string>

struct Person {
	std::string fullname; 
	int age;
	float height;
	
	Person() : fullname("Unknown") {
		std::cout << "Create a person without param!" << std::endl;
	}
	
	Person(std::string fn, int a, float h) : fullname(fn), age(a), height(h) { 
		std::cout << "Create a person with 3 params!" << std::endl;
	}
	
	Person(std::string fn) {
		
	}
	
	Person(const Person& other_person) : fullname(other_person.fullname), age(other_person.age), height(other_person.height) {
		std::cout << "Copy a person" << std::endl;
	}
	
	void hello() {
		std::cout << "Hello!" << std::endl;
	}
};

// Pass para by value
//void do_something(Person person) { // Person person = person1
//	std::cout << "Hi!" << std::endl;
//}

// Pass para by pointer
//	void do_something(Person* person) {
//		(*person).fullname = "Ha"; // cach 1
//		person->fullname = "Ha";
//	}

// Pass para by reference
//	void do_something(Person& person) {
//		person.fullname = "Ha";
//	}

// ham tra ve return 
Person create_person() {
	Person person("Ha", 21, 1.75);
	return Person(person); // ap dung voi msvc
//	return person; // ap dung voi chuong trinh dich ngoai msvc
}

int main() {
//	Person person1("Hung", 21, 1.68);
//	do_something(person1); // Pass para by value
	
//	do_something(&person1); // Pass para by pointer
//	std::cout << person1.fullname << std::endl;

//	do_something(person1); // Pass para by reference
//	std::cout << person1.fullname << std::endl;
	
	// ham tra ve return 
	Person person1 = create_person();
}
