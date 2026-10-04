#include <iostream>
using namespace std;

int main() {
    // Phan 1: Nhap du lieu dau vao
    int num1, num2;
    cout << "Nhap so thu nhat: ";
    cin >> num1;
    cout << "Nhap so thu hai: ";
    cin >> num2;

    // Phan 2: Toan tu So sanh (Comparison)
    bool bangNhau = (num1 == num2);
    bool khacNhau = (num1 != num2);
    bool lonHon = (num1 > num2);
    bool nhoHon = (num1 < num2);

    cout << "\n----- KET QUA SO SANH -----" << endl;
    cout << num1 << " == " << num2 << " la: " << bangNhau << endl;
    cout << num1 << " != " << num2 << " la: " << khacNhau << endl;
    cout << num1 << " > " << num2 << " la: " << lonHon << endl;
    cout << num1 << " < " << num2 << " la: " << nhoHon << endl;

    // Phan 3: Toan tu Logic (Logical)
    bool caHaiDuong = (num1 > 0) && (num2 > 0);
    bool coSoAm = (num1 < 0) || (num2 < 0);
    bool khongBangNhau = !(bangNhau);

    cout << "\n----- KET QUA LOGIC -----" << endl;
    cout << "Ca hai deu duong (AND): " << caHaiDuong << endl;
    cout << "Co it nhat 1 so am (OR): " << coSoAm << endl;
    cout << "Khong bang nhau (NOT): " << khongBangNhau << endl;

    // Phan 4: Quyet dinh dua tren ket qua (If - Else)
    cout << "\n----- KET LUAN -----" << endl;
    if (num1 > num2) {
        cout << "So thu nhat LON HON so thu hai." << endl;
    } else if (num1 < num2) {
        cout << "So thu nhat NHO HON so thu hai." << endl;
    } else {
        cout << "Hai so BANG NHAU." << endl;
    }

    return 0;
}