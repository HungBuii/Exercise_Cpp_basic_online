#include <iostream>
#include <string>
#include <math.h>

class Point {
public: 
	float x, y, z;
	
	Point() {
		
	}
	
	Point(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {
		
	}
	
	
};
	
	// Question 1
	float program_1(Point A) {
		float length = sqrt(A.x * A.x + A.y * A.y + A.z * A.z);
		return length;
	}
	
	// Question 2
	float program_2(Point A, Point B) {
		float length = sqrt( (pow(B.x - A.x, 2)) + (pow(B.y - A.y, 2)) + (pow(B.z - A.z, 2)) );
		return length;
	}
	
	// Question 3
	float program_3(Point A, Point B) {
		float length = 0;
		float numerator, denominator = 0.0;
		numerator = A.x * B.x + A.y * B.y + A.z * B.z;
//		denominator = sqrt( (pow(A.x, 2) + pow(A.y, 2) + pow(A.z, 2)) * (pow(B.x, 2) + pow(B.y, 2) + pow(B.z, 2)) );
		denominator = program_1(A) * program_1(B);
		length = numerator / denominator;
		return ( acos(length) * 180 / (3.14) );
	}
	
	// Question 4
	float program_4(Point A, Point B) {
//		Point I;
//		I.x = (A.x + B.x) / 2;
//		I.y = (A.y + B.y) / 2;	
//		I.z = (A.z + B.z) / 2;

		Point I = { (A.x+B.x)/2, (A.y+B.y)/2, (A.z+B.z)/2 };
		return program_1(I);
	}

	// Question 5
	float program_5(Point A, Point B, Point C) {
// Cach 1
//		Point G;
//		G.x = (A.x + B.x + C.x) / 3;
//		G.y = (A.y + B.y + C.y) / 3;
//		G.z = (A.z + B.z + C.z) / 3;

// Cach 2
		Point G { (A.x+B.x+C.x)/3, (A.y+B.y+C.y)/3, (A.z+B.z+C.z) /3 };
		return program_1(G);
	}
	
	// Question 6
	float program_6(Point A, Point B, Point C) {
		float AB = program_2(A, B);
		float BC = program_2(B, C);
		float AC = program_2(A, C);
		float p = (AB + BC + AC) / 2;
		float area_retangle = sqrt( p * (p - AB) * (p - AC) * (p - BC) );
		return area_retangle;
	}
	
int main() {
	Point A, B, C;
	std::cout << "Nhap diem A: "; std::cin >> A.x >> A.y >> A.z;
	std::cout << "Nhap diem B: "; std::cin >> B.x >> B.y >> B.z;
	std::cout << "Nhap diem C: "; std::cin >> C.x >> C.y >> C.z;
	std::cout << "Ket qua 1: " << program_1(A) << "\n";
	std::cout << "Ket qua 2: " << program_2(A, B) << "\n";
	std::cout << "Ket qua 3: " << program_3(A, B) << "\n";
	std::cout << "Ket qua 4: " << program_4(A, B) << "\n";
	std::cout << "Ket qua 5: " << program_5(A, B, C) << "\n";
	std::cout << "Ket qua 6: " << program_6(A, B, C) << "\n";
}
