#include <iostream>
using namespace std;


struct Node {
    string judul;
    Node* next; 
};


class Perpustakaan {
private:
    Node* head;

public:
    Perpustakaan() {
        head = NULL;
    }

    
    void tambahBuku(string judul) {
        Node* baru = new Node;
        baru->judul = judul;
        baru->next = head;
        head = baru;
    }

    
    void tampilBuku() {
        Node* temp = head;
        cout << "\nDaftar Buku:\n";
        while (temp != NULL) {
            cout << "- " << temp->judul << endl;
            temp = temp->next;
        }
    }

    
    int hitungBuku(Node* node) {
        if (node == NULL)
            return 0;
        return 1 + hitungBuku(node->next);
    }

    void jumlahBuku() {
        cout << "\nJumlah Buku: "
             << hitungBuku(head) << endl;
    }
};

int main() {
    Perpustakaan p;

    p.tambahBuku("Laskar Pelangi");
    p.tambahBuku("Bumi");
    p.tambahBuku("Sang Pemimpi");

    p.tampilBuku();
    p.jumlahBuku();

    return 0;
}