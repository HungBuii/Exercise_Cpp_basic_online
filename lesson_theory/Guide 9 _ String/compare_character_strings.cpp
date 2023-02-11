#include <iostream>
#include <string>

using namespace std;

int main() {
	char s1[] = "thao";
	char s2[] = "thanh";
	
	int i = 0;
	while(i < sizeof(s1) && i < sizeof(s2) && s1[i] == s2[i]) {
		i++;
	}
	std::cout << (s1[i] == s2[i] ? "True" : "False"); // so sanh o voi n
}
