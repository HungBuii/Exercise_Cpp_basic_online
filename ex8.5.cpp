#include <iostream>
#include <cmath>

using namespace std;

void program_1(int a1[], int a2[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (a1[i] == a2[j]) {
				std::cout << a1[i] << " ";
			}
		}
	}
	std::cout << endl;
}

float program_2(int a1[], int a2[], int length) {
//	int count = 0;
//	float percentage = 0.0; 
//	for (int i = 0; i < length; i++) {
//		if (a1[i] == a2[i]) count++;
//	}
//	percentage = (float)count / length * 100;
//	return percentage;
	int dem = 0;
    for (int i = 0; i < length; i++) {
    	if (a1[i] == a2[i]) dem++;
    }
    return (float)dem/length*100;
}

bool program_3(int a1[], int a2[], int length) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (a1[i] >= a2[i]) count++;
	}
	if ((float)count / length * 100 > 50) return true;
	return false;
}

void program_remove(int a[], int& length, int position) {
	if (position > length || position < 0) {
		std::cout << "Out of range";
		return;
	} // khong can cung duoc boi vi mang a1 va a2 bang nhau va mang b = 2 * a nen khi co thua gia tri thi se lap tuc luu va tra ve cho he dieu hanh  
	for (int i = position; i < length; i++) {
		a[i] = a[i + 1];
	}
	length--;
}

void program_4(int a1[], int a2[], int length_a, int b[], int& length_b) {
	length_b = 2 * length_a;
	for (int i = 0; i < length_a; i++) {
		b[i] = a1[i];
	}
	
	for (int i = 0; i < length_a; i++) {
		b[length_a + i] = a2[i];
	}
	
	// Sort elements in ascending order (Sap xep tang dan)
	for (int i = 0; i < length_b; i++) {
		for (int j = i + 1; j < length_b; j++) {
			if (b[i] > b[j]) {
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	// Remove element from array 
// Cach 1
//	for (int i = 0; i < length_b; i++) {
//		for (int j = i + 1; j < length_b; j++) {
//			if (b[i] == b[j]) {
//				for (int k = j; k < length_b; k++) {
//					b[k] = b[k + 1];
//				}
//				length_b--;
//			}
//		}
//	}

// Cach 2
	for (int i = 0; i < length_b; i++) {
		if (i + 1 < length_b && b[i] == b[i + 1]) {
			// i + 1 < length_b ko can cung duoc 
			program_remove(b, length_b, i + 1); 
		}
	}
	
}

int main() {
	int a1[1000];
	int a2[1000];
	int length_a = 0;
	cout << "Nhap so luong phan tu: "; cin >> length_a;
	cout << "Nhap lien tiep " << length_a << " gia tri cho a1: ";
	for(int i = 0; i < length_a; i++) cin >> a1[i];
	cout << "Nhap lien tiep " << length_a << " gia tri cho a2: ";
	for(int i = 0; i < length_a; i++) cin >> a2[i];
	{
	cout << "Ket qua 1: "; program_1(a1, a2, length_a);
	cout << "Ket qua 2: " << program_2(a1, a2, length_a) << "%\n";
	cout << "Ket qua 3: "
	<< (program_3(a1, a2, length_a) ? "True" : "False") << "\n";
	}
	cout << "Ket qua 4: ";
	int b[1000];
	int length_b = 0;
	program_4(a1, a2, length_a, b, length_b);
	for(int i = 0; i < length_b; i++) cout << b[i] << " ";
}
