#include <iostream>
using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarIsiArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int matriksA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int matriksB[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int var1 = 100;
    int var2 = 200;
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    cout << "=== KONDISI AWAL ===" << endl;
    cout << "Matriks A:" << endl;
    tampilkanArray(matriksA);
    cout << "\nMatriks B:" << endl;
    tampilkanArray(matriksB);
    cout << "\nNilai yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk ptr2: " << *ptr2 << endl;

    tukarIsiArray(matriksA, matriksB, 1, 1);
    tukarPointer(ptr1, ptr2);

    cout << "\n=== SETELAH PENUKARAN ===" << endl;
    cout << "Matriks A (posisi [1][1] ditukar):" << endl;
    tampilkanArray(matriksA);
    cout << "\nMatriks B (posisi [1][1] ditukar):" << endl;
    tampilkanArray(matriksB);
    cout << "\nNilai baru yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai baru yang ditunjuk ptr2: " << *ptr2 << endl;

    return 0;
}