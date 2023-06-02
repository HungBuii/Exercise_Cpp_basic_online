#include <iostream>

using namespace std;

struct Person
{
    Person(std::string fn)
    {
        fullname = fn;
    }
    string fullname;
    Person* left_neighbourhood = NULL;
    Person* right_neighbourhood = NULL;
};

void print_neighbourhood(Person *person)
{
	// cach 1
//	if (person->left_neighbourhood == NULL) {
//		std::cout << "\t" << "Hang xom cua " << person->fullname << " la: " << person->right_neighbourhood->fullname << std::endl;
//	}
//	else if (person->right_neighbourhood == NULL) {
//		std::cout << "\t" << "Hang xom cua " << person->fullname << " la: " << person->left_neighbourhood->fullname << std::endl;
//	}
//	else {
//		std::cout << "\t" << "Hang xom cua " << person->fullname << " la: " << person->left_neighbourhood->fullname << ", " << person->right_neighbourhood->fullname << std::endl;
//	}

	// cach 2
	std::cout << "\t" << "Hang xom cua " << person->fullname << " la: ";
	bool has_left_person = false;
	if (person->left_neighbourhood != NULL) {
		std::cout << person->left_neighbourhood->fullname;
		has_left_person = true;
	}
	if (person->right_neighbourhood != NULL) {
		if (has_left_person == true) {
			std::cout << ", ";
		}
		std::cout << person->right_neighbourhood->fullname;
	}
	std::cout << std::endl;
}

void check_neighbourhooh(Person* person1, Person* person2)
{
    if ( (person1->left_neighbourhood == person2) || 
		(person1->right_neighbourhood == person2) ) 
	{
		std::cout << "\t" << person1->fullname << " la hang xom cua " << person2->fullname << std::endl;
	}
	else {
		std::cout << "\t" << person1->fullname << " khong phai la hang xom cua " << person2->fullname << std::endl;
	}
}

string check_position(Person* person)
{
    if (person->left_neighbourhood == NULL && person->right_neighbourhood == NULL ) {
    	return "Khong o trong nhom";
	}
	else if (person->left_neighbourhood == NULL ) {
		return "dau xom";
	}
	else if (person->right_neighbourhood == NULL) {
		return "cuoi xom";
	}
	else return "giua xom";
	
}	

int main()
{
    Person* vu = new Person("Vu");
    Person* ozawa = new Person("Maria Ozawa");
    Person* ngoc_trinh = new Person("Ngoc Trinh");
    Person* son_tung_mtp = new Person("Son Tung MTP");
    Person* tokuda = new Person("Tokuda");
    
    {
       // Noi dung cau 1 
       vu->right_neighbourhood = ozawa;
       vu->left_neighbourhood = NULL;
       
       ozawa->right_neighbourhood = ngoc_trinh;
       ozawa->left_neighbourhood = vu;
       
       ngoc_trinh->right_neighbourhood = son_tung_mtp;
       ngoc_trinh->left_neighbourhood = ozawa;
       
       son_tung_mtp->right_neighbourhood = NULL;
       son_tung_mtp->left_neighbourhood = ngoc_trinh;
    }
    
    {
        std::cout << "Test 1 - In thong tin hang xom: \n";
        cout << "\t"; print_neighbourhood(vu);
        cout << "\t"; print_neighbourhood(ngoc_trinh);
    }
    
    {
        std::cout << "Test 2 - Kiem tra hang xom: \n";
        cout << "\t"; check_neighbourhooh(vu, ozawa);
        cout << "\t"; check_neighbourhooh(vu, ngoc_trinh);
    }
    
    {
        std::cout << "Test 3 - Kiem tra vi tri: \n";
        cout << "\tVi tri cua " << vu->fullname << " la: " << check_position(vu) << "\n";
        cout << "\tVi tri cua " << ngoc_trinh->fullname << " la: " << check_position(ngoc_trinh) << "\n";
        cout << "\tVi tri cua " << son_tung_mtp->fullname << " la: " << check_position(son_tung_mtp) << "\n";
        cout << "\tVi tri cua " << tokuda->fullname << " la: " << check_position(tokuda) << "\n";
    }
}
