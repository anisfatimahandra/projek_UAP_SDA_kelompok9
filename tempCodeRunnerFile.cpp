#include <iostream>
using namespace std;

class Buku {
protected:
    string kategori;
    string judul;
    string penulis;
    double harga;

public:
    Buku(string j, string p, double h) {
        judul    = j;
        penulis  = p;
        harga    = h;
        kategori = "Buku Fisik";
    }

    void tampilInfo() {
        cout << "[Kategori: " << kategori << "]" << endl;
        cout << "Judul   : " << judul << endl;
        cout << "Penulis : " << penulis << endl;
        cout << "Harga   : Rp" << harga << endl;
    }

    int hitungDiskon(int persen) {
        return harga - (harga * persen / 100);
    }

    double hitungDiskon(double persen) {
        return harga - (harga * persen / 100.0);
    }
};

class BukuDigital : public Buku {
private:
    double ukuranMB;

public:
    BukuDigital(string j, string p, double h, double mb)
        : Buku(j, p, h) {          
        ukuranMB = mb;
        kategori = "Buku Digital"; 
    }

    void tampilInfo() {
        Buku::tampilInfo();        
        cout << "Ukuran  : " << ukuranMB << " MB" << endl;
    }

    int hitungDiskon(int persen) {
        int hargaDiskon = harga - (harga * persen / 100);
        return hargaDiskon + 5000; 
    }

    int hitungFaktorial(int n) {
        if (n <= 0) return 1; 
        return n * hitungFaktorial(n - 1); 
    }

    void hitungKombinasi(int n, int r) {
        cout << "[Kategori: " << kategori << "]" << endl;
        int hasil = hitungFaktorial(n) / 
                   (hitungFaktorial(r) * hitungFaktorial(n - r));
        cout << "Kombinasi memilih " << r << " dari " << n 
             << " buku = " << hasil << " cara" << endl;
    }
};

int main() {
    Buku buk("Laskar Pelangi", "Andrea Hirata", 85000);
    buk.tampilInfo();
    cout << "Diskon 10% (int)   : Rp" << buk.hitungDiskon(10) << endl;
    cout << "Diskon 7.5% (double): Rp" << buk.hitungDiskon(7.5) << endl;

    cout << "\n BukuDigital \n";

    BukuDigital bd("Bumi", "Tere Liye", 75000, 2.4);
    bd.tampilInfo();
    cout << "Diskon 20% + biaya konversi: Rp" << bd.hitungDiskon(20) << endl;
    bd.hitungKombinasi(5, 2);

    return 0;
}