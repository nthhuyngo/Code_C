#include <iostream>
#include <string>
using namespace std;

int main() {
    // Phan 2: So nguyen (Integer)
    int tuoi = 18;
    int namSinh = 2007;

    // Phan 3: So thuc (Decimal)
    float chieuCao = 1.65;
    double canNang = 52.5;
    double luongThang = 149000000;

    // Phan 4: Ky tu & Van ban
    char xepLoai = 'A';
    string ten = "Nguyen Van An";

    // Phan 5: Logic (Boolean)
    bool trangThaiQuaMon = true;

    // Phan 6: In ra man hinh
    cout << "Ten: " << ten << endl;
    cout << "Tuoi: " << tuoi << endl;
    cout << "Nam sinh: " << namSinh << endl;
    cout << "Chieu cao: " << chieuCao << " m" << endl;
    cout << "Can nang: " << canNang << " kg" << endl;
    cout << "Xep loai: " << xepLoai << endl;
    cout << "Trang thai qua mon: " << trangThaiQuaMon << endl;
    cout << "Luong thang: " << luongThang << endl;

    return 0;
}