# Program Demonstrasi Nilai Boolean, Operasi String, dan Pointer dalam C

Program ini menunjukkan beberapa konsep dasar dalam bahasa C, yaitu penggunaan nilai boolean, operasi string, dan penggunaan pointer. Setiap bagian program memberikan contoh yang sederhana untuk menjelaskan cara kerja masing-masing konsep.

## 1. Demonstrasi Nilai Boolean
Di C, nilai boolean tidak didefinisikan secara eksplisit, namun `1` digunakan untuk merepresentasikan `true` dan `0` untuk `false`. Program ini mendemonstrasikan penggunaan dua variabel:
- `flagTrue`: Berisi nilai `1`, mewakili `true`.
- `flagFalse`: Berisi nilai `0`, mewakili `false`.

Program akan menampilkan nilai kedua variabel tersebut untuk memberikan pemahaman tentang bagaimana boolean diimplementasikan dalam C.

## 2. Operasi String
Dalam C, string diimplementasikan sebagai array karakter yang diakhiri dengan karakter null (`\0`). Program ini menggunakan string `"Hello, World!"` yang disimpan dalam array `greeting[]`.

Fungsi `strcpy` dari pustaka `string.h` digunakan untuk menyalin string dari `greeting[]` ke variabel `copyGreeting[]`. Hasil operasi ditampilkan untuk memastikan bahwa penyalinan string berhasil.

## 3. Demonstrasi Pointer
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Program ini menunjukkan:
- Menyimpan alamat variabel `number` yang berisi nilai `100` ke dalam pointer `pointer`.
- Menampilkan alamat memori variabel `number` dan nilai yang disimpannya menggunakan pointer.
- Menampilkan nilai yang ditunjuk oleh pointer.

## Output yang Diharapkan

```text
Boolean values demonstration:
flagTrue: 1
flagFalse: 0

String operations:
Original greeting: Hello, World!
Copied greeting: Hello, World!

Pointer demonstrations:
Value of number: 100
Address of number: 0x7ffeebcb94c4   (alamat ini akan bervariasi)
Value of pointer: 0x7ffeebcb94c4   (alamat ini akan bervariasi)
Value pointed by pointer: 100
```

## Fitur Program

- **Boolean**: Menunjukkan nilai boolean `true` (`1`) dan `false` (`0`).
- **Operasi String**: Menyalin string menggunakan fungsi `strcpy` dari pustaka `string.h`.
- **Pointer**: Menunjukkan bagaimana pointer bekerja dengan menampilkan alamat variabel dan nilai yang disimpan di alamat tersebut.

Program ini digunakan sebagai referensi dasar untuk memahami beberapa konsep penting dalam pemrograman bahasa C.
