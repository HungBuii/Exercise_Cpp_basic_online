#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

struct Person
{
	std::string ho_ten;
	int tuoi;
	
	Person(): ho_ten(""), tuoi(-1) {}
	Person(string ht, int t) : ho_ten(ht), tuoi(t) {}
};

struct PersonList 
{
	Person* person_list[MAX]; // khoi tao mang person_list co MAX phan tu la pointer trong bo nho stack 
	int count;
	
	PersonList()
	{
	    count = 0;
	}
	
    void show_all()
    {
        for (int i = 0; i < count; i++) {
        	std::cout << "\t" << person_list[i]->ho_ten << " - " << person_list[i]->tuoi << " tuoi." << std::endl;
		}
    }
    
    void append(Person *new_person)
    {
    	person_list[count] = new_person; // pointer voi pointer
    	count++;
	}
    
    void remove(int i)
    {
        for (int j = i; j < count; j++) {
        	person_list[j] = person_list[j+1];
		}
		count--;
    }
    
    string get_oldest_person()
    {
        int max_age = person_list[0]->tuoi;
        int max_index = 0;
        for (int i = 0; i < count; i++) {
        	if (max_age < person_list[i]->tuoi) {
        		max_age = person_list[i]->tuoi;
        		max_index = i;
			}
		}
		return person_list[max_index]->ho_ten;
    }
};

int main()
{
    PersonList* list = new PersonList;
    list->append(new Person("Anh Vu", 30));
    list->append(new Person("Eimi Fukada", 25));
    list->append(new Person("Ngoc Trinh", 27));
    list->append(new Person("Khac Tiep", 29));
    
	{
	    cout << "Test 1 - Print all person:\n";
	    list->show_all();
	}
	
	{
	    cout << "Test 2 - Append Tokuda:\n";
        list->append(new Person("Tokuda", 60));
	    list->show_all();
	}
	
	{
	    cout << "Test 3 - Remove Ngoc Trinh:\n";
	    list->remove(2);
	    list->show_all();
	}
	
	{
	    cout << "Test 4 - Oldest person: ";
	    cout << list->get_oldest_person() << "\n";
	}
}
