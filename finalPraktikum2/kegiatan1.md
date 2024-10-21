# Program Menghitung Keliling dan Luas Lingkaran

Program ini adalah aplikasi sederhana yang ditulis dalam bahasa C untuk menghitung keliling dan luas lingkaran berdasarkan input nilai radius dari user. Program ini juga dilengkapi dengan fitur validasi input dan opsi untuk mengulang perhitungan.

## Fitur Program

1. **Header dan Footer:**
   - Program menampilkan header di bagian atas untuk menjelaskan fungsinya, dan footer muncul ketika program selesai dijalankan.

2. **Validasi Input:**
   - Program memastikan bahwa user hanya dapat memasukkan angka positif (float) sebagai input.
   - Jika input tidak valid (bukan angka atau negatif), program akan memberikan pesan error dan meminta input ulang. Jika terjadi dua kali kesalahan berturut-turut, program menampilkan pesan "PROGRAM ERROR" dan meminta input yang benar.

3. **Penghitungan Luas dan Keliling:**
   - Program menghitung:
     - **Luas lingkaran** dengan rumus: `Luas = π × r²`
     - **Keliling lingkaran** dengan rumus: `Keliling = 2 × π × r`
   - Nilai `π` didefinisikan sebagai `3.14159`.

4. **Pilihan Mengulang Program:**
   - Setelah menghitung luas dan keliling, user akan diminta untuk memilih apakah ingin mengulang program (`y/n`). Jika input tidak sesuai, program akan meminta input ulang dengan pesan error.

5. **Pengulangan Program:**
   - Jika user memilih `y`, program akan diulang dari awal. Jika memilih `n`, program akan menampilkan footer dan kemudian keluar.

## Kondisi Program

1. **Error Handling:**
   - Program menangani input yang salah dan memberikan pesan error saat user memasukkan nilai yang tidak valid. Jika terjadi lebih dari dua kali kesalahan input, program memberikan pesan error spesifik.

2. **Penghapusan Buffer:**
   - Program menggunakan `getchar()` untuk membersihkan buffer input, menghindari kesalahan yang berulang.

3. **Pengulangan Berdasarkan Pilihan User:**
   - Program akan terus berjalan hingga user memilih untuk berhenti, dengan validasi untuk input pilihan `y` atau `n`.

## Cara Penggunaan

1. Masukkan nilai radius lingkaran yang ingin dihitung.
2. Program akan menampilkan hasil perhitungan luas dan keliling lingkaran.
3. Pilih apakah ingin mengulang program atau tidak.
