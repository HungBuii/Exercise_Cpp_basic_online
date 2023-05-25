#include <iostream>
#include <string>

using namespace std;

struct Person
{
    Person(std::string fn)
    {
        fullname = fn;
    }
    string fullname;
};

void show_info(Person *p)
{
    std::cout << "\t" << "Dia chi: " << p << std::endl;
    std::cout << "\t" << "Gia tri: " << p->fullname << std::endl;
}

int check_duplicate(Person* p1, Person *p2)
{
	if (p1 == p2) return 0;
    else if (p1 != p2 && p1->fullname == p2->fullname) return 1;
	else return 2;
}

// Ko sua ham main 
int main()
{
    Person p1("Vu");
    Person *p2 = new Person("Fukada");
    Person *p3 = new Person("Tokuda");
    Person *p4 = new Person("Vu");
    Person *p5 = &p1;
    
    {
        cout << "Test 1 - Show info: \n";
        show_info(&p1);
    }
    
    {
        cout << "Test 2 - Show info: \n";
        show_info(p2);
    }
    
    {
        cout << "Test 3 - check_duplicate: \n";
        cout << "\t3.1 " << (check_duplicate(&p1, p2) == 2 ? "Pass" : "Failed") << "\n";
        cout << "\t3.2 " << (check_duplicate(&p1, p4) == 1 ? "Pass" : "Failed") << "\n";
        cout << "\t3.3 " << (check_duplicate(&p1, p5) == 0 ? "Pass" : "Failed") << "\n";
    }
}


