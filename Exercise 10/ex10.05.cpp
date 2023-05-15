#include <iostream>
#include <string>

using namespace std;

struct Person {
	std::string ho_ten;
	int tuoi;
	
	Person() { ho_ten = ""; tuoi = -1; }
	Person(string ht, int t) { ho_ten = ht; tuoi = t;}
	
	void print_info() {
	    std::cout << "\t" << ho_ten << " - " << tuoi << " tuoi." << std::endl;
	}
};

void show_all(Person* people, int length) {
// Cach 1:
//    for (Person* a = people; a < people + length; a++) {  	
//		(*a).print_info();
//	}

// Cach 2:
	for (int i = 0; i < length; i++) {
//		(people+i)->print_info(); cach 1	
		people[i].print_info(); // cach 2
	}
}

void append(Person* people, int& length, Person& new_person) {
	people[length] = new_person;
	length++;
}

void remove(Person* people, int& length, int index) {
	if (index >= length) return;
	
	// cach 1
//	for(int i = index; i < length; i++) {
//        people[i].ho_ten = people[i+1].ho_ten;
//        people[i].tuoi = people[i+1].tuoi;
//    }
//    people[length].ho_ten = "";
//    people[length].tuoi = -1;
//    length--;
	
	// cach 2
    for (int i = index; i < length; i++) {
		people[i] = people[i + 1];
	}
    people[length].ho_ten = "";
    people[length].tuoi = -1;
	length--;
}

std::string get_oldest_person(Person* people, int length) {
	// cach 1
    int max = people->tuoi;
    int x = 0;
	for (int i = 0; i < length; i++) {
    	if (max < (people+i)->tuoi ) {
    		max = (people+i)->tuoi;
    		x = i;
		}
	}
	return (people + x)->ho_ten;
	
	// cach 2
//	int max_age = 0;
//    string name = "";
//    for(int i = 0; i < length; i++)
//    {
//        if(people[i].tuoi > max_age )
//        {
//            max_age = people[i].tuoi;
//            name = people[i].ho_ten;
//        }
//    }
//    return name;
}

void sort_person_list_by_age(Person* people, int length) {
	// cach 1
    for (int i = 0; i < length; i++) {
    	for (int j = i + 1; j < length; j++) {
    		if ( (people + i)->tuoi > (people + j)->tuoi ) {
				Person temp_people = people[i];
				people[i] = people[j];
				people[j] = temp_people;
			}
		}
	}
	
	// cach 2
//	for(int i = 0; i < length; i++) {
//        for(int j = i+1; j < length; j++)  {
//            if(people[i].tuoi > people[j].tuoi)    
//            {
//                int temp_age = people[i].tuoi;
//                people[i].tuoi = people[j].tuoi;
//                people[j].tuoi = temp_age;
//                
//                string temp_name = people[i].ho_ten;
//                people[i].ho_ten = people[j].ho_ten;
//                people[j].ho_ten = temp_name;
//            }
//        }   
//    }
}

int main()
{
    const int MAX = 100;
    int length = 0;
	Person person_list[MAX];
	
	Person person_1("Anh Vu", 30);
	Person person_2("Eimi Fukada", 25);
	Person person_3("Ngoc Trinh", 27);
	Person person_4("Khac Tiep", 29);
	
	person_list[0] = person_1;length++;
	person_list[1] = person_2;length++;
	person_list[2] = person_3;length++;
	person_list[3] = person_4;length++;
	
	{
	    cout << "Test 1 - Print first person:\n";
	    person_list[0].print_info();
	}
	
	{
	    cout << "Test 2 - Print all person:\n";
	    show_all(person_list, length);
	}
	
	{
	    cout << "Test 3 - Append Tokuda:\n";
	    Person person_5("Tokuda", 60);
	    append(person_list, length, person_5);
	    show_all(person_list, length);
	}
	
	{
	    cout << "Test 4 - Remove Ngoc Trinh:\n";
	    remove(person_list, length, 2);
	    show_all(person_list, length);
	}
	
	{
	    cout << "Test 5 - Oldest person: ";
	    cout << get_oldest_person(person_list, length) << "\n";
	}
	
	{
	    cout << "Test 6 - Sort by age:\n";
	    sort_person_list_by_age(person_list, length);
	    show_all(person_list, length);
	}
}

