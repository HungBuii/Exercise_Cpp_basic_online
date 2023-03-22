#include <iostream>
#include <string>

using namespace std;

int program_1(std::string s1, std::string s2) {
	if (s1.length() > s2.length()) {
		return 1;
	}
	else if (s1.length() < s2.length()) {
		return -1;
	}
	return 0;
}

// -----------------------------------------------
std::string program_2(std::string s1, std::string s2) {
	std::string result;

	for (char x = 'A'; x <= 'Z'; x++) {
		bool result_1 = false;
		bool result_2 = false;
		for (int i = 0; i < s1.length(); i++) {
			if (x == s1[i]) {
				result_1 = true;
			}
		}
		for (int j = 0; j < s2.length(); j++) {
			if (x == s2[j]) {
				result_2 = true;
			}
		}
		if (result_1 && result_2) { // note 
			result += x;
			result += ", ";
		}
	}
	
	for (char x = 'a'; x <= 'z'; x++) {
		bool result_1 = false;
		bool result_2 = false;
		for (int i = 0; i < s1.length(); i++) {
			if (x == s1[i]) {
				result_1 = true;
			}
		}
		for (int j = 0; j < s2.length(); j++) {
			if (x == s2[j]) {
				result_2 = true;
			}
		}
		if (result_1 && result_2) { // note 
			result += x;
			result += ", ";
		}
	}
	
	if ( result[result.length() - 2] == ',' ) {
		result = result.replace(result.length() - 2, 2, "");
	}
	
	return result;
}

// Cach 2 cua program_2
//void thong_ke_tan_suat_giong_nhau_cac_chu_cai(std::string s, int thong_ke[], int length) {
//	for (int i = 0; i < s.length(); i++) {
//		if ( s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ) {
//			int unicode = s[i];
//			thong_ke[unicode]++;
//		}
//	}
//}
//
//std::string program_2(std::string s1, std::string s2) {
//	std::string ket_qua;
//	int length = 256;
//	int thong_ke[length] = {};
//	thong_ke_tan_suat_giong_nhau_cac_chu_cai(s1, thong_ke, length);
//	thong_ke_tan_suat_giong_nhau_cac_chu_cai(s2, thong_ke, length);
//	
//	for(int i = 0; i < length; i++) {
//        if(thong_ke[i] > 0 
//            && s1.find(i) != std::string::npos
//            && s2.find(i) != std::string::npos )
//        {
//            ket_qua += (char)i;
//            ket_qua += ", ";
//        }
//    }
//    ket_qua.replace(ket_qua.length() - 2, 2, "");
//    return ket_qua;
//}

// ------------------------------------
std::string first_name(std::string s) {
	int i = s.find(" ");
	while(i != std::string::npos) {
		s = s.substr(i + 1);
		i = s.find(" ");
	return s;
}

std::string program_3(std::string s1, std::string s2) {
	s1 = first_name(s1);
	s2 = first_name(s2);
	
	return (s1 + " love " + s2);
}

// Cach 2 cua program_3
//std::string first_name(std::string s) {
//	for (int i = s.length() - 1; i >= 0; i--) {
//		if (s[i] == ' ') return s.substr(i+1);
//	}
//	return s;
//}
//
//std::string program_3(std::string s1, std::string s2) {
//	return first_name(s1) + " love " + first_name(s2);
//}

// ------------------------------------

int program_4(std::string s1, std::string s2) {
	if ( (int)s1[0] < (int)s2[0]) {
		return -1;
	}
	else if ( (int)s1[0] > (int)s2[0]) {
		return 1;
	}
	return 0;
}

// Cach 2 cua program_4

//int program_4(std::string s1, std::string s2) {
//    if (s1 > s2) return 1;
//    if (s1 < s2) return -1;
//    return 0;
//}

// -------------------------------------

int main() {
	string s1, s2;
	std::cout << "Nhap ten nguoi 1: ";
	std::getline(std::cin, s1);
	std::cout << "Nhap ten nguoi 2: ";
	std::getline(std::cin, s2);
	std::cout << "Ket qua 1: " << program_1(s1, s2) << "\n";
	std::cout << "Ket qua 2: " << program_2(s1, s2) << "\n";
	std::cout << "Ket qua 3: " << program_3(s1, s2) << "\n";
	std::cout << "Ket qua 4: " << program_4(s1, s2) << "\n";
}
