#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "Enter n = ";
	cin >> n;
	cout << endl;
	
	// Part 1	
	cout << "Part 1" << endl;
	for (int i = 2; i <= n; i+=2) {
		cout << i << " ";
	}
	cout << endl;
	
	// Part 2
	cout << "Part 2" << endl;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	
	// Part 3
	cout << "Part 3" << endl;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			if (i % 3 == 0) cout << i << " ";
		}
	}
	cout << endl;
	
	// Part 4
	cout << "Part 4" << endl;
	for (int i = -n; i <= n; i++) {
		if (i % 5 == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
