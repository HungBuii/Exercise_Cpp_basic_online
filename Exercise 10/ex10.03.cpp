#include <iostream>
#include <string>

struct Book {
	int id;
	std::string title;
};

Book make_a_book(std::string data) {
	Book book;
	int i = data.find(";");
	book.id = std::stoi(data.substr(0, i));
	book.title = data.substr(i + 1);
	return book;
}
	
void program_print_books(Book a[], int length) {
						 // (Book* a , int length)
	for (int i = 0; i < length; i++) {
		std::cout << "\t" << a[i]. << " - " << a[i].title << std::endl;
	}
}

int main() {
	Book a[100];
	int length = 0;
	
	std::string data;
	std::cout << "Nhap du lieu sach: ";
	std::getline(std::cin, data);
	
	// Phan tich du lieu
	
//	Book make_a_book(std::string data) {
//		Book book;
//		int i = data.find(";");
//		book.id = std::stoi(data.substr(0, i));
//		book.title = data.substr(i + 1);
//		return book;
//	}
//	
//	void program_print_books (Book a[] , int length) {
//							 // (Book* a , int length)
//		for (int i = 0; i < length; i++) {
//			std::cout << "\t" << a[i].id << " - " << a[i].title << std::endl;
//		}
//	}
	
	std::cout << "Ket qua 1: \n";
//	program_1(a[0], a[length - 1]);
	program_print_books(a, length);
	
//	std::cout << "Ket qua 2: " << program_2(a, length) << std::endl;
//	std::cout << "Ket qua 3: " << program_3(a, length) << std::endl;
//	std::cout << "Ket qua 4: \n";
//	program_4(a, length); program_print_books(a, length); 
}
