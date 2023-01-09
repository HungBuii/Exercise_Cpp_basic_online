#include <iostream>
#include <string>

template <typename T>

// doi voi "class" thi cach goi giong het struct

struct Point {
    T x;
    T y;

    // template<typename T2> // co the tao 1 template khac ben trong struct
    void show_point() {
        std::cout << "Type of point: " << typeid(T).name() << std::endl;
    }
};

int main()
{
    Point<int> point; // truyen kieu du lieu dua theo struct
    point.x = 10;
    point.y = 20;

    Point<std::string> point_2;
    point_2.x = "10";
    point_2.y = "20";

    /*std::cout << point.x << " " << point_2.x << std::endl;*/

    point.show_point();
    point_2.show_point();

}

