#include <iostream>

int average(float x, float y, float z) {
    float arg = (x + y + z) / 3;
    return arg;
}

int max_number(float x, float y, float z) {
    //	if (x - y - z >= 0) {
//		return x;
//	}
//	else if (y - x - z >= 0) {
//		return y;
//	}
//	else if (z - y - x >= 0) {
//		return z;
//	}

//	float max = x;
//	if (y > max) max = y;
//	if (z > max) max = z;
//	return max;
    if (z > x && z > y) {
        return z;
    }
    else if (x > y && x > z) {
        return x;
    }
    else if (y > x && y > z) {
        return y;
    }
}

int main()
{
    float a, b, c;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;

    
    std::cout << "Ket qua 1: " << average(a, b, c) << std::endl;

    std::cout << "Ket qua 2: " << max_number(a, b, c);
    return 0;
}

