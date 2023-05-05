#include <iostream>
#include <string>

struct Person {
//	std::string fullname;
	char fullname[30]; // kieu array khong the gan gia tri nhu string, int,...
	int age;
	float height;
	
//	Person() {
//		std::cout << "Create a person" << std::endl;
////		fullname = "Hung"; // ap dung voi kieu string
//	}

	// dung phien ban C++ moi co the su dung
	Person() : fullname("Hung") { // ap dung cho nhung kieu du lieu khong the gan duoc nhu array, const,...
		std::cout << "Create a person" << std::endl;
	}
	
	void hello() {
		std::cout << "Hello!" << std::endl;
	}
};

int main() {
//	Person person = {"Hung", 21, 1.68}; // khong the khoi tao list boi vi no uu tien su dung constructor ben trong struct Person
	Person person;
	std::cout << person.fullname;
}
