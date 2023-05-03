// C style struct
#include <stdio.h>

// Cach 1
// struct definition
struct Person { 
	char fullname[30];
	int age;
	float height;
};

// Cach 2
//typedef struct _Person { // khai bao ten day du cua struct
//	char fullname[30];
//	int age;
//	float height;
//} Person; // ten rut gon de dung k;

int main() {
	// cach 1
	struct Person person = {"Hung", 21, 1.68};
//  Declaration				Initilization	
	// cach 2
//	Person person = {"Hung", 21, 1.68};
	printf("%s", person.fullname);
}
