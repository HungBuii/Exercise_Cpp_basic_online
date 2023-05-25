#include <iostream>
#include <string>

struct Person {
	std::string fullname; int age;
	
	Person(std::string fn, int a) {
		fullname = fn;
		age = a;
	}
};

int main() {
//	int* p = new int(10); // cap phat mot vung nho chua so nguyen co kich thuoc 4 bytes 
//						  // va dang khoi tao la gia tri bang 10
//						  // new int giong nhu ham va no tra ve la dia chi
//	*p = 20;
//	std::cout << *p << std::endl;

	Person* p = new Person("Hung", 21);
	p->age = 22;
	std::cout << p->age << std::endl;
}


