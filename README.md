# 📚 Sistem Manajemen Perpustakaan

Program ini merupakan aplikasi berbasis C++ yang digunakan untuk mengelola data buku pada sebuah perpustakaan sederhana melalui terminal (konsol). Pengguna dapat menambahkan buku, melihat daftar buku, mengelola antrian peminjam, melihat riwayat aktivitas, serta mengurutkan data buku berdasarkan judul.

Proyek ini dibuat untuk menerapkan konsep:

* Struktur Data
* Algoritma
* Object Oriented Programming (OOP)
* Linked List
* Queue
* Stack

---

# 📖 Latar Belakang

Dalam sebuah perpustakaan, pengelolaan data buku dan proses peminjaman harus dilakukan secara teratur agar memudahkan petugas maupun pengguna.

Oleh karena itu dibuatlah program perpustakaan sederhana berbasis C++ yang mampu mengelola data buku, antrian peminjam, dan riwayat aktivitas menggunakan beberapa struktur data yang telah dipelajari pada mata kuliah Struktur Data dan Algoritma.

Melalui proyek ini mahasiswa dapat memahami implementasi Linked List, Queue, dan Stack dalam studi kasus nyata.

---

# 🎯 Tujuan Proyek

Tujuan dibuatnya program ini adalah:

* Membuat sistem manajemen perpustakaan sederhana berbasis C++.
* Mengimplementasikan konsep struktur data dalam kasus nyata.
* Melatih penggunaan Object Oriented Programming (OOP).
* Memahami implementasi Linked List, Queue, dan Stack.
* Mengembangkan kemampuan pemrograman modular dan logika algoritma.

---

# 🧠 Konsep Program

| Konsep      | Fungsi                                  |
| ----------- | --------------------------------------- |
| Struct      | Menyimpan data buku                     |
| Class       | Mengelola menu perpustakaan             |
| Linked List | Menyimpan daftar buku                   |
| Queue       | Mengelola antrian peminjam              |
| Stack       | Menyimpan riwayat aktivitas             |
| Sorting     | Mengurutkan data buku berdasarkan judul |

---

# ⚙️ Fitur Program

## ✅ Tambah Buku

Pengguna dapat menambahkan buku baru dengan mengisi:

* Judul buku
* Nama pengarang

Setiap buku akan memperoleh ID secara otomatis.

---

## ✅ Tampilkan Buku

Menampilkan seluruh data buku yang tersimpan dalam Linked List.

Informasi yang ditampilkan:

* ID Buku
* Judul Buku
* Pengarang

---

## ✅ Antrian Peminjam

Pengguna dapat menambahkan nama peminjam ke dalam antrian.

Konsep yang digunakan:

FIFO (First In First Out)

Peminjam yang masuk lebih dahulu akan diproses lebih dahulu.

---

## ✅ Proses Peminjaman

Program akan mengambil peminjam yang berada pada posisi paling depan dalam antrian.

---

## ✅ Riwayat Aktivitas

Setiap aktivitas yang dilakukan pengguna akan disimpan ke dalam Stack.

Contoh aktivitas:

* Menambah buku
* Menambah antrian
* Mengurutkan buku

Konsep yang digunakan:

LIFO (Last In First Out)

---

## ✅ Pengurutan Buku

Program dapat mengurutkan data buku berdasarkan judul menggunakan algoritma Bubble Sort.

---

# 🔄 Alur Program

Mulai Program

↓

Menampilkan Menu

↓

Tambah Buku / Kelola Buku

↓

Tambah Antrian Peminjam

↓

Proses Peminjaman

↓

Simpan Aktivitas ke Stack

↓

Tampilkan Riwayat

↓

Selesai

---

# 🧮 Algoritma yang Digunakan

## 1. Linked List

Digunakan untuk menyimpan data buku.

Keuntungan:

* Data bersifat dinamis
* Mudah menambahkan data baru
* Tidak memerlukan ukuran tetap

---

## 2. Queue

Digunakan untuk menyimpan antrian peminjam.

Konsep:

FIFO (First In First Out)

---

## 3. Stack

Digunakan untuk menyimpan riwayat aktivitas.

Konsep:

LIFO (Last In First Out)

---

## 4. Bubble Sort

Digunakan untuk mengurutkan buku berdasarkan judul secara alfabetis.

---

# 💻 Cara Mengompilasi Program

## Linux / MacOS

```bash
g++ main.cpp -o perpustakaan
```

## Windows (MinGW)

```bash
g++ main.cpp -o perpustakaan.exe
```

---

# ▶️ Menjalankan Program

## Linux / MacOS

```bash
./perpustakaan
```

## Windows

```bash
perpustakaan.exe
```

---

# 🖥️ Contoh Menu Program

```text
PERPUSTAKAAN

1. Tambah Buku
2. Tampil Buku
3. Tambah Antrian
4. Proses Antrian
5. Tampil Antrian
6. Urutan Buku
7. Riwayat
0. Keluar
```

---

# 👥 Pembagian Tugas Kelompok

| No | Anggota   | Tugas                                                                                        |
| -- | --------- | -------------------------------------------------------------------------------------------- |
| 1  | lidya maitara | Analisis kebutuhan sistem, perancangan program, implementasi Struct Buku dan Linked List |
| 2  | farel riyanto | Implementasi fitur tambah buku, tampil buku, dan pengelolaan data Linked List            |
| 3  | anis fatimah andra | Implementasi Queue (antrian peminjam) dan Stack (riwayat aktivitas)                 |
| 4  | winda wulandari | Implementasi menu program, sorting buku, pengujian sistem, dan dokumentasi             |

---

# 📌 Kelebihan Program

✅ Menggabungkan beberapa struktur data dalam satu program

* Linked List
* Queue
* Stack
* Sorting

✅ Menggunakan konsep OOP

* Class
* Object

✅ Mudah dikembangkan

Fitur yang dapat ditambahkan:

* Hapus buku
* Cari buku
* Simpan data ke file
* Sistem peminjaman dan pengembalian buku

---

# 👨‍💻 Penulis

Kelompok (Kelompok 9)

Proyek: Sistem Perpustakaan

Bahasa Pemrograman: C++

---

# 📜 Lisensi

Proyek ini dibuat untuk keperluan pembelajaran dan tugas praktikum Struktur Data dan Algoritma.
