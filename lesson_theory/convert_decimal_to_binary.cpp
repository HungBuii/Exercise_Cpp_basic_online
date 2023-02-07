#include <iostream>
#include <cmath>

using namespace std;

long long Dec2Bin(int decimalNumber) 
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber; // cac so hoat dong nhu bo nho stack voi push, pop 
}

int main() {
	int decimalNumber;
	cout << "Enter a decimal number: ";
	cin >> decimalNumber;
	
	cout << "Bin = " << Dec2Bin(decimalNumber) << endl;
	
	return 0;
}
