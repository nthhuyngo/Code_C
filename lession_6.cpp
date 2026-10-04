#include <iostream>
#include <cmath>

using namespace std;

int main() {
    bool isPrime = true;
    int n;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong phai la so nguyen to" << endl;
    }
    return 0;
}