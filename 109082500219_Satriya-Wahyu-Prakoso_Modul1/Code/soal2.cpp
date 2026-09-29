#include <iostream>
using namespace std;
int main() {
    int n;
    string s[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};
    cout << "Masukkan angka (0-100): ";
    cin >> n;
    cout << n << " : ";
    if (n == 0) cout << "Nol";
    else if (n <= 11) cout << s[n];
    else if (n < 20) cout << s[n % 10] << " Belas";
    else if (n < 100) cout << s[n / 10] << " Puluh " << s[n % 10];
    else if (n == 100)cout << "Seratus";
    cout << endl;
    return 0;
}
