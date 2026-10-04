#include <iostream>

using namespace std;

int main() {
    cout << "Nhap so can kiem tra: ";
    int so_can_kiem_tra;
    cin >> so_can_kiem_tra;
    if (so_can_kiem_tra % 2 == 0) {
        cout << "So " << so_can_kiem_tra << " la so chan" << endl;
    } else {
        cout << "So " << so_can_kiem_tra << " la so le" << endl;
    }
}