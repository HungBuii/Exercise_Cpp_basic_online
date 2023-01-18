#include <iostream>
#include <cmath>

using namespace std;

float program_1(int a[], int length) {
	float result_1 = 0;
	int index_pos = 0;
	for (int i = 0; i < length; i++) {
		if (i % 2 == 0) {
			result_1 += a[i];
			index_pos += 1;
		}
	}
	return result_1 / index_pos;
}

float program_2(int a[], int length) {
	float result_2 = 0;
	int index_pos = 0;
	for (int i = 0; i < length; i++) {
		if (i % 2 != 0 && a[i] % 2 != 0) {
			result_2 += a[i];
			index_pos += 1;
		}
	}
	// for(int i = 1; i < length; i+=2)
	// if(a[i] % 2 != 0)
	return result_2 / index_pos;
}

int program_3(int a[], int length) {
	int max = a[0];
	for (int i = 0; i < length; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int program_4(int a[], int length) {
	int min_index = 0;
	for (int i = 0; i < length; i++) {
		if (a[i] < a[min_index]) {
			min_index = i;
		}
	}
	return min_index;
}

int program_5(int a[], int length) {
	int nums_square = 0;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < program_3(a, length) / 2; j++) {
			if (a[i] == pow(j, 2)) nums_square++;
		}
	}
	// for(int i = 0; i < length; i++)
	// if(sqrt(a[i]) == (int)sqrt(a[i])) nums_square++;
	return nums_square;
}

bool check_prime(int x) {
	if (x <= 1) return false;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int program_6(int a[], int length) {
	int result_6 = 0;
	for (int i = 0; i < length; i++) {
		if (check_prime(a[i]) == true) result_6 += a[i];
	}
	return result_6;
}

void program_7(int a[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {
	const int MAX = 1000;
	int a[MAX];
	cout << "Nhap so luong phan tu: ";
	int n; cin >> n;

	cout << "Nhap lien tiep " << n << " gia tri: ";
	for (int i = 0; i < n; i++) cin >> a[i];

	cout << "Ket qua 1: " << program_1(a, n) << "\n";
	cout << "Ket qua 2: " << program_2(a, n) << "\n";
	cout << "Ket qua 3: " << program_3(a, n) << "\n";
	cout << "Ket qua 4: " << program_4(a, n) << "\n";
	cout << "Ket qua 5: " << program_5(a, n) << "\n";
	cout << "Ket qua 6: " << program_6(a, n) << "\n";

	cout << "Ket qua 7: "; program_7(a, n);
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}