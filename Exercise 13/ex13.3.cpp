#include <iostream>
#include <string>

using namespace std;

struct Person
{
    Person(string ht, int gt)
    {
        ho_ten = ht;
        gioi_tinh = gt;
        crush = NULL;
    }

    string ho_ten;
    int gioi_tinh; // 1: Nam / -1: Nu
    Person* crush;
};

int main()
{
    const int MAX = 9;

    // Tao mang thông tin 
    Person *list[MAX];
    list[0] = new Person("Nguyen Anh Vu", 1);
    list[1] = new Person("Truong Anh Tuan", 1);
    list[2] = new Person("Pham Dinh Hung", 1);
    list[3] = new Person("Bach Van Thang", -1);
    list[4] = new Person("Tran Mai Anh", -1);
    list[5] = new Person("Eimi Fukada", -1);
    list[6] = new Person("Khac Tiep", 1);
    list[7] = new Person("Ngoc Trinh", -1);
    list[8] = new Person("Midu", -1);

    // Tao moi quan he tình cam 
    list[0]->crush = list[5];
    list[1]->crush = list[5];
    list[2]->crush = list[4];
    list[3]->crush = list[7];
    list[4]->crush = list[2];
    list[5]->crush = NULL;
    list[6]->crush = list[7];
    list[7]->crush = NULL;
    list[8]->crush = NULL;

    {
        cout << "Ket qua 1:";
        // cach 1
//        for (int i = 0; i < MAX; i++) {
//        	if (list[i]->crush != NULL) {
//        		continue; // nhay den i tiep theo va khong chay lenh ben duoi
//			}
//			std::cout << list[i]->ho_ten << "; ";
//		}
//		std::cout << std::endl;
		for (int i = 0; i < MAX; i++)
        {
            if (list[i]->crush == NULL)
            {
                cout << list[i]->ho_ten << "; ";
            }
        }
        std::cout << std::endl;
    }
    
    {
        cout << "Ket qua 2:\n";
        for (int i = 0; i < MAX; i++) {
        	for (int j = i + 1; j < MAX; j++) {
        		if (list[i]->crush == list[j] && list[j]->crush != list[i]) {
        			std::cout << "\t" << "(" << list[i]->ho_ten << " --> " << list[j]->ho_ten << ")";
        			std::cout << std::endl;
				} 
			}
		}
		std::cout << std::endl;
    }

    {
        cout << "Ket qua 3:\n";
        for (int i = 0; i < MAX; i++) {
        	for (int j = i + 1; j < MAX; j++) {
        		if (list[i]->crush == list[j] && list[j]->crush == list[i]) {
        			std::cout << "\t" << "(" << list[i]->ho_ten << " <--> " << list[j]->ho_ten << ")";
				} 
			}
		}
		std::cout << std::endl;
    }
    
    {
        cout << "Ket qua 4: ";
        for (int i = 0; i < MAX; i++) {
        	int temp = 0;
        	for (int j = 0; j < MAX; j++) {
        		if (i != j && list[i] == list[j]->crush) {
        			temp++;
				}	
				if (temp > 1) {
					std::cout << list[i]->ho_ten << "; ";
					break;
				}
			}
		}
    }
}

