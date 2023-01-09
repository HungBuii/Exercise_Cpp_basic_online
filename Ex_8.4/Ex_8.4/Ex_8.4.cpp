#include <iostream>
using namespace std;

double program_1(int a[], int length) {
    double average = 0;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            sum += a[i];
            count++;
        }
    }
    average = (double)sum / count;
    return average;
}

double program_2(int a[], int length) {
    double average_odd = 0;
    int sum_odd = 0;
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (i % 2 != 0 && a[i] % 2 != 0) {
            sum_odd += a[i];
            count++;
        }
    }
    average_odd = (double)sum_odd / count;
    return average_odd;
}

double program_3(int a[], int length) {
    int max = a[0];
    for (int i = 0; i < length; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

double program_4(int a[], int length) {

}

int main()
{
    const int MAX = 1000;
    int a[MAX];

    cout << "Nhap so luong phan tu: ";
    int n; cin >> n;

    cout << "Nhap lien tiep " << n << " gia tri: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Ket qua 1: " << program_1(a, n) << "\n";
    cout << "Ket qua 2: " << program_2(a, n) << "\n";
    cout << "Ket qua 3: " << program_3(a, n) << "\n";
    cout << "Ket qua 4: " << program_4(a, n) << "\n";
    //cout << "Ket qua 5: " << program_5(a, n) << "\n";
    //cout << "Ket qua 6: " << program_6(a, n) << "\n";

    //cout << "Ket qua 7: "; program_7(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
