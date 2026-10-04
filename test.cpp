#include <iostream>
using namespace std;

#define MUC_THUE 0.1
#define NGUONG_MIEN_THUE 5000000

int main() {
    double thuNhap = 8000000;
    double phanChiuThue = thuNhap - NGUONG_MIEN_THUE;
    double tienThue = phanChiuThue * MUC_THUE;

    cout << "Thu nhap: " << thuNhap << endl;
    cout << "Tien thue phai nop: " << tienThue << endl;

    MUC_THUE = 0.12;

    return 0;
}