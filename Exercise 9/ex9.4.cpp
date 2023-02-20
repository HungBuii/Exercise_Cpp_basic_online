#include <iostream>


using namespace std;

bool check_upper_letters(char x) {
	if (x >= 'A' && x <= 'Z') {
		return true;
	}
	return false;
}

bool check_lower_letters(char x) {
	if (x >= 'a' && x <= 'z') {
		return true;
	}
	return false;
}

bool check_letter_and_space(char x) {
	if (check_upper_letters(x) || 
		check_lower_letters(x) || 
		x == ' ') {
			return true;
	}
	return false;
}

bool condition_1(std::string fullname) {
	// check ki tu khac
	for (int i = 0; i < fullname.length(); i++) {
		if (check_letter_and_space(fullname[i]) == false) {
			// mot ki tu khac se lap tuc tra gia tri false (0)
			// neu de = true (1) thi se gay ra loi khi ki tu sai o trong va ki tu dung o ngoai thi se van tra ve true
			return false;
		}
	}
	return true;
}

bool condition_2(std::string fullname) {
	// kiem tra khoang trang o dau va cuoi. Neu xuat hien thi se tra ve false
	// (extra note) neu o dau co 1, 2,... khoang trang thi cung tra ve false
	if (fullname[0] == ' ' || fullname[fullname.length() - 1] == ' ' ) {
		return false;
	}
	return true;
}

bool condition_3(std::string fullname) {
	// check chu cai dau la in thuong
	if ( check_lower_letters(fullname[0]) ) return false;
	
	for (int i = 0; i < fullname.length(); i++) {
		if ( fullname[i] == ' ' && check_lower_letters(fullname[i + 1]) ) {
			// check truoc moi khoang trang la chu cai thuong -> false
			return false;
		}
		// check ki tu BEN TRONG la chu thuong -> true, hoa -> false
		else if (i > 0 && fullname[i - 1] != ' ' && check_upper_letters(fullname[i]) ) {
			return false;
		}
	}
	return true;
}

bool program_1(std::string fullname) {
	if ( condition_1(fullname) && condition_2(fullname) && condition_3(fullname) ) {
		return true;
	}
	return false;
}

std::string program_2(std::string fullname) { 

	if (program_1(fullname)) return fullname;
	
	// Xoa ki tu khac
	for (int i = 0; i < fullname.length(); i++) {
		while (i < fullname.length() - 1 && check_letter_and_space(fullname[i]) == false ) {
			fullname.replace(i, 1, "");
		}
	}
	
	// Xoa khoang trang o dau, giua va cuoi
	while(fullname[0] == ' ') {
		fullname.replace(0, 1, "");
	}
	
	while(fullname[fullname.length() - 1] == ' ') {
		fullname.replace(fullname.length() - 1, 1, "");
	}
	
	for (int i = 0; i < fullname.length(); i++) {
		if (fullname[i] == ' ') {
			int j = i + 1;
			while (fullname[j] == ' ') {
				fullname.replace(j, 1, "");
			}
		}
	}
	
	// Viet hoa o dau va truoc 1 khoang trong
	fullname[0] = toupper(fullname[0]);
	for(int i = 1; i < fullname.length(); i++) {
        fullname[i] = tolower(fullname[i]);
        if(fullname[i-1] == ' ') {
            fullname[i] = toupper(fullname[i]);
        } 
    }
	
	return fullname;
}

std::string program_3(std::string s) {
	s = program_2(s);
	
	std::string last_name;
	std::string letter_name;
	
//	for (int i = 0; i < s.length(); i++) {
//		s[i] = tolower(s[i]);
//	}
	for(char& x : s) x = tolower(x);
	
	int i = s.find(' ');
	while (i != std::string::npos) {
		letter_name += s.substr(0, 1);
		s = s.substr(i + 1);
		i = s.find(' ');
	}
	last_name = s;
	
	return last_name + letter_name + "@gmail.com";
}

int main() {
	std::string fullname;
	std::cout << "Nhap ho ten day du: ";
	std::getline(std::cin, fullname);
	std::cout << "Ket qua 1: " << program_1(fullname) << "\n";
	std::cout << "Ket qua 2: " << program_2(fullname) << "\n";
	std::cout << "Ket qua 3: " << program_3(fullname) << "\n";	
}
