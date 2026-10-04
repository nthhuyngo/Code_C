#include <iostream>

using namespace std;

int main() {
    int canh_thu_nhat;
    int canh_thu_hai;
    int canh_thu_ba;
    cout << "Nhap vao canh thu nhat: ";
    cin >> canh_thu_nhat;
    cout << "Nhap vao canh thu hai: ";
    cin >> canh_thu_hai;
    cout << "Nhap vao canh thu ba: ";
    cin >> canh_thu_ba;
    if (canh_thu_nhat + canh_thu_hai > canh_thu_ba && canh_thu_nhat + canh_thu_ba > canh_thu_hai && canh_thu_hai + canh_thu_ba > canh_thu_nhat) {
        cout << "Day la 3 canh cua 1 tam giac" << endl;
    } else {
        cout << "Day khong phai la 3 canh cua 1 tam giac" << endl;
    }
    return 0;
}