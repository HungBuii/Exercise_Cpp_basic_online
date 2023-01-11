#include <iostream>
#include <cmath>
#include <string>

using namespace std;

std::string operator*(std::string s, int n) {
	std::string result;
	for (int i = 0; i < n; i++) {
		result += s;
	}
	return result;
}

int main() {
	std::string s = "abc";
	
	cout << s * 3 << endl;
}
