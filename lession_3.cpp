#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int he_so_a;
    int he_so_b;
    int he_so_c;
    cout << "Nhap he so a: ";
    cin >> he_so_a;
    cout << "Nhap he so b: ";
    cin >> he_so_b;
    cout << "Nhap he so c: ";
    cin >> he_so_c;
    if (he_so_a == 0) {
        cout << "Phuong trinh khong phai la bac 2" << endl;
    } else {
        int delta = he_so_b * he_so_b - 4 * he_so_a * he_so_c;
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem" << endl;
        } else if (delta == 0) {
            double nghiem_kep = -he_so_b / (2.0 * he_so_a);
            cout << "Phuong trinh co nghiem kep: " << nghiem_kep << endl;
        } else {
            double nghiem_1 = (-he_so_b + sqrt(delta)) / (2.0 * he_so_a);
            double nghiem_2 = (-he_so_b - sqrt(delta)) / (2.0 * he_so_a);
            cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
            cout << "Nghiem 1: " << nghiem_1 << endl;
            cout << "Nghiem 2: " << nghiem_2 << endl;
        }
    }
    return 0;
}