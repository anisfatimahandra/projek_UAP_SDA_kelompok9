#include <iostream>
#include <string>
using namespace std;

struct Produk {
    string nama;
    float harga;
    int jumlah;
};

void updateHarga(Produk *p, float hargaBaru) {
    p->harga = hargaBaru;
}

void sortDescending(Produk arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j].harga < arr[j+1].harga) {
                Produk temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

float totalOmzet(Produk arr[], int n) {
    if (n == 0) return 0;
    return (arr[n-1].harga * arr[n-1].jumlah) + totalOmzet(arr, n-1);
}

void tampilProduk(Produk arr[], int n) {
    cout << "\n DASHBOARD SAUDAGAR DIGITAL \n";
    for (int i = 0; i < n; i++) {
        cout << i+1 << ". " << arr[i].nama
             << " | Harga: Rp " << fixed << arr[i].harga
             << " | Stok: " << arr[i].jumlah << endl;
    }
}

int main() {
    Produk toko[5];

    cout << "INPUT 5 PRODUK\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nProduk ke-" << i+1 << ":\n";
        cout << "Nama   : "; cin >> ws; getline(cin, toko[i].nama);
        cout << "Harga  : "; cin >> toko[i].harga;
        cout << "Stok   : "; cin >> toko[i].jumlah;
    }

    tampilProduk(toko, 5);

    int idx;
    float hargaBaru;
    cout << "\nMau update harga produk nomor berapa? (1-5): ";
    cin >> idx;
    cout << "Harga baru: ";
    cin >> hargaBaru;
    updateHarga(&toko[idx-1], hargaBaru);
    cout << "Harga berhasil diupdate!\n";

    sortDescending(toko, 5);
    cout << "\nSetelah diurutkan dari harga tertinggi:\n";
    tampilProduk(toko, 5);

    float total = totalOmzet(toko, 5);
    cout << "\nTotal Omzet: Rp " << fixed << total << endl;

    return 0;
}
