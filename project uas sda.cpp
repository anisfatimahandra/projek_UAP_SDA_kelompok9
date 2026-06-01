#include <iostream>
using namespace std;

class Buku {
    string judul;
    string penulis;
    bool dipinjam;

    public:
    Buku(string j, string p){
        judul = j;
        penulis = p;
        dipinjam = false;

    }
    void tampil() {
        cout<<"judul : "<< judul <<endl;
        cout<<"penulis : "<< penulis <<endl;
        
        if (dipinjam) {
            cout<<"status : Dipinjam "<<endl;
        }else{
            cout<<"status : tersedia"<<endl;
        }

        cout<< endl;
    }

        void pinjamBuku(){
            if (!dipinjam){
                dipinjam = true;
                cout<<judul<<"berhasil dipinjam\n"; 
            }else{
                cout<<judul<<"sedang dipinjam"<<endl;
            }
        }
       void kembaliBuku(){
        dipinjam = false ;
        cout<<judul<<" berhasil dikembalikan\n";
       
    }
};

int main() {
Buku buku [3]={
            Buku("laskar pelangi","Andrea Hirata"),
            Buku("Bumi","tere liye"),
            Buku("sang pemimpi","Adrea Hirata")
        };
        cout<<"DATA BUKU\n";
        for(int i=0; i<3; i++){
             buku[i].tampil();

        }
        buku[0].pinjamBuku();

        cout<<"setelah dipinjam\n"<<endl;
        buku[0].tampil();

        buku[0].kembaliBuku();

        cout<<"setelah dikembalikan \n";
        buku[0].tampil();
   

    return 0;
}