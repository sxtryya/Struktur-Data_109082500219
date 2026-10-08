#include <iostream>
using namespace std;

void inputMatriks(int matriks[3][3], char nama) {
    cout << "Masukkan elemen Matriks " << nama << " (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << nama << "[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;
}

void tampilkanMatriks(int matriks[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << matriks[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}

void tambahMatriks(int A[3][3], int B[3][3], int hasil[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) hasil[i][j] = A[i][j] + B[i][j];
}

void kurangMatriks(int A[3][3], int B[3][3], int hasil[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) hasil[i][j] = A[i][j] - B[i][j];
}

void kaliMatriks(int A[3][3], int B[3][3], int hasil[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < 3; k++) hasil[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main() {
    int matriksA[3][3], matriksB[3][3], hasilTambah[3][3], hasilKurang[3][3], hasilKali[3][3];

    inputMatriks(matriksA, 'A');
    inputMatriks(matriksB, 'B');

    tambahMatriks(matriksA, matriksB, hasilTambah);
    kurangMatriks(matriksA, matriksB, hasilKurang);
    kaliMatriks(matriksA, matriksB, hasilKali);

    cout << "1. Hasil Penjumlahan (A + B):\n"; tampilkanMatriks(hasilTambah);
    cout << "2. Hasil Pengurangan (A - B):\n"; tampilkanMatriks(hasilKurang);
    cout << "3. Hasil Perkalian (A x B):\n";   tampilkanMatriks(hasilKali);
    return 0;
}