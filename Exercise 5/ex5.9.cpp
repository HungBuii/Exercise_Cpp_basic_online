#include <iostream>

using namespace std;

int main() {
	int result = 0;
	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			result = i * j;
			cout << i << "*" << j << "=" << result << "\t";
		}
		cout << endl;
	}
}
