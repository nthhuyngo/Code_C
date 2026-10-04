#include <iostream>

using namespace std;

int main() {
    cout << "Nhap so nam: ";
    int nam;
    cin >> nam;
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) {
        cout << "Nam " << nam << " la nam nhuan duong lich" << endl;
    } else {
        cout << "Nam " << nam << " khong phai la nam nhuan duong lich" << endl;
    }
    return 0;
}