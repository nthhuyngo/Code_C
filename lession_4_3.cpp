#include <iostream>

using namespace std;

int main() {
    int number_1 = 9;
    int number_2 = 10;
    int number_3 = (number_2 - number_1 > number_1 - number_2) ?  number_1 :  number_2;

    return 0;
}