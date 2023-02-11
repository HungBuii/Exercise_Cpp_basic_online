#include <iostream>

using namespace std;

void kiem_tra(float x) {
//	int x1 = x; float x2 = x - x1; 
//	
//	if (x == 0) cout << "Day la so 0" << endl;
//	
//	if (x1 > 0 && x2 == 0) {
//		cout << "Day la so nguyen duong" << endl;
//	}
//	else if(x2 > 0) {
//		cout << "Day la so thuc duong" << endl;
//	}
//	
//	if (x1 < 0 && x2 == 0) {
//		cout << "Day la so nguyen am" << endl;
//	}
//	else if(x2 < 0) {
//		cout << "Day la so thuc am" << endl;
//	}

	if (x == 0) cout << "Day la so 0" << endl;
	else {
		if ((float)x == (int)x) {
			if (x > 0) cout << "Day la so nguyen duong" << endl;
			else cout << "Day la so nguyen am" << endl;
		}
		else {
			if (x > 0) cout << "Day la so thuc duong" << endl;
			else cout << "Day la so thuc am" << endl;
		}
	}
}

void kiem_tra(std::string x) {
	cout << "Day la chuoi ki tu" << endl;
}

int main() {
	// Phan test 
	cout << "0\t: "; 	kiem_tra(0);
	cout << "5\t: "; 	kiem_tra(5);
	cout << "-5\t: "; 	kiem_tra(-5);
	cout << "5.5\t: "; 	kiem_tra(5.5);
	cout << "-5.5\t: "; kiem_tra(-5.5);
	cout << "-5.0\t: "; kiem_tra(-5.0);
	cout << "nam\t: "; 	kiem_tra("nam");
    return 0;
}
