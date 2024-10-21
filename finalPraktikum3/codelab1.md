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
     
### Kesimpulan
Perbaikan ini membuat program lebih fungsional, mudah dibaca, dan memberikan pengalaman pengguna yang lebih baik. Jika ada pertanyaan lebih lanjut atau hal lain yang ingin Anda tambahkan, silakan beri tahu!
