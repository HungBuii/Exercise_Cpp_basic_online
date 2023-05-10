#include <iostream>
#include <string>

const float basic_salary = 3; 

class Employee {
public:
	std::string name = 0;
	int age = 0;
	float salary_coefficient = 0;
	float salary_emp = 0;

	Employee() : name("Unknown") {
		age = 0;
		salary_coefficient = 0.0;
	}
	
	Employee(std::string n, int a, float s) : name(n), age(a), salary_coefficient(s) {
		
	} 
	
	void show_salary() {
		salary_emp = basic_salary * salary_coefficient;
		if ( (float)salary_emp == (int)salary_emp ) {
			std::cout << "Your salary is " << salary_emp << ".000.000 VND" << std::endl;
		}
		else {
			std::cout << "Your salary is " << salary_emp << "00.000 VND" << std::endl;
		}
	}
	
};

int main() 
{
	int num_emp = 0;
	float total_salary_emp = 0;
	
	std::cout << "Enter number of employees: ";
	std::cin >> num_emp;
	std::cout << std::endl;
	
	std::cin.ignore(); // dung de ket thuc 1 lan nhap enter ma getline khong lay duoc enter do
	
	Employee employee[num_emp];
	for(int i = 0; i < num_emp; i++) {
		std::cout << "Enter employee " << i + 1 << std::endl;
		std::cin.ignore();
		
		std::cout << "Enter your name: ";
		std::getline(std::cin, employee[i].name);
		std::cout << "Enter your age: ";
		std::cin >> employee[i].age;
		std::cout << "Enter your salary coefficient: ";
		std::cin >> employee[i].salary_coefficient;
		employee[i].show_salary();
		total_salary_emp += (basic_salary * employee[i].salary_coefficient);
	}
	
	float x = 0;
	x = total_salary_emp / num_emp;
	if ( (float)x == (int)x ) {
		std::cout << "Average salary of " << num_emp <<  " employees are " << x << ".000.000 VND" << std::endl;
	}
	else {
		std::cout << "Average salary of " << num_emp <<  " employees are " << x << "00.000 VND" << std::endl;
	}
	return 0;
}
