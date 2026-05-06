#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float nilaiTugas;
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float tugas, float uts, float uas) {
    return (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);
}

int main() {
    const int JUMLAH_MHS = 5;
    Mahasiswa daftarMhs[JUMLAH_MHS];

    for (int i = 0; i < JUMLAH_MHS; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM         : "; cin >> daftarMhs[i].nim;
        cin.ignore();
        cout << "Nama        : "; getline(cin, daftarMhs[i].nama);
        cout << "Nilai Tugas : "; cin >> daftarMhs[i].nilaiTugas;
        cout << "Nilai UTS   : "; cin >> daftarMhs[i].nilaiUTS;
        cout << "Nilai UAS   : "; cin >> daftarMhs[i].nilaiUAS;

        daftarMhs[i].nilaiAkhir = hitungNilaiAkhir(daftarMhs[i].nilaiTugas, 
                                                   daftarMhs[i].nilaiUTS, 
                                                   daftarMhs[i].nilaiUAS);
        cout << endl;
    }

    cout << left << setw(15) << "NIM" 
         << setw(20) << "Nama" 
         << setw(10) << "Tugas" 
         << setw(10) << "UTS" 
         << setw(10) << "UAS" 
         << "Akhir" << endl;
    cout << string(70, '-') << endl;

    int idxMax = 0;
    for (int i = 0; i < JUMLAH_MHS; i++) {
        cout << left << setw(15) << daftarMhs[i].nim 
             << setw(20) << daftarMhs[i].nama 
             << setw(10) << daftarMhs[i].nilaiTugas 
             << setw(10) << daftarMhs[i].nilaiUTS 
             << setw(10) << daftarMhs[i].nilaiUAS 
             << fixed << setprecision(2) << daftarMhs[i].nilaiAkhir << endl;

        if (daftarMhs[i].nilaiAkhir > daftarMhs[idxMax].nilaiAkhir) {
            idxMax = i;
        }
    }

    cout << "\nMahasiswa dengan Nilai Tertinggi:" << endl;
    cout << "Nama : " << daftarMhs[idxMax].nama << endl;
    cout << "NIM  : " << daftarMhs[idxMax].nim << endl;
    cout << "Skor : " << daftarMhs[idxMax].nilaiAkhir << endl;

    return 0;
}