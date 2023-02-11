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
		// con tro b dang lien ket voi vung array a 
		// nen con tro b se tro vao phan tu dau tien cua mang a (a[0]) va 
		// tu do tim dia chi cua phan tu ke tiep nen b[i] van co the duoc dung de lay gia tri cu the.
		// Ngoai ra thi con tro ki hieu * va array ki hieu [] khong the di cung voi nhau
		// neu muon lay gia tri cu the.
		
		// vi du: 
		// int a[3] = {1, 2, 3};
		// int* p = a; 
		// for (int i = 0; i < 3; i++) {
		// cout << p[i] << " ";
		// }
		// a la dia chi gia tri dau tien cua mang a trong bo nho
		// nen con tro p luc nay se tu dia chi cua dia chi dau tien va
		// tim duoc dia chi phan tu tiep theo trong mang a 
	}

//	cout << b << " " << &b; 
// b la dia chi gia tri dau tien trong mang trong bo nho 
// &b la dia chi cua con tro b trong bo nho 
}

int main() {
	int a[3] = {1, 2, 3};
	show_array(a); // a la dia chi gia tri dau tien trong mang a trong bo nho 
	
	
}
