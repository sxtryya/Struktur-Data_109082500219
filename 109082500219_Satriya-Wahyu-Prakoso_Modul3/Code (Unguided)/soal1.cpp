#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama, nim;
    float uts, uas, tugas, nilaiAkhir;
};

float hitungNilai(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    Mahasiswa daftarMhs[10];
    int n;
    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> n;
    if (n > 10) n = 10;
    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << (i + 1) << endl;
        cin.ignore();
        cout << "Nama : "; getline(cin, daftarMhs[i].nama);
        cout << "NIM : "; cin >> daftarMhs[i].nim;
        cout << "Nilai UTS : "; cin >> daftarMhs[i].uts;
        cout << "Nilai UAS : "; cin >> daftarMhs[i].uas;
        cout << "Nilai Tugas : "; cin >> daftarMhs[i].tugas;
        daftarMhs[i].nilaiAkhir = hitungNilai(daftarMhs[i].uts, daftarMhs[i].uas, daftarMhs[i].tugas);
    }

    cout << "\n\nDAFTAR NILAI MAHASISWA\n" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << endl;
        cout << "Nama : " << daftarMhs[i].nama << endl;
        cout << "NIM : " << daftarMhs[i].nim << endl;
        cout << "Nilai UTS : " << daftarMhs[i].uts << endl;
        cout << "Nilai UAS : " << daftarMhs[i].uas << endl;
        cout << "Nilai Tugas : " << daftarMhs[i].tugas << endl;
        cout << "Nilai Akhir : " << daftarMhs[i].nilaiAkhir << endl;
        cout << endl; 
    }
    return 0;
}
