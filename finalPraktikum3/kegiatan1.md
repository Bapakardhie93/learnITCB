# Deskripsi Program

Program ini adalah aplikasi **bioskop** berbasis teks yang memungkinkan pengguna memilih film, jenis tiket, hari (weekday atau weekend), dan memanfaatkan diskon jika pengguna adalah member atau memilih hari weekday. Program ini dirancang untuk menghitung total harga tiket berdasarkan pilihan film dan jenis tiket, serta menerapkan diskon sesuai dengan kondisi yang berlaku. Pengguna kemudian dapat memasukkan jumlah pembayaran, dan program akan menghitung serta menampilkan kembalian (jika ada) dalam format rupiah yang benar.

## Fitur Utama
1. **Pemilihan Film**:
   Pengguna dapat memilih dari daftar film yang tersedia beserta harga tiket untuk setiap film. Harga tiket bervariasi antara film yang satu dengan yang lainnya.
   
2. **Pemilihan Jenis Tiket**:
   Pengguna dapat memilih jenis tiket yang diinginkan: *Reguler*, *VIP*, atau *VVIP*, yang memiliki harga berbeda-beda.

3. **Pemilihan Hari**:
   Pengguna dapat memilih antara weekday atau weekend. Jika memilih weekday, pengguna akan mendapatkan diskon 15%.

4. **Diskon Member**:
   Jika pengguna adalah member, program akan memberikan diskon tambahan sebesar 10%, tetapi diskon ini hanya berlaku pada weekday.

5. **Pembayaran dan Kembalian**:
   Pengguna akan diminta untuk memasukkan jumlah uang yang dibayarkan. Program kemudian akan menghitung kembalian jika pembayaran melebihi total harga tiket.

6. **Format Rupiah**:
   Harga total dan kembalian akan ditampilkan dalam format rupiah dengan pemisah titik ribuan dan desimal dua digit. Sebagai contoh, angka Rp. 150.000,50 akan ditampilkan dengan format yang benar, yakni `Rp. 150.000,50`.

---

## Penambahan Fitur

1. **Pemilihan Hari dan Diskon Weekday**:
   - Program ini menambahkan fitur di mana pengguna dapat memilih apakah mereka membeli tiket pada hari *weekday* atau *weekend*. 
   - Jika pengguna memilih hari *weekday*, diskon 15% akan diterapkan secara otomatis.
   
2. **Diskon Member**:
   - Diskon tambahan sebesar 10% diberikan kepada pengguna yang merupakan member, tetapi hanya jika mereka membeli tiket pada *weekday*. Jika pengguna adalah member tetapi membeli tiket pada *weekend*, diskon ini tidak berlaku.

---

## Penjelasan Format Rupiah

Salah satu fitur penting dari program ini adalah tampilan harga dalam format rupiah yang benar. Untuk memastikan angka ditampilkan dengan pemisah ribuan dan desimal yang sesuai dengan format rupiah, fungsi `formatRupiah()` dirancang untuk:
- **Pemisah Ribuan**: Memasukkan titik (.) sebagai pemisah setiap tiga digit dari belakang untuk mempermudah pembacaan angka besar.
- **Desimal**: Menambahkan dua digit desimal setelah koma untuk menampilkan bagian sen (jika ada).

### Contoh Format:
- **Rp. 150000,5** → **Rp. 150.000,50**
- **Rp. 5000** → **Rp. 5.000,00**

Dengan fungsi ini, angka-angka finansial dapat ditampilkan sesuai standar Indonesia dalam format yang lebih mudah dipahami.

### Code Snippet: Fungsi Format Rupiah

Berikut adalah kode untuk fungsi `formatRupiah()` yang memastikan format rupiah tampil dengan benar:

```c
void formatRupiah(float harga)
{
    int bagianUtama = (int)harga;           // Ambil bagian utama (sebelum desimal)
    int bagianDesimal = (int)((harga - bagianUtama) * 100);  // Ambil bagian desimal
    char buffer[50], formatted[50] = "";    // Buffer dan string akhir
    int len, count = 0;
    
    // Ubah bagian utama ke string
    sprintf(buffer, "%d", bagianUtama);
    len = strlen(buffer);

    // Tambahkan pemisah titik setiap tiga digit
    for (int i = len - 1; i >= 0; i--)
    {
        formatted[count++] = buffer[i];
        if ((len - i) % 3 == 0 && i != 0)
            formatted[count++] = '.';
    }
    formatted[count] = '\0';

    // Balik string agar benar
    for (int i = 0; i < count / 2; i++)
    {
        char temp = formatted[i];
        formatted[i] = formatted[count - i - 1];
        formatted[count - i - 1] = temp;
    }

    // Tambahkan desimal di akhir
    printf(GREEN "Rp. %s,%02d" RESET, formatted, bagianDesimal);
}
