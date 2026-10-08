#include <iostream>
using namespace std;

void tukarPointer(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

void tukarReference(int &x, int &y, int &z) {
    int temp = x;
    x = y;
    y = z;
    z = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Nilai awal:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << "\n\n";

    tukarPointer(&a, &b, &c);
    cout << "Setelah tukar dengan Pointer:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << "\n\n";

    tukarReference(a, b, c);
    cout << "Setelah tukar dengan Reference:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
    return 0;
}