#include <iostream>
#include <string>
#include <iomanip>

struct Book {
	int id;
	std::string title;
};

Book program_create_book_from_string(std::string data) {
	Book book;
	int i = data.find(';');
	book.id = std::stoi(data.substr(0, i));
	book.title = data.substr(i + 1); // luu y data nay da duoc tach ra tu string data lon nen k can phai cap nhat lai data = substr(i + 1)
	return book;
}

void program_print_books(Book* b, int length) { // con tro b dang tro vao vung array a nen co the truy cap giong nhu array
//                  hoac Book b[]
	for (int i = 0; i < length; i++) {
		std::cout << "\t" << b[i].id << " - " << b[i].title << std::endl;
//	boi vi khong the gan mang voi mang nhu int b[] = a[] nen phai su dung pointer de co the truy cap vao mang (cu the la lay dia chi gia tri dau tien cua mang)
//  luu y array khong phai la pointer ma la co nhung phep toan giong pointer 
//	neu ma muon truy cap ra gia tri se la *(b[i]).id nhung ban chat b[i] = a[i] la 1 gia tri cu the nen se khong the them dau * cua pointer vao. Neu khong se bi trung int* voi int
//	C++ ho tro viet b[] de co the giup lap trinh vien hieu duoc muon truy cap 1 mang thi phai dung con tro khong phai la dung mang de truy cap mang.
	}
}

void program_1(Book* book1, Book* book2) {
	Book temp_book;
	temp_book.id = book1->id;
	book1->id = book2->id;
	book2->id = temp_book.id;
	
	temp_book.title = book1->title;
	book1->title = book2->title;
	book2->title = temp_book.title;

//	Book* temp_book = book1;
//	book2 = book1;
//	book1 = temp_book;
}

std::string program_2(Book books[], int length) {
	// sizeof -> char 
	// length -> string
	int length_title = (books[0].title).length();
	std::string max_length_title = books[0].title;
	for (int i = 1; i < length; i++) {
		
		if ( length_title < (books[i].title).length() ) {
			max_length_title = books[i].title;
		}
		for (int j = 0; j < length; j++) {
			if ( (max_length_title).length() == (books[j].title).length() ) {
				if (books[i].id < books[j].id) {
					max_length_title = books[j].title;
				}
			}
		}
	}
	// 22;Than thoai Bac Au|1000;Tham tuuuu She Ho|87;Tham tuuuu She Ro|111;Tham tuuuu She Jo
	return max_length_title;
}

float program_3(Book books[], int length) {
	// 62
	float total_length_title = 0;
	for (int i = 0; i < length; i++) {
		total_length_title += (books[i].title).length();
	}
	return (total_length_title / length);
}

void program_4(Book books[], int length) {
	
// Cach 1
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if ( books[i].title[0] > books[j].title[0] ) {
				Book temp_book;
				temp_book = books[i];
				books[i] = books[j];
				books[j] = temp_book;
			}
			if (books[i].title[0] == books[j].title[0]) {
				if (books[i].id < books[j].id) {
					Book temp_book;
					temp_book = books[i];
					books[i] = books[j];
					books[j] = temp_book;
				}
			}
		}
	}

//	Cach 2
//	for (int i = 0; i < length; i++) {
//		for (int j = i + 1; j < length; j++) {
//			if ( books[i].title > books[j].title ) {
//				program_1(&books[i], &books[j]);
//			} 
//		}
//	}
}

int main() {
	Book a[100];
	int length = 0;
	
	std::string data;
	std::cout << "Nhap du lieu sach: ";
	std::getline(std::cin, data);
	
	// Phan tich du lieu
	int i = data.find('|');
	while (i != std::string::npos) {
		a[length++] = program_create_book_from_string(data.substr(0, i));
//		a[length] = ... 
//		length++;
 		data = data.substr(i + 1);
		i = data.find('|');
	}
	a[length++] = program_create_book_from_string(data);
	
	std::cout << "Ket qua 1: \n";
	program_1(&a[0], &a[length - 1]);
	program_print_books(a, length); // a la dia chi 
	
	std::cout << "Ket qua 2: " << program_2(a, length) << std::endl;
	std::cout << "Ket qua 3: " << program_3(a, length) << std::endl;
	std::cout << "Ket qua 4: \n";
	program_4(a, length); program_print_books(a, length); 
}
