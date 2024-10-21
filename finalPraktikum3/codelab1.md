Berikut adalah ringkasan perbaikan yang saya terapkan pada program:

1. **Validasi Input Umur**:
   - Tambahkan looping untuk memastikan pengguna terus diminta untuk memasukkan umur hingga memberikan input yang valid (misalnya, rentang 0-120).
   - Gunakan `scanf` untuk membaca input dan periksa apakah input valid menggunakan `if` untuk menangani kesalahan input.

2. **Penggunaan Konstanta**:
   - Definisikan harga normal menggunakan `#define` atau `const` untuk membuat program lebih terstruktur dan mudah dipahami.
   - Contoh: 
     ```c
     #define HARGA_NORMAL 1000000
     ```
     atau 
     ```c
     const int HARGA_NORMAL = 1000000;
     ```

3. **Membersihkan Buffer Input**:
   - Gunakan `getchar()` dalam loop untuk membersihkan buffer setelah input yang tidak valid, mencegah masalah pada input berikutnya.

4. **Struktur Loop yang Jelas**:
   - Gunakan loop tak terbatas (`while (1)`) dan `break` untuk keluar dari loop saat input valid diterima, memastikan alur logika program tetap bersih.

5. **Pesan Error yang Jelas**:
   - Tampilkan pesan kesalahan yang jelas ketika input tidak valid, sehingga pengguna mengetahui apa yang salah dan apa yang diharapkan.

6. **Output Valid**:
   - Setelah mendapatkan input yang valid, cetak nilai yang dimasukkan (misalnya, umur) untuk memberikan umpan balik kepada pengguna.

## Contoh Output

Setelah menjalankan program, output yang diharapkan adalah sebagai berikut:

### Contoh Output 1: Umur Penumpang di bawah 2 tahun
```
Masukkan umur penumpang: 1
Umur yang dimasukkan: 1
Penumpang mendapatkan tiket gratis.
```

### Contoh Output 2: Umur Penumpang antara 2 hingga 12 tahun
```
Masukkan umur penumpang: 8
Umur yang dimasukkan: 8
Harga tiket setelah diskon adalah: Rp. 500.000
```

### Contoh Output 3: Umur Penumpang antara 13 hingga 60 tahun
```
Masukkan umur penumpang: 30
Umur yang dimasukkan: 30
Harga tiket setelah diskon adalah: Rp. 1.000.000
```

### Contoh Output 4: Umur Penumpang di atas 60 tahun
```
Masukkan umur penumpang: 70
Umur yang dimasukkan: 70
Harga tiket setelah diskon adalah: Rp. 750.000
```

### Contoh Output 5: Input tidak valid (misalnya: karakter)
```
Masukkan umur penumpang: abc
ERROR: Masukkan umur yang valid.
```

### Contoh Output 6: Input tidak valid (misalnya: umur negatif)
```
Masukkan umur penumpang: -5
ERROR: Masukkan umur yang valid.
```

### Contoh Output 7: Input tidak valid (misalnya: umur lebih dari 120)
```
Masukkan umur penumpang: 125
ERROR: Masukkan umur yang valid.
```

### Contoh Output 8: Input Valid Setelah Input Tidak Valid
```
Masukkan umur penumpang: abc
ERROR: Masukkan umur yang valid.
Masukkan umur penumpang: 45
Umur yang dimasukkan: 45
Harga tiket setelah diskon adalah: Rp. 1.000.000
```

### Penjelasan Output:
1. **Tiket Gratis**: Jika umur penumpang di bawah 2 tahun, program akan menampilkan bahwa penumpang mendapatkan tiket gratis.
2. **Diskon**: Untuk penumpang berumur antara 2 hingga 12 tahun, diskon 50% diterapkan, dan harga tiket yang ditampilkan adalah Rp. 500.000.
3. **Harga Normal**: Untuk penumpang berumur antara 13 hingga 60 tahun, harga tiket tetap Rp. 1.000.000.
4. **Diskon untuk Lansia**: Untuk penumpang berumur di atas 60 tahun, diskon 25% diterapkan, dan harga tiket yang ditampilkan adalah Rp. 750.000.
5. **Validasi Input**: Program melakukan validasi input untuk memastikan bahwa umur yang dimasukkan adalah angka yang valid dan berada dalam rentang 0 hingga 120. Jika tidak, akan muncul pesan kesalahan yang sesuai.

### Kesimpulan
Perbaikan ini membuat program lebih fungsional, mudah dibaca, dan memberikan pengalaman pengguna yang lebih baik. Jika ada pertanyaan lebih lanjut atau hal lain yang ingin Anda tambahkan, silakan beri tahu!
