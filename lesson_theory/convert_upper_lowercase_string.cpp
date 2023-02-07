#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

int main() {
	char name[] = "Hung Bui"; // it is "Hung Bui\0"
	// const array and can't fix length of array
	
	// Cach 1
//	for (int i = 0; i < sizeof(name) - 1; i++) { // remove \0: null character
//		if (name[i] >= 'a' && name[i] <= 'z') { // uppercase
//			name[i] -= 32;
//		}
////		if (name[i] >= 'A' && name[i] <= 'Z') { // lowercase
////			name[i] += 32;
////		}
//	}

	// Cach 2: su dung STL
	for (int i = 0; i < sizeof(name) - 1; i++) {
		name[i] = toupper(name[i]); // tolower(name[i])
		// toupper va tolower chi bien doi 1 ki tu don nen muon doi chuoi thi phai duyet for
	}
	std::cout << name; // trong chuoi ki tu thi khong phai duyet for boi vi 
					   // ki tu khong the su dung cac phep toan nen no chi phuc vu de in ra. 
					   // Vi vay compiler da ho tro danh cho kieu ki tu khong phai duyet vong for de in ra cac ki tu 
}
