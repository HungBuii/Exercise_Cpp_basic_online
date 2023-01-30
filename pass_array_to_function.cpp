#include <iostream>

using namespace std;

// array va pointer ban chat khac nhau nhung co nhung toan tu 
// co the su dung voi nhau

// b[] hay *b = XXXXXXX -> dia chi
void show_array(int *b) { // hoac co the viet(int b[])
// int b[] thuc chat la con tro ngoai le co the thay dau * thanh dau []
// boi vi khong the truyen doi so la mot array a cho function
// Vi du: int b[] = a la khong hop le boi vi khong 
// the gan array a sang array b (hay goi la copy gia tri) nen khi muon 
// truy cap vao array a thi chung ta se dung con tro
// de co the truy cap vao dia chi cua mang a.

// (Luu y)Ngoai ra khi tham so la gia tri vd nhu a, b la gia tri cu the va
// void show(int b) va o duoi main goi show(a) thi b
// la gia tri copy cua a va b la bien cuc bo chi ton tai trong ham show va 
// khi thoat ra thi bien b se khong tac dong gi den bien a.
	for (int i = 0; i < 3; i++) {
		std::cout << b[i] << " "; 
		// day cung la truong hop ngoai le
		// khong can phai viet dau * boi vi
		// con tro b dang tro vao vung array a (b[i] = a[i])
		// nen b[i] van co the duoc dung de lay gia tri cu the
	}

//	cout << b << " " << &b; 
// b la dia chi gia tri dau tien trong mang trong bo nho 
// &b la dia chi cua con tro b trong bo nho 
}

int main() {
	int a[3] = {1, 2, 3};
	show_array(a);
	
	
}
