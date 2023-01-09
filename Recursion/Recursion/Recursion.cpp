//#include <iostream>
//#include <Windows.h>
//
//void love(int i) {
//    if (i == 11) {
//        return; // giong break de ngat vong lap trong ham for
//    }
//    std::cout << "Hello lan thu " << i << std::endl;
//    Sleep(10);
//    i++;
//
//    love(i);
//}
//
//int main()
//{
//    int i = 1;
//    love(i);
//}

#include <iostream>

int sum(int i) {
	if (i == 11) {
		return 0;
	}
	int kq = i + sum(i + 1); // 1: i ||  2: i++ || 3: sum(i) || 4: call again int sum(int i) || 5: repeat activity 
							 // 6: i == 11 -> return 0 (break) || 7: return kq -> sum(i) in main
							 
	return kq;
}

int main() {
	int i = 0;
	int ket_qua = sum(i);
	std::cout << ket_qua;
}

