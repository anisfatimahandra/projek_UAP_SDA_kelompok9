#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        long long nim;      
        string nama;        
        string jurusan;     

    public:
        void setNim(long long n) {
            nim = n;
        }
        void setNama(string nm) {
            nama = nm;
        }
        void setJurusan(string j) {
            jurusan = j;
        }

        long long getNim() {
            return nim;
        }
        string getNama() {
            return nama;
        }
        string getJurusan() {
            return jurusan;
        }

        void tampilkan() {
            cout << "\n DATA MAHASISWA " << endl;
            cout << "NIM     : " << nim     << endl;
            cout << "Nama    : " << nama    << endl;
            cout << "Jurusan : " << jurusan << endl;
            cout << "" << endl;
        }
};

int main() {
    Mahasiswa mhs;

    long long nim;
    string nama, jurusan;

    cout << " INPUT DATA MAHASISWA " << endl;

    cout << "Masukkan NIM (12 digit) : ";
    cin >> nim;
    cin.ignore();

    cout << "Masukkan Nama           : ";
    getline(cin, nama);

    cout << "Masukkan Jurusan        : ";
    getline(cin, jurusan);

    mhs.setNim(nim);
    mhs.setNama(nama);
    mhs.setJurusan(jurusan);

    mhs.tampilkan();

    return 0;
}