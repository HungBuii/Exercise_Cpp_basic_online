#include <iostream>

struct Person {
	char fullname[30]; 
	int age;
	float height;
	
//	Person(char fn, int a, float h) : fullname(fn), age(a), height(h) {
//		
//	}
	
	void hello() {
		std::cout << "Hello!" << std::endl;
	}
};

int main() {
	
	// cach 1 dung khoi tao initializer list
	Person person[2] = { {"Hung", 21, 1.68}, {"Ha", 21, 1.75} };
	std::cout << person[1].fullname << std::endl;
	std::cout << person[1].age << std::endl;
	std::cout << person[1].height << std::endl;
	
	// cach 2: su dung constructor co tham so
	Person person1[2] = { Person("Huy", 22, 1.78), Person("Nam", 23, 1.66) }
}
