// Cach 1

//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//
//struct Person
//{
//	std::string name;
//	int age;
//	float height;
//	float weight;
//	std::string nationality;
//};
//
//int load_person(string filename, Person *person_list)
//{
//	std::ifstream input_file(filename);
//	std::string line;
//	int count = 0;
//	while (std::getline(input_file, line)) { // getline se doc 1 chuoi ky tu cho den khi het ky tu tren dong do thi se chuyen xuong dong tiep theo
//		int i = line.find('|');
//		while (i != std::string::npos) {
//			person_list[count].name = line.substr(0, i);
//			line = line.substr(i + 1);
//			
//			i = line.find('|');
//			
//			person_list[count].age = stoi(line.substr(0, i));
//			line = line.substr(i + 1);
//			
//			i = line.find('|');
//			
//			person_list[count].height = stoi(line.substr(0, i));
//			line = line.substr(i + 1);
//			
//			i = line.find('|');
//			
//			person_list[count].weight = stoi(line.substr(0, i));
//			line = line.substr(i + 1);
//			
//			i = line.find('|');
//			
//			person_list[count].nationality = line.substr(0, i);
//			line = line.substr(i + 1);
//			
//			i = line.find('|');
//		}
//		count++;
//		// line se luu du lieu cua tung dong trong file
//	}
//	return count;
//}
//
//void add_person(string filename)
//{
//	std::ofstream output_file(filename, ios::app);
//	Person p;
//	
//	std::cin.ignore();
//	std::cout << "Nhap ten: ";
////	std::cin >> p.name; // khong nen dung
//	std::getline(std::cin, p.name); // https://en.cppreference.com/w/cpp/string/basic_string/getline (parameters with note delim)
//	output_file << p.name << "|";
//
//	std::cout << "Nhap tuoi: ";
//	std::cin >> p.age;
//	output_file << p.age << "|"; 
//	 
//	std::cout << "Nhap chieu cao: ";
//	std::cin >> p.height;
//	output_file << p.height << "|";
//	
//	std::cout << "Nhap can nang: ";
//	std::cin >> p.weight;
//	output_file << p.weight << "|";
//	
//	std::cin.ignore();
//	std::cout << "Nhap quoc tich: ";
////	std::cin >> p.nationality;
//	std::getline(std::cin, p.nationality);
//	output_file << p.nationality << "\n";
//	
//	output_file.close();
//}
//
//void print_persons(Person *person_list, int count)
//{
//    for (int i = 0; i < count; i++) {
//    	std::cout << "Ten: " << person_list[i].name << "\n";
//    	std::cout << "Tuoi: " << person_list[i].age << "\n";
//    	std::cout << "Chieu cao: " << person_list[i].height << "\n";
//    	std::cout << "Can nang: " << person_list[i].weight << "\n";
//    	std::cout << "Quoc tich: " << person_list[i].nationality << "\n";
//    	std::cout << "============================" << "\n";
//    	std::cout << "\n";
//	}
//}
//
//int main()
//{
//	const string filename = "Data.txt";
//	const int MAX = 100;
//	Person person_list[MAX];
//
//	int count = load_person(filename, person_list);
//	
//	int command;
//	cout << "Nhap lua chon (1 - Print / 2 - Add): ";
//	cin >> command;
//	if(command == 1)
//	{
//		print_persons(person_list, count);
//	}
//	else if(command == 2)
//	{
//		add_person(filename);
//	}
//}


// Cach 2

#include <iostream>
#include <fstream>

using namespace std;


struct Person
{
	std::string name;
	int age;
	float height;
	float weight;
	std::string nationality;
	
	void load(string line) {
		string delim = "|";
		int pos_of_delim = 0;
		int i = 0;
		do 
		{
			// Cat chuoi, loc ra tung truong 
			pos_of_delim = line.find(delim);
			string info = line.substr(0, pos_of_delim);

			// dien tung truong vao theo thu tu
			switch (i)
			{
				case 0: name = info;break;
				case 1: age = std::stoi(info);break;
				case 2: height = stof(info); break;
				case 3: weight = stof(info);break;
				case 4: nationality = info; break;
			}
			
			// Update line and index 
			line = line.substr(pos_of_delim+1, line.length()-1);
			i++;
		} while(pos_of_delim != std::string::npos);
	}
	
	void print()
	{
		cout << "Ten: " << name << "\n";
		cout << "Tuoi: " << age << "\n";
		cout << "Chieu cao: " << height << "\n";
		cout << "Can nang: " << weight << "\n";
		cout << "Quoc tich " << nationality << "\n";
		cout << "============================\n";
	}
};

int load_person(string filename, Person *person_list)
{
	ifstream data(filename);
	string line;
	int i = 0;
	while(getline(data, line))
		person_list[i++].load(line);
	data.close();
	return i;
}

void add_person(string filename)
{
	string content = "";
	
	cin.ignore();
	string info;
	cout << "Nhap ten: ";
	getline(cin, info);content += info + "|";
	cout << "Nhap tuoi: ";
	getline(cin, info);content += info + "|";
	cout << "Nhap chieu cao: ";
	getline(cin, info);content += info + "|";
	cout << "Nhap can nang: ";
	getline(cin, info);content += info + "|";
	cout << "Nhap quoc tich: ";
	getline(cin, info);content += info;

	std::ofstream writer(filename, ios::app);
	writer << "\n" << content;
}

void print_persons(Person *person_list, int count)
{
    for(int i = 0; i < count; i++)
    {
		person_list[i].print();	
    }
}

int main()
{
	const string filename = "Data.txt";
	const int MAX = 100;
	
	int command;
	
	do 
	{
		cout << "Nhap lua chon (1 - Print / 2 - Add): ";
		cin >> command;
		if (command == 0) return 0;
		
		else if(command == 1)
		{
			Person person_list[MAX];
			int count = load_person(filename, person_list);
			print_persons(person_list, count);
		}
		
		else if(command == 2)
		{
			add_person(filename);
		}
	} while(command > 0);
	
	return 0;
}
