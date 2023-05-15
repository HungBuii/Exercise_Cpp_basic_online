#include <iostream>
#include <string>
#include <typeinfo>

struct ABC {
//	int x;
//	float y;

	bool x;
	float y;
};

int main() {
	ABC abc;
	
	// int x + float y = 8 byte 
//	std::cout << sizeof(abc) << std::endl;
//	std::cout << sizeof(abc.x) + sizeof(abc.y) << std::endl;
	
	// bool x + float y = 5 byte but variable abc = 8 byte
//	std::cout << sizeof(abc) << std::endl; // data alignment
//	std::cout << sizeof(abc.x) + sizeof(abc.y) << std::endl;

	// address  
//	std::cout << &abc << std::endl;
//	std::cout << &(abc.x) << " " << &(abc.y) << std::endl;

	// return name of data type
	std::cout << typeid(abc).name() << std::endl; // Console will print "struct ABC"
}
