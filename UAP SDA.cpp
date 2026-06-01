#include <iostream>
using namespace std;

struct DataBuku {
    string judul;
    string penulis;
};

class Buku {
private:
    DataBuku data;
    bool dipinjam;

public:
    Buku(string j, string p) {
        data.judul = j;
        data.penulis = p;
        dipinjam = false;
    }

    void tampil() {
        cout << "Judul   : " << data.judul << endl;
        cout << "Penulis : " << data.penulis << endl;
        cout << "Status  : " << (dipinjam ? "Dipinjam" : "Tersedia") << endl;
        cout << endl;
    }

    void pinjam() {
        dipinjam = true;
    }

    void kembali() {
        dipinjam = false;
    }
};

int main() {
    Buku b1("Laskar Pelangi", "Andrea Hirata");
    Buku b2("Bumi", "Tere Liye");

    cout << " DATA BUKU \n\n";

    b1.tampil();
    b2.tampil();

    b1.pinjam();

    cout << "\nSetelah dipinjam:\n\n";
    b1.tampil();

    return 0;
}
