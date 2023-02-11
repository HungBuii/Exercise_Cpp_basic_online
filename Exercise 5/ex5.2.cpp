#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double n, result;
	cout << "Enter n = ";
	cin >> n;
	cout << endl;
	
	// Part 1
	{
		result = 0;
		for (int i = 1; i <= n; i++) {
			result += i;
		}
		cout << "P(n) = " << result << endl;
	}
	// Part 2
	{
		result = 1;
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
		cout << "Q(n) = " << result << endl;
	}
	
	// Part 3
	{
		result = 0;
		for (int i = 1; i <= n; i++) {
			if (i % 2 != 0) {
				result += i;
			}
		}
		cout << "R(n) = " << result << endl;
	}
	
	// Part 4
	{
		result = 0;
		for (int i = 1; i <= n; i++) {
			result += pow(i,3);
		}
		cout << "S(n) = " << result << endl;
	}
	
	// Part 5
	{
		result = 0;
		for (int i = 1; i <= n; i++) {
			result += (i / (pow(i,i)) );
		}
		cout << "T(n) = " << result << endl;
	}
	
	// Part 6
	{
		result = 0;
		for (int i = 1; i <= n; i++) {
			result += i * (i + 1);
		}
		cout << "U(n) = " << result << endl;
	}
	
	// Part 7
	{
		result = 0;
		for (int i = 1; i <= n; i++) {
			int temp = 0;
			for (int j = 0; j < i; j++) {
				temp += pow(10, j);
			}
			result += temp;
		}
		cout << "V(n) = " << result << endl;
	}
	
	// Part 8
	{
		result = 0;
		int temp = 0;
		for (int i = 1; i <= n; i++) {
			temp += i;
			result += temp;
		}
		cout << "X(n) = " << result << endl;
	}
	
	return 0;
}
