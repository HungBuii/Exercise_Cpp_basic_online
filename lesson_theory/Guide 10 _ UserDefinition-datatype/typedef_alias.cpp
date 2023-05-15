#include <iostream>
#include <string>



int main() {
	
	// ca 2 co the khai bao trong hoac ngoai ham main
//	typedef std::string str; // dung ca trong C/C++
	using str = std::string; // dung trong C++
	
	str s = "Hung ne";
	std::cout << s << std::endl;
	
//	typedef int ID;
	using ID = int; // co the thay doi tat ca datatype theo y muon
	ID id1;
	ID id2;
	// ID...id...n
}
