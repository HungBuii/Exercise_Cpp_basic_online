#include <iostream>
#include <string>

using namespace std;

int program_1(std::string s) {
	int count = 0;
	for(int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') count++;
	}
	return count;
}

int program_2(std::string s) {
	return (s.length() - program_1(s));
}

//int program_2(std::string s) {
//	int count_letter = 0;
//	int count_num = 0;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
//            count_letter++;
//        }
//        
//        if (s[i] >= '0' && s[i] <= '9') {
//            count_num++;
//        }
//	}
//	return count_letter + count_num;
//}

std::string program_3(std::string s) {
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] >= 'a' && s[i] <= 'z') {
//			s[i] -= 32;
//		}
//	}
	for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
	return s;
} 

std::string program_4(std::string s) {
	std::string s1; 
	std::string s2;
	
	for (int i = 0; i < s.length(); i++) {
		if ( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
			s1 += s[i];
		}
		if (s[i] >= '0' && s[i] <= '9') {
			s2 += s[i];
		}
	}
	
	return s1 + " " + s2;
}

std::string program_5(std::string s) {
	std::string result;
	for (int i = 0; i < s.length(); i++) {
		switch(s[i]) { // s[i] = '1' khong phai s[i] = "1"
 			case '1': 
				result += "mot";
				break;
			case '2': 
				result += "hai";
				break;
			case '3': 
				result += "ba";
				break;
			case '4': 
				result += "bon";
				break;
			case '5': 
				result += "nam";
				break;
			case '6': 
				result += "sau";
				break;
			case '7': 
				result += "bay";
				break;
			case '8': 
				result += "tam";
				break;
			case '9': 
				result += "chin";
				break;
			default: 
				result += s[i];
		}
	}
	return result;
}

std::string program_6(std::string s) {
	std::string ket_qua = "";
    
    int length = 256;
    int thong_ke[length] = {};
    for (int i = 0; i < s.length(); i++) {
        if( s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
            int unicode = s[i];
            thong_ke[unicode]++;
        } 
    }
    
    for(int i = 0; i < length; i++) {
        if(thong_ke[i] > 0) {
            std::string ki_tu; ki_tu += (char)i;
            std::string tan_suat = std::to_string(thong_ke[i]);
            // to_string la doi so sang string.
            // Vi du: 
			// int x = 64; cout << std::to_string(x)
			// bth neu in ra ngoai console thi se la so 64 
			// nhung co to_string thi no se chuyen tu so sang string 
			// nen se la "64"
            ket_qua += "(" + ki_tu + "-" + tan_suat + "), ";
        }
    }
    // Hàm replace là mot ham thanh vien trong class std:string, có tac dung thay the mot pham vi trong string ban dau bang mot noi dung moi. Phep thay the chuoi string bang ham replace s? lam thay doi string ban dau.
    ket_qua.replace(ket_qua.length()-2, 1, ""); // xoa dau phay "," khi het truong hop xet. Khi dem thi khoang trang co tinh la 1 index
    return ket_qua;
}

int main() {
	std::string s;
	std::cout << "Nhap chuoi s: ";
	std::getline(std::cin, s);
	std::cout << "Ket qua 1: " << program_1(s) << "\n";
	std::cout << "Ket qua 2: " << program_2(s) << "\n";
	std::cout << "Ket qua 3: " << program_3(s) << "\n";
	std::cout << "Ket qua 4: " << program_4(s) << "\n";
	std::cout << "Ket qua 5: " << program_5(s) << "\n";
	std::cout << "Ket qua 6: " << program_6(s) << "\n";
}
