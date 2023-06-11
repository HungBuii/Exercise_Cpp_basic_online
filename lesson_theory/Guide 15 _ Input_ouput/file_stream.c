#include <stdio.h>

int main() {
	int x, y;
	
	FILE* in_file = fopen("input.txt", "r"); // r (read) w (write) a (append)
	
	fscanf(in_file ,"%d %d", &x, &y);
//	scanf("%d %d", &x, &y);
	
	FILE* out_file = fopen("output.txt", "w"); // r (read) w (write _ ghi de) a (append _ them du lieu)
	
	fprintf(out_file, "x + y = %d", x+y);
//	printf("x + y = %d", x+y);
	
}


