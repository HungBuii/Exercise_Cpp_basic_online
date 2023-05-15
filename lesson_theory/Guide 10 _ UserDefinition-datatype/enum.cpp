#include <iostream>
#include <string>

enum Color { // la cac hang so const
	RED,
	YELLOW,
	BLUE,
	GREEN
};

int main() {
	Color x = RED;
	x = BLUE;
	
	std::cout << RED << " " << YELLOW << " " << BLUE << " " << GREEN << std::endl;
	
	std::cout << RED + 1 << std::endl; // giong datatype bool
}
