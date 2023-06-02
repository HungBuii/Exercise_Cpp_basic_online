#include <iostream>
#include <string>

//struct Number {
//	int data; // luu so 
//	Number* link; // con tro link lien ket toi mot struct Number khac cung co bien thanh vien la int data
//};

struct Person {
	std::string fullname;
	Person* love;
};

int main() {
//	Number x = {10, NULL}; // stack
//	Number* y = new Number{(15, NULL)}; // heap
//	
//	// x lien ket voi y
//	x.link = y;
//	
//	// y lien ket voi x
//	y->link = &x;
	
//	std::cout << x.data << "\n" << x.link->data << std::endl;
//	std::cout << y->data << "\n" << y->link->data << std::endl;

	Person h = {"Hung ne", NULL};
	Person l = {"Linh ne", NULL};
	
	// lay h la dai dien de lien ket voi l
	h.love = &l; // pointer voi dia chi
	
	std::cout << h.fullname << " hihi " << h.love->fullname << std::endl;
}


