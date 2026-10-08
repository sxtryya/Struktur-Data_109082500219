#include <iostream>
using namespace std;

void tulis(int jumlah);

int main() {
	int jumlah;
	cout << "jumlah baris kata = ";
	cin >> jumlah;
	tulis(jumlah);
	return 0;
}

void tulis(int jumlah) {
	for (int i = 0; i < jumlah; i++) {
		cout << "baris ke-" << i + 1 << endl;
	}
}