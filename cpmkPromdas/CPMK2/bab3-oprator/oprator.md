# Contoh Operasi Aritmatika dan Bitwise dalam C

Berikut adalah beberapa contoh operasi aritmatika dan bitwise yang menunjukkan cara kerja operator di dalam bahasa pemrograman C:

### a. `2 + 3 * 5 = 17`

Operasi dilakukan sesuai dengan urutan prioritas operator. Operator perkalian didahulukan, baru kemudian penjumlahan.

1. **Perkalian**: `3 * 5 = 15`
2. **Penjumlahan**: `2 + 15 = 17`

Hasil: **`17`**

---

### b. `10 - 7 + 3 % 6 = 6`

Urutan operasi dilakukan mulai dari modulus terlebih dahulu, kemudian diikuti dengan penjumlahan dan pengurangan dari kiri ke kanan.

1. **Modulus**: `3 % 6 = 3` (nilai 3 adalah sisa dari pembagian 3 dengan 6)
2. **Pengurangan**: `10 - 7 = 3`
3. **Penjumlahan**: `3 + 3 = 6`

Hasil: **`6`**

---

### c. `3 % 7 / 2 - 1 = 0`

Urutan operasi dimulai dari modulus, kemudian pembagian, dan terakhir pengurangan.

1. **Modulus**: `3 % 7 = 3` (sisa pembagian 3 dengan 7)
2. **Pembagian**: `3 / 2 = 1` (karena pembagian bilangan bulat menghasilkan bilangan bulat)
3. **Pengurangan**: `1 - 1 = 0`

Hasil: **`0`**

---

### d. `++5 * 3 / 6 % 7 = ?`

Ekspresi ini tidak valid dalam C karena kita tidak bisa menggunakan operasi increment (`++`) pada literal (angka konstan seperti `5`). Operasi increment hanya dapat digunakan pada variabel.

Hasil: **Ekspresi Tidak Valid**

---

### e. `3 * 2++ - 4 * 7 = ?`

Sama seperti contoh sebelumnya, kita tidak bisa menggunakan `2++` karena `2` adalah literal (angka konstan), dan operasi increment tidak bisa diterapkan pada konstanta. Operasi increment hanya bisa diterapkan pada variabel.

Hasil: **Ekspresi Tidak Valid**

---

### f. `6 << 2 = 24`

Operator `<<` adalah operator bitwise shift ke kiri. Angka `6` dalam biner adalah `00000110`. Menggeser bit ke kiri sebanyak 2 posisi menghasilkan:

`00000110` → `00011000` (ini sama dengan `24` dalam desimal).

Hasil: **`24`**

---

### g. `12 >> 3 = 1`

Operator `>>` adalah operator bitwise shift ke kanan. Angka `12` dalam biner adalah `00001100`. Menggeser bit ke kanan sebanyak 3 posisi menghasilkan:

`00001100` → `00000001` (ini sama dengan `1` dalam desimal).

Hasil: **`1`**

---

**Catatan**: Ekspresi yang melibatkan increment pada literal (seperti `++5` atau `2++`) tidak valid dalam bahasa C karena increment/decrement hanya dapat digunakan pada variabel, bukan pada angka konstan.
