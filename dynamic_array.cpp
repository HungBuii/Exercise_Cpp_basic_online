#include <iostream>

using namespace std;

int main()
{
    int size = 3;
    int* array = new int[size] {1, 2, 3}; // dynamic array co the chinh sua duoc length cua mang
    
    int new_size = 6;
    int* resize = new int[new_size];
    
    for (int i = 0; i < size; i++) {
        resize[i] = array[i];
    }
    
    delete[] array;
    
    array = resize;
    size = new_size;
    
    // delete[] resize; gay ra loi doi voi 3 so dau boi vi array dang tro den dia chi cua resize
    
    for (int i = 3; i < size; i++) {
        array[i] = 5;
    }
    
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    
    
    // delete[] array;
    // delete[] resize; khong delete 2 mang tren thi se in ra dc mang 6 phan tu nhung nen delete de tra lai vung nho mang cho he dieu hanh
    return 0;
}
