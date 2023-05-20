#include <iostream>
#include <string>
#include <typeinfo>

template <typename T>
struct Point { // neu k co template se phai tao ra 2 struct co 2 kieu du lieu la int va string
	T x;
	T y;
	
	// co the dung tempate thanh vien trong struct/class trong function nay
	void show_point() {
		std::cout << "Type of point: " << typeid(T).name() << std::endl;
	}
};

int main() {
	Point<int> point;
	point.x = 10;
	point.y = 20;
	
	Point<std::string> point_2;
	point_2.x = "30";
	point_2.y = "40";
	
	point.show_point();
	point_2.show_point();
}
