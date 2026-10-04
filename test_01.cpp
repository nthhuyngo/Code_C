#include <iostream>
using namespace std;

int main() {
    const double MUC_THUE = 0.1;
    const double NGUONG_MIEN_THUE = 5000000;

    double thuNhap = 8000000;
    double phanChiuThue = thuNhap - NGUONG_MIEN_THUE;
    double tienThue = phanChiuThue * MUC_THUE;

    cout << "Thu nhap: " << thuNhap << endl;
    cout << "Tien thue phai nop: " << tienThue << endl;

    MUC_THUE = 0.12;

    return 0;
}