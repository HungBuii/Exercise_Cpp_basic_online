#include <iostream>
#include <cmath>

using namespace std;

const int length = 5;

int find_min_index(int a[], int start_index) {
	int min_index = start_index;
	for (int i = start_index; i < length; i++) {
		if (a[i] < a[min_index]) {
			min_index = i;
		}
	}
	return min_index;
}

void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a[length] = {3, 1, 4, 5, 2};
	
	// sort
	for (int i = 0; i < length; i++) {
		int min_index = find_min_index(a, i);
		swap(a[i], a[min_index]);
	}
	
	// print
	for (int x : a) cout << x << " ";
	
	return 0;
}
