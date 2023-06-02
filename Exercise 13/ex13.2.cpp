#include <iostream>
#include <string>

using namespace std;

const int MAX_OF_CHILDREN = 3;

struct Person
{
    Person(string name)
    {
        fullname = name;
        for(int i = 0; i < MAX_OF_CHILDREN; i++)
        {
            children[i] = NULL;
        }
    }
    
    string fullname;
    Person* children[MAX_OF_CHILDREN];
};

void print_children(Person* person)
{
	// cach 1
//	if (person->children[0] == NULL) {
//		std::cout << "\t" << person->fullname << " chua co con" << std::endl;
//	}
//	else {
//		std::cout << "\t" << person->fullname << " co con la: ";
//    	for (int i = 0; i < MAX_OF_CHILDREN; i++) {
//    		if (person->children[i] == NULL) break;
//    		
//			if (person->children[i + 1] != NULL) {
//    			std::cout << person->children[i]->fullname << ", " ;
//			}
//			else {
//				std::cout << person->children[i]->fullname;
//			}
//    		
//		}
//		std::cout << std::endl;
//	}

	// cach 2
	std::string children_info = "";
	for (int i = 0; i < MAX_OF_CHILDREN; i++) {
		if (person->children[i] == NULL) {
			break;
		}
		if (i != 0) {
			children_info += ", ";
		}
		children_info += person->children[i]->fullname;
	}
	if (children_info != "") {
		std::cout << "\t" << person->fullname << " co con la: " << children_info << std::endl;
	}
	else {
		std::cout << "\t" << person->fullname << " chua co con" << std::endl; 
	}
}

bool check_shared_children(Person* person_1, Person* person_2)
{
	for (int i = 0; i < MAX_OF_CHILDREN; i++) {
		for (int j = 0; j < MAX_OF_CHILDREN; j++) {
			if (person_1->children[i] == NULL && person_2->children[j] == NULL) return 0; 
			if (person_1->children[i] == person_2->children[j]) {
				return 1;
			}
		}
	}
    return 0;
}

void print_grandchildren(Person* person)
{
	if (person->children[0] != NULL) {
		if (person->children[0]->children[0] != NULL) {
			std::cout << "\t" << person->fullname << " co chau la: ";
    		for (int i = 0; i < MAX_OF_CHILDREN; i++) {
    			if (person->children[i] != NULL) {
    				for (int j = 0; j < MAX_OF_CHILDREN; j++) {
    					if (person->children[i]->children[j] == NULL) break;
    					if (person->children[i]->children[j + 1] == NULL) {
    						std::cout << person->children[i]->children[j]->fullname;
						}
    					else {
    						std::cout << person->children[i]->children[j]->fullname << ", ";
						}
					}
				}
				else break;
			}
		}
		else {
			std::cout << "\t" << person->fullname << " chua co chau.";
		}
	}
    else {
    	std::cout << "\t" << person->fullname << " chua co chau.";
	}
	std::cout << std::endl;
}

int main()
{
    Person *vu = new Person("Anh Vu");
    Person *yen = new Person("Thi Yen");
    Person *mtp = new Person("Son Tung MTP");
    Person *bao_tram = new Person("Thieu Bao Tram");
    Person *ngoc_trinh = new Person("Ngoc Trinh");
    Person *khac_tiep = new Person("Khac Tiep");
    Person *ozawa = new Person("Ozawa");
    Person *tokuda = new Person("Tokuda");
    
    {
    	vu->children[0] = mtp;
    	yen->children[0] = mtp;
    	mtp->children[0] = tokuda;
    	mtp->children[1] = ozawa;
    	
    	ngoc_trinh->children[0] = bao_tram;
    	khac_tiep->children[0] = bao_tram;
    	bao_tram->children[0] = tokuda;
    	bao_tram->children[1] = ozawa;
    }
    
    {
        cout << "Test 1 - In ten con: \n";
        cout << "\t"; print_children(vu);
        cout << "\t"; print_children(mtp);
        cout << "\t"; print_children(ozawa);
    }
    
    {
        cout << "Test 2 - Kiem tra con chung: \n";
        cout << "\tTest 2.1: " << (check_shared_children(vu, yen) == true ? "Pass" : "Failed") << "\n";
        cout << "\tTest 2.2: " << (check_shared_children(vu, ngoc_trinh) == false ? "Pass" : "Failed") << "\n";
        cout << "\tTest 2.3: " << (check_shared_children(mtp, bao_tram) == true ? "Pass" : "Failed") << "\n";
    }
    
    {
        cout << "Test 3 - In ten chau: \n";
        cout << "\t"; print_grandchildren(vu);
        cout << "\t"; print_grandchildren(ngoc_trinh);
        cout << "\t"; print_grandchildren(bao_tram);
        cout << "\t"; print_grandchildren(ozawa);
    }

}
