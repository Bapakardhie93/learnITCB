---

# Deskripsi Program

Program ini memungkinkan pengguna untuk memilih kategori kelas penerbangan (Economy, Business, atau First Class) dan menampilkan harga tiket berdasarkan pilihan tersebut. Program ini juga melakukan validasi input untuk memastikan bahwa pengguna hanya memasukkan nilai yang sah.

## Fitur Utama

1. **Pilihan Kategori Kelas**:
   - Pengguna diberikan tiga pilihan kategori kelas penerbangan:
     - **Economy**: $250
     - **Business**: $500
     - **First Class**: $550

2. **Validasi Input**:
   - Program melakukan validasi untuk memastikan bahwa input pengguna berada dalam rentang yang valid (1-3). Jika pengguna memasukkan nilai di luar rentang tersebut atau bukan angka, program akan menampilkan pesan kesalahan.

3. **Warna Teks**:
   - Menggunakan ANSI escape codes untuk memberikan warna pada output:
     - **Merah** untuk menampilkan pesan kesalahan input.
     - **Biru** untuk menampilkan kategori kelas yang dipilih.
     - **Hijau** untuk menampilkan harga tiket.

4. **Fungsi untuk Membersihkan Buffer Input**:
   - Program memiliki fungsi `bersihkanBufferInput()` yang digunakan untuk mengosongkan buffer input ketika pengguna memasukkan input yang tidak valid. Hal ini mencegah program terjebak dalam loop input yang salah.

## Kondisi yang Diterapkan

1. **Pengulangan untuk Input**:
   - Program menggunakan loop `do-while` untuk meminta pengguna memasukkan pilihan kategori kelas hingga input yang valid (1-3) diterima.
   - Jika input tidak valid, program akan menampilkan pesan kesalahan dan meminta pengguna untuk memasukkan pilihan kembali.

2. **Pesan Kesalahan**:
   - Jika pengguna memasukkan angka di luar rentang 1-3 atau memasukkan karakter yang bukan angka, program akan menampilkan pesan kesalahan:
     ```
     Inputan tidak valid. Masukkan (1-3)!
     ```

3. **Penentuan Harga**:
   - Setelah pengguna memasukkan pilihan yang valid, program menggunakan `switch` untuk menentukan harga berdasarkan kategori kelas yang dipilih dan menampilkannya kepada pengguna.

4. **Inisialisasi Variabel**:
   - Variabel `choice` diinisialisasi dengan 0 untuk memastikan bahwa validasi input dapat dilakukan pada iterasi pertama.

## Contoh Output

Setelah menjalankan program, output yang diharapkan adalah sebagai berikut:

```
Pilih kategori kelas: 
1. Economy
2. Business
3. First Class
Masukkan pilihan (1-3): 2
Anda memilih kategori: Business
Harga: $500
```

---
