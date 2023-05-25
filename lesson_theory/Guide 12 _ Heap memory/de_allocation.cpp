#include <iostream>
#include <string>

struct Person {
	std::string fullname; int age;
	
	Person(std::string fn, int a) {
		std::cout << "Create a person!" << std::endl;
		fullname = fn;
		age = a;
	}
	
	~Person() { // ham huy
//				khi mot bien hoat dong trong block xong thi no se tu huy
		std::cout << "Delete a person!" << std::endl;
	}
};

int main() {
//	Person("Hung", 21); // du lieu duoc luu trong vung nho stack va
////						co tu dong thu hoi vung nho

	Person* p = new Person("Hung", 21); // du lieu duoc luu trong heap
	delete p; // khi su dung xong thi phai thu hoi 
	std::cout << "End" << std::endl;
}


