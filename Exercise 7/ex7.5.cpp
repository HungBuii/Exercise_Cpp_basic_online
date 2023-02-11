#include <iostream>

using namespace std;

float divide(float a, float b)
{
	float result = (float)(a / b);
    if (b == 0) {
    	cout << "Phep chia ko thuc hien duoc cho ";
    	return 0;
	}
	else return result;
}

int main() {
	cout << divide(6, 2) << "\n";
	cout << divide(8, 0) << "\n";
    cout << divide(-7, 2) << "\n"; 
    cout << divide(8, 0);
   
    return 0;
}
