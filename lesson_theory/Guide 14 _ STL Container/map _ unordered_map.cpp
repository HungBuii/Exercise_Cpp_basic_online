#include <iostream>
#include <vector>
#include <map> // giong dictionary duoc sap xep tang dan
#include <unordered_map> 
#include <string>

using namespace std;

int main() {
//	std::vector<std::string> persons = {
//		"Hung ne",
//		"Vu Nguyen",
//		"Ngoc Linh"
//	};

	// map
	std::map<int, std::string> persons = { // co the co nhieu kieu du lieu khac nhau trong key hoac value
		{200, "Hung ne"}, // key-value
		{300, "Vu Nguyen"},
		{100, "Ngoc Linh"}
	};
//	std::cout << persons[100] << std::endl; // cach 1
//	std::cout << persons.at(100) << std::endl; // cach 2
//	std::cout << persons.size() << std::endl; // tra ve so cap key-value co trong map
	
	// duyet phan tu trong map (range-base for)
	
	// cach 1
//	for (std::pair<int, std::string> person : persons) {
//		std::cout << person.first << " - " << person.second << std::endl;
//	}
	// cach 2: dung type deduction (auto) rut gon
//	for (auto person : persons) {
//		std::cout << person.first << " - " << person.second << std::endl;
//	}
	
	// CRUD
	persons[300] = "Nguyen ne"; // edit
	
	persons[400] = "Tram ne"; // create
	
//	persons.erase(100); // delete
	
	// tim kiem va so sanh 
	std::cout << (persons.find(100) != persons.end()) << std::endl; // cach 1
//	std::cout << persons.contains(100) << std::endl; // cach 2 (up C++20 version)
	
	for (auto person : persons) {
		std::cout << person.first << " - " << person.second << std::endl;
	}
}


