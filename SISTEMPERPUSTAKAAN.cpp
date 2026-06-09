#include <iostream>
#include <string>
using namespace std;

struct Buku {
    int id;
    string judul;
    string pengarang;
};

struct Node {
    Buku data;
    Node* next;
};

Node* head = NULL;
int idCounter = 1;

void tambahBuku(string judul, string pengarang) {
    Node* baru = new Node();
    baru->data = {idCounter++, judul, pengarang};
    baru->next = NULL;
    if (head == NULL) {
        head = baru;
    } else {
        Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = baru;
    }
}

void tampilBuku() {
    Node* temp = head;
    if (temp == NULL) { cout << "Tidak ada buku.\n"; return; }
    cout << "ID\tJudul\t\tPengarang\n";
    while (temp != NULL) {
        cout << temp->data.id << "\t" << temp->data.judul << "\t\t" << temp->data.pengarang << "\n";
        temp = temp->next;
    }
}

string stackData[100];
int top = -1;

void push(string s) { stackData[++top] = s; }
string pop() { if (top == -1) return ""; return stackData[top--]; }

void tampilStack() {
    if (top == -1) { cout << "Riwayat kosong.\n"; return; }
    for (int i = top; i >= 0; i--)
        cout << "- " << stackData[i] << "\n";
}

string queueData[100];
int qFront = 0, qBack = 0;

void enqueue(string nama) { queueData[qBack++] = nama; cout << nama << " masuk antrian.\n"; }
string dequeue() { if (qFront == qBack) return ""; return queueData[qFront++]; }

void tampilQueue() {
    if (qFront == qBack) { cout << "Antrian kosong.\n"; return; }
    for (int i = qFront; i < qBack; i++)
        cout << i - qFront + 1 << ". " << queueData[i] << "\n";
}

void sortBuku() {
    Buku arr[100]; int n = 0;
    Node* temp = head;
    while (temp != NULL) { arr[n++] = temp->data; temp = temp->next; }

    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j].judul > arr[j+1].judul)
                swap(arr[j], arr[j+1]);

    cout << "Buku setelah diurutkan:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i].id << ". " << arr[i].judul << " - " << arr[i].pengarang << "\n";
    
    push("Sort buku berdasarkan judul");
}

class Perpustakaan {
public:
    void menu() {
        int pilihan;
        do {
            cout << "\n PERPUSTAKAAN \n";
            cout << "1. Tambah Buku\n";
            cout << "2. Tampil Buku\n";
            cout << "3. Tambah Antrian\n";
            cout << "4. Proses Antrian\n";
            cout << "5. Tampil Antrian\n";
            cout << "6. Urutan Buku\n";
            cout << "7. Riwayat\n";
            cout << "0. Keluar\n";
            cout << "Pilihan: "; cin >> pilihan; cin.ignore();

            if (pilihan == 1) {
                string j, p;
                cout << "Judul: "; getline(cin, j);
                cout << "Pengarang: "; getline(cin, p);
                tambahBuku(j, p);
                push("Tambah buku: " + j);
            } else if (pilihan == 2) {
                tampilBuku();
            } else if (pilihan == 3) {
                string nama;
                cout << "Nama peminjam: "; getline(cin, nama);
                enqueue(nama);
                push("Antrian: " + nama);
            } else if (pilihan == 4) {
                string nama = dequeue();
                if (nama == "") cout << "Antrian kosong.\n";
                else cout << nama << " sedang meminjam buku.\n";
            } else if (pilihan == 5) {
                tampilQueue();
            } else if (pilihan == 6) {
                sortBuku();
            } else if (pilihan == 7) {
                tampilStack();
            }
        } while (pilihan != 0);
    }
};

int main() {
    tambahBuku("Bumi", "Tereliye");
    tambahBuku("Matahari", "Tereliye");
    tambahBuku("Bintang", "Tereliye");

    Perpustakaan p;
    p.menu();
    return 0;
}