#include <iostream>
using namespace std;

void tampilkanArray(int arr[], int ukuran) {
    cout << "Isi array: ";
    for (int i = 0; i < ukuran; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int cariMaksimum(int arr[], int ukuran) {
    int maks = arr[0];
    for (int i = 1; i < ukuran; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

int cariMinimum(int arr[], int ukuran) {
    int min = arr[0];
    for (int i = 1; i < ukuran; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void hitungRataRata(int arr[], int ukuran, float &refRataRata) {
    float total = 0;
    for (int i = 0; i < ukuran; i++) {
        total += arr[i];
    }
    refRataRata = total / ukuran;
}

int main() {
    int arrA[] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int ukuran = sizeof(arrA) / sizeof(arrA[0]);
    int pilihan;
    float hasilRataRata = 0;

    do {
        cout << "\n--- Menu Program Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. Cari nilai maksimum\n";
        cout << "3. Cari nilai minimum\n";
        cout << "4. Hitung nilai rata - rata\n";
        cout << "0. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
                tampilkanArray(arrA, ukuran);
                break;
            case 2:
                cout << "Nilai maksimum: " << cariMaksimum(arrA, ukuran) << endl;
                break;
            case 3:
                cout << "Nilai minimum: " << cariMinimum(arrA, ukuran) << endl;
                break;
            case 4:
                hitungRataRata(arrA, ukuran, hasilRataRata);
                cout << "Nilai rata - rata: " << hasilRataRata << endl;
                break;
            case 0:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}
