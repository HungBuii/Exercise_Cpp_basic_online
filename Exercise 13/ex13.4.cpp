#include <iostream>
#include <string>

using namespace std;

struct Person
{
	Person(string name)
	{
		fullName = name;
		next = NULL;
	}
	string fullName;
	Person* next;
};

struct PersonList
{
	Person* head = NULL;

	void print_all()
	{
		int i = 0;
        for (Person* p = head; p != NULL; p = p->next) {
        	std::cout << i++ << " - " << p->fullName << std::endl;
		}
	}

	void append(Person *person)
	{
        if (head == NULL) {
        	head = person;
        	return;
		}
		
		Person* p = head;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = person;
	}

	void insert(Person *person, int position)
	{
		
//		cach 1
//        if (position == 0) {
//        	person->next = head;
//        	head = person;
//        	return;
//		}
//		
//		int i = 1;
//		Person* p = head->next;
//		Person* p_back = head;
//		while (p != NULL) {
//			if (i == position) {
//				p_back->next = person;
//				person->next = p;
//				break;
//			}
//			p_back = p;
//			p = p->next;
//			i++;
//		}

// 		cach 2
		int i = 0;
		Person* p_back = NULL;
		Person* p = head;

		while (p != NULL) {
			if (i == position) {
				// Chen vao dau
				if (i == 0) {
					person->next = p;
					head = person;
				}
				else {
					p_back->next = person;
					person->next = p;
				}
				break;
			}
			p_back = p;
			p = p->next;
			i++;
		}
	}

	void remove(int position)
	{
        if (position == 0) {
        	Person* p = head;
        	head = p->next;
        	delete(p);
        	return;
		}
		
		int i = 1;
		Person* p = head->next;
		Person* p_back = head;
		
		while (p != NULL) {
			if (i == position) {
				p_back->next = p->next;
				delete(p);
				break;
			}
			p_back = p;
			p = p->next;
			i++;
		}
	}
};

int main()
{
	// Create some person
	Person *vu = new Person("Nguyen Anh Vu");
	Person *eimi = new Person("Eimi Fukada");
	Person *ozawa = new Person("Maria Ozawa");
	Person *nobita = new Person("Nobita");
	Person *xuka = new Person("Xuka");
	PersonList *list = new PersonList;

	// Test 1:
	{
		cout << "Test 1 - Them 5 nguoi\n";
		list->append(vu);
		list->append(eimi);
		list->append(ozawa);
		list->append(nobita);
		list->append(xuka);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 2
	Person *hara = new Person("Yui Hara");
	{
		int pos = 2;
		cout << "Test 2 - Chen vao vi tri " << pos << "\n";
		list->insert(hara, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 3
	{
		int pos = 1;
		cout << "Test 3 - Xoa vi tri " << pos << "\n";
		list->remove(pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 4
	Person *doremon = new Person("Doremon");
	{
		int pos = 0;
		cout << "Test 4 - Chen vao vi tri " << pos << "\n";
		list->insert(doremon, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 5
	Person *dekhi = new Person("Dekhi");
	{
		int pos = 5;
		cout << "Test 5 - Chen vao vi tri " << pos << "\n";
		list->insert(dekhi, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 6
	{
		int pos1 = 0;
		int pos2 = 5;
		cout << "Test 6 - Xoa vi tri " << pos1 << " va " << pos2 << "\n";
		list->remove(pos1);
		list->remove(pos2);
		list->print_all();
		cout << "-------------------------\n";
	}

	return 0;
}
