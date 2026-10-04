#include <iostream>
using namespace std;

int main() {
    // Phan 1: Khai bao 2 bien de chua 2 so nguoi dung se nhap
    int num1, num2;

    // Phan 2: Nhap du lieu tu ban phim
    cout << "Nhap so thu nhat: ";
    cin >> num1;

    cout << "Nhap so thu hai: ";
    cin >> num2;

    // Phan 3: Thuc hien tinh toan
    int tongCong = num1 + num2;
    int hieuTru = num1 - num2;
    int tichNhan = num1 * num2;
    int thuongChia = num1 / num2;
    int soDu = num1 % num2;

    // Phan 4: Xuat ket qua
    cout << "----- KET QUA -----" << endl;
    cout << num1 << " + " << num2 << " = " << tongCong << endl;
    cout << num1 << " - " << num2 << " = " << hieuTru << endl;
    cout << num1 << " * " << num2 << " = " << tichNhan << endl;
    cout << num1 << " / " << num2 << " = " << thuongChia << endl;
    cout << num1 << " % " << num2 << " = " << soDu << endl;

    return 0;
}